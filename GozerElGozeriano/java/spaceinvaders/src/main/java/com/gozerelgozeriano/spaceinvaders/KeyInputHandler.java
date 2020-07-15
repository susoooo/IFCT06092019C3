package com.gozerelgozeriano.spaceinvaders;

import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

public class KeyInputHandler extends KeyAdapter {
    /**
     * A class to handle keyboard input from the user. The class
     * handles both dynamic input during game play, i.e. left/right 
     * and shoot, and more static type input (i.e. press any key to
     * continue)
     */
    /** The number of key presses we've had while waiting for an "any key" press */
    private int pressCount = 1;
    private Game game;
    /**
     * Notification from AWT that a key has been pressed. Note that
     * a key being pressed is equal to being pushed down but *NOT*
     * released. Thats where keyTyped() comes in.
     *
     * @param e The details of the key that was pressed 
     */
                
    public KeyInputHandler(Game game){
        this.game = game;
    }
                
    public void keyPressed(KeyEvent e) {
        // if we're waiting for an "any key" typed then we don't 
	// want to do anything with just a "press"
	if (game.getwaitingForKeyPress()) {
            return;
	}
			
	if (e.getKeyCode() == KeyEvent.VK_LEFT) {
            game.setleftPressed(true);
	}
	if (e.getKeyCode() == KeyEvent.VK_RIGHT) {
            game.setrightPressed(true);
	}
	if (e.getKeyCode() == KeyEvent.VK_SPACE) {
            game.setfirePressed(true);
	}
    } 
		
    /**
    * Notification from AWT that a key has been released.
    *
    * @param e The details of the key that was released 
    */
    public void keyReleased(KeyEvent e) {
        // if we're waiting for an "any key" typed then we don't want to do anything with just a "released"
        if (game.getwaitingForKeyPress()) {
            return;
        }
			
        if (e.getKeyCode() == KeyEvent.VK_LEFT) {
            game.setleftPressed(false);
        }
        if (e.getKeyCode() == KeyEvent.VK_RIGHT) {
            game.setrightPressed(false);
	}
	if (e.getKeyCode() == KeyEvent.VK_SPACE) {
            game.setfirePressed(false);
	}
    }

    /**
    * Notification from AWT that a key has been typed. Note that
    * typing a key means to both press and then release it.
     *
     * @param e The details of the key that was typed. 
     */
    public void keyTyped(KeyEvent e) {
        // if we're waiting for a "any key" type then check if we've recieved any recently. We may have had a keyType()
        // event from the user releasing the shoot or move keys, hence the use of the "pressCount" counter.
        if (game.getwaitingForKeyPress()) {
            if (pressCount == 1) {
                // since we've now recieved our key typed
                // event we can mark it as such and start 
                // our new game
                game.setwaitingForKeyPress(false);
                game.startGame();
                pressCount = 0;
                } else {
                    pressCount++;
                }
        }
			
        // if we hit escape, then quit the game
        if (e.getKeyChar() == 27) {
            System.exit(0);
        }
    }
}