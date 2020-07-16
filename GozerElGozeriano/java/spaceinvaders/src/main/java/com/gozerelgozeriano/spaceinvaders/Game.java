package com.gozerelgozeriano.spaceinvaders;

import java.awt.Canvas;
import java.awt.Dimension;
import java.awt.Graphics2D;
import java.awt.Color;
import java.awt.image.BufferStrategy;
import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.util.ArrayList;


public class Game extends Canvas{
    /* SCREEN OPTIONS */
    final private int DIMENSIONX = 800;             // Dimension X screen
    final private int DIMENSIONY = 600;             // Dimension Y screen
    /* ACTORS GESTION */
    private ArrayList entities = new ArrayList();   // The list of all the entities that exist in our game
    private ShipEntity ship;                        // The hero
    private ArrayList removeList = new ArrayList(); // The list of entities that need to be removed from the game this loop
    private int alienCount;                         // The number of aliens left on the screen
    /* SCENE */
    private BufferStrategy strategy;                // The stragey that allows us to use accelerate page flipping
    private boolean gameRunning = true;             // True if the game is currently "running", i.e. the game loop is looping
    private boolean waitingForKeyPress = true;      // True if we're holding up game play until a key has been pressed
    private long lastFire = 0;                      // The time at which last fired a shot
    /* GAME OPTIONS */
    final private double ACELERATION = 1.03;        // Acelerate aliens when one die
    final private long FIRINGINTERVAL = 550;        // The interval between our players shot (ms)
    final private double SHIPMOVESPEED = 300;       // The speed at which the player's ship should move (pixels/sec)
    final private int ALIENSSTARTING = 12;          // Aliens at the start of the game
    final private int ALIENSROWS = 5;               // Aliens rows at the start of the game
    /* ACTION */
    private boolean leftPressed = false;            // True if the left cursor key is currently pressed
    private boolean rightPressed = false;           // True if the right cursor key is currently pressed
    private boolean firePressed = false;            // True if we are firing
    private boolean logicRequiredThisLoop = false;  // True if game logic needs to be applied this loop, normally as a result of a game event
    /* OTHER */
    private String message = "";                        // The message to display which waiting for a key press
    final private String STARTSTRING = "Press any key"; // Message at start of the game
    
    /* GETS & SETS */
    public boolean getwaitingForKeyPress(){
        return(waitingForKeyPress);
    }
    public void setwaitingForKeyPress(boolean waitingForKeyPress){
        this.waitingForKeyPress = waitingForKeyPress;
    }
    public boolean getleftPressed(){
        return(leftPressed);
    }
    public void setleftPressed(boolean leftPressed){
        this.leftPressed = leftPressed;
    }
    public boolean getrightPressed(){
        return(rightPressed);
    }
    public void setrightPressed(boolean rightPressed){
        this.rightPressed = rightPressed;
    }
    public boolean getfirePressed(){
        return(firePressed);
    }
    public void setfirePressed(boolean firePressed){
        this.firePressed = firePressed;
    }
    
    public Game(){
        // create a frame to contain our game
        JFrame container = new JFrame("Space Invaders");

        // get hold the content of the frame and set up the resolution of the game
        JPanel panel = (JPanel) container.getContentPane();
        panel.setPreferredSize(new Dimension(DIMENSIONX,DIMENSIONY));
        panel.setLayout(null);

        // setup our canvas size and put it into the content of the frame
        setBounds(0,0,DIMENSIONX,DIMENSIONY);
        panel.add(this);

        // Tell AWT not to bother repainting our canvas since we're going to do that our self in accelerated mode
        setIgnoreRepaint(true);

        // finally make the window visible 
        container.pack();
        container.setResizable(false);
        container.setVisible(true);
		
        // add a key input system (defined below) to our canvas so we can respond to key pressed
        addKeyListener(new KeyInputHandler(this));
	
	// request the focus so key events come to us
	requestFocus();

        // create the buffering strategy which will allow AWT to manage our accelerated graphics
        createBufferStrategy(2);
        strategy = getBufferStrategy();
        
        // add a listener to respond to the user closing the window. If they do we'd like to exit the game
	container.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
    }
    
