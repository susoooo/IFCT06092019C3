/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Ventana;

/**
 *
 * @author Usuario
 */
import java.awt.Color;
import java.awt.Component;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;


public class ventana extends JFrame {
    
    
    public ventana(){
        
        this.setSize(600,600); //Tamaño de la Ventana
        setTitle("Hola Mundo"); //Titulo de la Ventana
        
        //setLocation(100,200); //Establecemos la posicion inicial de la ventana
        //setBounds(100,200,500,500);//Establecemos la posicion inicial y el tamaño de la ventana
        Component Null = null;
        setLocationRelativeTo(Null);//Establece la ventana en el medio o centro
        int EXIT_ON_CLASE = 0;
        
        getContentPane().setBackground(Color.GREEN);
        
        //inciarComponentes();
        
        setDefaultCloseOperation(EXIT_ON_CLASE);
    }
    
    private void iniciarComponentes(){
    
        JPanel panel= new JPanel(); //Creacion de un panel
        
        panel.setLayout(null); //Desactiva el diseño 
       
        this.getContentPane().add(panel); //Agregamos el panel a la ventana
        
        JLabel etiqueta= new JLabel(); //permite mostrar básicamente un texto
        
        etiqueta.setText("Hola Humano"); //Establecemos el texto de la etiqueta
           
        etiqueta.setBounds(10,10,50,50); //cambia el tamaño de un componente para caber dentro de los 
                                         //parámetros de un rectángulo delimitador especificado
         
        etiqueta.setForeground(Color.YELLOW); //Establecemos el color de la letra. 
        
        panel.add(etiqueta); //Agregamos la etiqueta del panel. 
        
        
        
}

   
} 
