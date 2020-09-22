/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.interfacebasededatos.accessingdatamysql;

import java.util.*;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.ObjectInputStream;
import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.DefaultListModel;
import org.hibernate.cache.spi.support.AbstractReadWriteAccess.Item;

/**
 *
 * @author Usuario
 */
public class BuscarCliente extends javax.swing.JFrame {

        
    DefaultListModel modListaClientes = new DefaultListModel();
    
    public class Cliente {

    
    public String nombrecomercial;
    private String nombrefiscal;
    private String DNI;
    private String Direccion;
    private String CP;
    private String Ciudad;
    private String Provincia;
    private String Pais;
    private String Telefono;
    private String movil;
    private String fax;
    private String web;
    private String email;
    private String contacto;
    private String sinIVA;
    private String RE;
    private String pago;
    private String Banco;
    private Float descuento;
    private Integer IBAN;
    private Integer BIC;

    }
    
    public class Datos {
    private List<Cliente> cliente;
    
     }
    
    
    
    
    public BuscarCliente() {
        initComponents();
        /*CrearPresupuestos abrirCrearPres= new CrearPresupuestos();
        abrirCrearPres.setVisible(true);*/
       
    }

   
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        txtNombre = new javax.swing.JTextField();
        jButtonBuscar = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        jList1 = new javax.swing.JList<>();
        jButtonAceptarBuscarCliente = new javax.swing.JButton();
        jButtonCancelarBusquedaCliente = new javax.swing.JButton();
        jScrollPane3 = new javax.swing.JScrollPane();
        tblDatosClientes = new javax.swing.JTable();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Buscar cliente");

        txtNombre.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtNombreActionPerformed(evt);
            }
        });

        jButtonBuscar.setText("Buscar");
        jButtonBuscar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonBuscarActionPerformed(evt);
            }
        });

        jList1.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jList1MouseClicked(evt);
            }
        });
        jScrollPane1.setViewportView(jList1);

        jButtonAceptarBuscarCliente.setText("Aceptar");
        jButtonAceptarBuscarCliente.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonAceptarBuscarClienteActionPerformed(evt);
            }
        });

        jButtonCancelarBusquedaCliente.setText("Cancelar");
        jButtonCancelarBusquedaCliente.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCancelarBusquedaClienteActionPerformed(evt);
            }
        });

        tblDatosClientes.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Nombre Fiscal", "Nombre Comercial", "Dirección", "CP", "Ciudad", "NIF"
            }
        ));
        jScrollPane3.setViewportView(tblDatosClientes);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jButtonAceptarBuscarCliente)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jButtonCancelarBusquedaCliente)
                .addGap(20, 20, 20))
            .addGroup(layout.createSequentialGroup()
                .addGap(64, 64, 64)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jButtonBuscar, javax.swing.GroupLayout.PREFERRED_SIZE, 79, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(txtNombre, javax.swing.GroupLayout.PREFERRED_SIZE, 291, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 519, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(62, Short.MAX_VALUE))
            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(layout.createSequentialGroup()
                    .addContainerGap()
                    .addComponent(jScrollPane3, javax.swing.GroupLayout.PREFERRED_SIZE, 583, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addContainerGap(52, Short.MAX_VALUE)))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(34, 34, 34)
                .addComponent(jButtonBuscar, javax.swing.GroupLayout.PREFERRED_SIZE, 35, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 162, Short.MAX_VALUE)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 89, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(txtNombre, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(13, 13, 13)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButtonCancelarBusquedaCliente)
                    .addComponent(jButtonAceptarBuscarCliente))
                .addContainerGap())
            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(layout.createSequentialGroup()
                    .addGap(97, 97, 97)
                    .addComponent(jScrollPane3, javax.swing.GroupLayout.PREFERRED_SIZE, 109, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addContainerGap(199, Short.MAX_VALUE)))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void txtNombreActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtNombreActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtNombreActionPerformed

    private void jButtonCancelarBusquedaClienteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCancelarBusquedaClienteActionPerformed
       dispose();
    }//GEN-LAST:event_jButtonCancelarBusquedaClienteActionPerformed

    private void jButtonAceptarBuscarClienteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonAceptarBuscarClienteActionPerformed
      
        Gson json = new Gson();
        BDClientes cliente;
        String nombrecomercial =txtNombre.getText();//Obtengo el texto que contiene el textfield txtNombre*/
        
       String s = null;
        try {
        String command = "curl localhost:8080/demo/buscarpornombrecomercial?nombre="+nombrecomercial;
        Process process = Runtime.getRuntime().exec(command);
        BufferedReader stdInput = new BufferedReader(new InputStreamReader(process.getInputStream()));

        cliente = json.fromJson(stdInput, BDClientes.class);
        
        CrearPresupuestos.jTextFieldNombreFiscal.setText(cliente.getNombrefiscal());
        CrearPresupuestos.jTextFieldNombreComercial.setText(cliente.getNombrecomercial());
        CrearPresupuestos.jTextFieldDireccion.setText(cliente.getdireccion());
        CrearPresupuestos.jTextFieldCPyCiudad.setText(cliente.getcp());
        CrearPresupuestos.jTextFieldNIF.setText(cliente.getdni());
              

                              
       }
       catch (IOException ex) {
          Logger.getLogger(CrearCliente.class.getName()).log(Level.SEVERE, null, ex);
       }     
        
         dispose(); 
    }//GEN-LAST:event_jButtonAceptarBuscarClienteActionPerformed

    private void jButtonBuscarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonBuscarActionPerformed
       ObjectInputStream in;
       Gson json = new Gson();
       
               
       String s = null;
        try {
        String command = "curl localhost:8080/demo/all";
        Process process = Runtime.getRuntime().exec(command);
        BufferedReader stdInput = new BufferedReader(new InputStreamReader(process.getInputStream()));

        List<BDClientes> l_clientes = json.fromJson(stdInput, new TypeToken<List<BDClientes>>() {}.getType());
        l_clientes.forEach(cliente -> modListaClientes.addElement(cliente.getNombrecomercial()));
        jList1.setModel(modListaClientes);
          
            
       }
       catch (IOException ex) {
          Logger.getLogger(CrearCliente.class.getName()).log(Level.SEVERE, null, ex);
       }
    }//GEN-LAST:event_jButtonBuscarActionPerformed

    private void jList1MouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jList1MouseClicked
        String Mensaje;
        Mensaje= "";
        txtNombre.setText(Mensaje+jList1.getSelectedValue().toString());
              
               
    }//GEN-LAST:event_jList1MouseClicked
 /*for (int i = 0; i <= modListaClientes.size() - 1; i++) {
            System.out.println(modListaClientes.get(i));
        }*/
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(BuscarCliente.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(BuscarCliente.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(BuscarCliente.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(BuscarCliente.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new BuscarCliente().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButtonAceptarBuscarCliente;
    private javax.swing.JButton jButtonBuscar;
    private javax.swing.JButton jButtonCancelarBusquedaCliente;
    private javax.swing.JList<String> jList1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane3;
    private javax.swing.JTable tblDatosClientes;
    public static javax.swing.JTextField txtNombre;
    // End of variables declaration//GEN-END:variables
}