    public void gameLoop(){
        long lastLoopTime = System.currentTimeMillis();
        while (gameRunning) {
            // work out how long its been since the last update, this will be used to calculate how far the entities should move this loop
            long delta = System.currentTimeMillis() - lastLoopTime;
            lastLoopTime = System.currentTimeMillis();

            // Get hold of a graphics context for the accelerated surface and blank it out
            Graphics2D graph = (Graphics2D) strategy.getDrawGraphics();
            graph.setColor(Color.black);
            graph.fillRect(0,0,DIMENSIONX,DIMENSIONY);

            // cycle round asking each entity to move itself
            if (!waitingForKeyPress) {
                for (int i=0;i<entities.size();i++) {
                    Entity entity = (Entity) entities.get(i);
                    entity.move(delta);
                }
            }

            // cycle round drawing all the entities we have in the game
            for (int i=0;i<entities.size();i++) {
                Entity entity = (Entity) entities.get(i);
                entity.draw(graph);
            }
            
            // brute force collisions, compare every entity against every other entity. If any of them collide notify 
            // both entities that the collision has occured
            for (int p=0;p<entities.size();p++) {
		for (int s=p+1;s<entities.size();s++) {
                    Entity me = (Entity) entities.get(p);
                    Entity him = (Entity) entities.get(s);		
                    if (me.collidesWith(him)) {
                        me.collidedWith(him);
                        him.collidedWith(me);
                    }
		}
            }
            
            // remove any entity that has been marked for clear up
            entities.removeAll(removeList);
            removeList.clear();

            // if a game event has indicated that game logic should be resolved, cycle round every entity requesting that
            // their personal logic should be considered.
            if (logicRequiredThisLoop) {
		for (int i=0;i<entities.size();i++) {
                    Entity entity = (Entity) entities.get(i);
                    entity.doLogic();
		}
		logicRequiredThisLoop = false;
            }
            
            // if we're waiting for an "any key" press then draw the current message 
            if (waitingForKeyPress) {
		graph.setColor(Color.white);
		graph.drawString(message,(DIMENSIONX-graph.getFontMetrics().stringWidth(message))/2,DIMENSIONY/2-60);
                graph.drawString(STARTSTRING,(DIMENSIONX-graph.getFontMetrics().stringWidth(STARTSTRING))/2,DIMENSIONY/2);
            }
            // finally, we've completed drawing so clear up the graphics and flip the buffer over
            graph.dispose();
            strategy.show();
            
            if(!waitingForKeyPress){
                // resolve the movement of the ship. First assume the ship isn't moving. If either cursor key is pressed then
                // update the movement appropraitely
                //ship.setHorizontalMovement(0);
                if ((leftPressed) && (!rightPressed)) {
                    ship.setHorizontalMovement(-SHIPMOVESPEED);
                } else if ((rightPressed) && (!leftPressed)) {
                    ship.setHorizontalMovement(SHIPMOVESPEED);
                }

                // if we're pressing fire, attempt to fire
                if (firePressed) {
                    tryToFire();
                }
            }
            // finally pause for a bit. Note: this should run us at about 100 fps but on windows
            // this might vary each loop due to a bad implementation of timer
            try { Thread.sleep(10); } catch (Exception e) {}
        }
    }
    
    /**
     * Remove an entity from the game. The entity removed will
     * no longer move or be drawn.
     * 
     * @param entity The entity that should be removed
     */
    public void removeEntity(Entity entity) {
        removeList.add(entity);
    }
    
    /**
     * Notification that the player has died. 
     */
    public void notifyDeath() {
	message = "Oh no! You're DEAD! Try again?";
	waitingForKeyPress = true;
    }
    
    /**
     * Notification that the player has won since all the aliens are dead.
     */
    public void notifyWin() {
	message = "Well done! You Win!";
	waitingForKeyPress = true;
    }
    
    /**
     * Notification that an alien has been killed
     */
    public void notifyAlienKilled() {
    	// reduce the alient count, if there are none left, the player has won!
	alienCount--;
		
	if (alienCount == 0) {
            notifyWin();
	}
		
	// if there are still some aliens left then they all need to get faster, so speed up all the existing aliens
	for (int i=0;i<entities.size();i++) {
            Entity entity = (Entity) entities.get(i);
			
            if (entity instanceof AlienEntity) {
		// speed up by 2%
		entity.setHorizontalMovement(entity.getHorizontalMovement() * ACELERATION);
            }
	}
    }
    
    /**
     * Start a fresh game, this should clear out any old data and create a new set.
     */
    public void startGame() {
        // clear out any existing entities and intialise a new set
        entities.clear();
        initEntities();	
        // blank out any keyboard settings we might currently have
        leftPressed = false;
        rightPressed = false;
        firePressed = false;
    }
 
    /**
     * Initialise the starting state of the entities (ship and aliens). Each entitiy will be added to the overall list of entities in the game.
     */
    private void initEntities() {
	// create the player ship and place it roughly in the center of the screen
	ship = new ShipEntity(this,"sprites/ship.gif",370,550);                                     // <----------------------------
	entities.add(ship);
		
	// create a block of aliens (5 rows, by 12 aliens, spaced evenly)
	alienCount = 0;
	for (int row=0;row<ALIENSROWS;row++) {
            for (int x=0;x<ALIENSSTARTING;x++) {
		Entity alien = new AlienEntity(this,"sprites/alien.gif",100+(x*50),(50)+row*30);    // <----------------------------
		entities.add(alien);
		alienCount++;
            }
	}
    }
    
    /**
     * Notification from a game entity that the logic of the game
     * should be run at the next opportunity (normally as a result of some
     * game event)
    */
    public void updateLogic() {
	logicRequiredThisLoop = true;
    }
    
    /**
     * Attempt to fire a shot from the player. Its called "try" since we must first check that the player can fire at this 
     * point, i.e. has he/she waited long enough between shots
     */
    public void tryToFire() {
	// check that we have waiting long enough to fire
	if (System.currentTimeMillis() - lastFire < FIRINGINTERVAL) {
		return;
	}
        // if we waited long enough, create the shot entity, and record the time.
        lastFire = System.currentTimeMillis();
        ShotEntity shot = new ShotEntity(this,"sprites/shot.gif",ship.getX()+10,ship.getY()-30);
        entities.add(shot);
    }
}