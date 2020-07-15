package com.gozerelgozeriano.spaceinvaders;

public class AlienEntity extends Entity{
    /** The speed at which the alient moves horizontally */
    private double moveSpeed = 75;
    /** The game in which the entity exists */
    private Game game;    
    
    /**
     * Create a new alien entity
     * 
     * @param game The game in which this entity is being created
     * @param ref The sprite which should be displayed for this alien
     * @param x The intial x location of this alien
     * @param y The intial y location of this alient
     */
    public AlienEntity(Game game,String ref,int x,int y) {
	super(ref,x,y);
		
	this.game = game;
	dx = -moveSpeed;
    }
    
    
}
