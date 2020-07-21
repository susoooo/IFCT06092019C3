/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.juanspace.formas;

import java.awt.Color;
import java.awt.Graphics;

/**
 *
 * @author Usuario
 */

public class Pintura {
  public void init(){
    setBackground(Color.white);
  }
  public void paint(Graphics g) {
    int x = 0, y = 0, ancho, alto;
    int appletAlto = (int) getSize(x);
    int appletAncho = (int) getSize(y);

	for (int i=8; i>=0; i--) {
      if ((i % 2)==0) g.setColor(Color.red);
      else g.setColor(getBackground());
      alto = appletAlto*i/8;
      ancho = appletAncho*i/8;
      x=appletAncho/2-i*appletAncho/16;
      y=appletAlto/2-i*appletAlto/16;
      g.fillOval(x, y, ancho, alto);
    }
  }

    private void setBackground(Color white) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    private Object getSize(int x) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    private Color getBackground() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
