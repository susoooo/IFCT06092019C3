/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.gozerelgozeriano.pizzeria;

import java.awt.Container;
//import java.awt.Dimension;
import java.awt.GridLayout;
//import java.awt.Toolkit;
import javax.swing.JButton;

/**
 *
 * @author Usuario
 */
public class PnlIngredientes extends javax.swing.JPanel {
    
    private Container contenedor;
    private GridLayout layout;
    private JButton[][] botones;
    private Pizzainfo info;

    /**
     * Creates new form PnlPizza
     */
    public PnlIngredientes() {
        initComponents();
        info = new Pizzainfo();
        info.Load();
        layout = new GridLayout(4, 4);
        contenedor = this;
        contenedor.setLayout(layout);
        botones = new JButton[4][4];
        String[] bases = info.getingr();
        int count = 0;

        //Dimension pantalla = Toolkit.getDefaultToolkit().getScreenSize();
        //int height = pantalla.height;
        //int width = pantalla.width;
        setSize(693, 557);
        
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if(count<bases.length){
                    botones[i][j] = new JButton(bases[count]);
                    contenedor.add(botones[i][j]);
                    count++;
                }
            }
       }
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(this);
        this.setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 400, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 300, Short.MAX_VALUE)
        );
    }// </editor-fold>//GEN-END:initComponents


    // Variables declaration - do not modify//GEN-BEGIN:variables
    // End of variables declaration//GEN-END:variables
}