package com.gozerelgozeriano.spaceinvaders;

import java.awt.Graphics;
import java.awt.Rectangle;

public abstract class Entity {
    /** The current x location of this entity */ 
    protected double x;
    /** The current y location of this entity */
    protected double y;
    /** The sprite that represents this entity */
    protected Sprite sprite;
    /** The current speed of this entity horizontally (pixels/sec) */
    protected double dx;
    /** The current speed of this entity vertically (pixels/sec) */
    protected double dy;
    /** The rectangle used for this entity during collisions  resolution */
    private Rectangle me = new Rectangle();
    /** The rectangle used for other entities during collision resolution */
    private Rectangle him = new Rectangle();
    
    /**
     * Construct a entity based on a sprite image and a location.
     * 
     * @param ref The reference to the image to be displayed for this entity
     * @param x The initial x location of this entity
     * @param y The initial y location of this entity
     */
    public Entity(String ref,int x,int y) {
    	this.sprite = SpriteStore.get().getSprite(ref);
    	this.x = x;
    	this.y = y;
    }
    
    /**
     * Request that this entity move itself based on a certain ammount
     * of time passing.
     * 
     * @param delta The ammount of time that has passed in milliseconds
     */
    public void move(long delta) {
	// update the location of the entity based on move speeds
	x += (delta * dx) / 1000;
	y += (delta * dy) / 1000;
    }
    
    /**
     * Draw this entity to the graphics context provided
     * 
     * @param g The graphics context on which to draw
     */
    public void draw(Graphics g) {
	sprite.draw(g,(int) x,(int) y);
    }
    
    /**
     * Get the horizontal speed of this entity
     * 
     * @return The horizontal speed of this entity (pixels/sec)
     */
    public double getHorizontalMovement() {
	return dx;
    }
    
    /**
     * Set the horizontal speed of this entity
     * 
     * @param dx The horizontal speed of this entity (pixels/sec)
     */
    public void setHorizontalMovement(double dx) {
	this.dx = dx;
    }
}
