package main;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class panel extends JPanel
{
    public final static int ancho = 600;
    public final static int alto = 400;

    @Override
    protected void paintComponent(Graphics g) 
    {
	super.paintComponent(g);
        draw(g);
    }

    void draw(Graphics g) 
    {
        
    }
    
    
}

