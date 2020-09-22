/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.interfacebasededatos.accessingdatamysql;

import com.interfacebasededatos.accessingdatamysql.CrearCliente;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Teresa
 */
public class CrearProducto extends javax.swing.JFrame {

    /**
     * Creates new form CrearProducto
     */
    public CrearProducto() {
        initComponents();
      
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jTabbedPane1 = new javax.swing.JTabbedPane();
        jPanelDatosGenerales = new javax.swing.JPanel();
        jLabelCodigoProducto = new javax.swing.JLabel();
        jTextFieldCodigoProducto = new javax.swing.JTextField();
        jTextFieldNombreProducto = new javax.swing.JTextField();
        jLabelNombreProducto = new javax.swing.JLabel();
        jLabelDatosVenta = new javax.swing.JLabel();
        jSeparator1 = new javax.swing.JSeparator();
        jTextFieldPrecio = new javax.swing.JTextField();
        jLabelPrecio = new javax.swing.JLabel();
        jLabelDescuento = new javax.swing.JLabel();
        jTextFieldDescuento = new javax.swing.JTextField();
        jTextFieldIVA = new javax.swing.JTextField();
        jLabelIVA = new javax.swing.JLabel();
        jTextFieldPVP = new javax.swing.JTextField();
        jLabelPVP = new javax.swing.JLabel();
        jSeparator4 = new javax.swing.JSeparator();
        jLabelDescripcion = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        jTextAreaDescripción = new javax.swing.JTextArea();
        jButtonAceptarCrearProducto = new javax.swing.JButton();
        jButtonCancelarCrearProducto = new javax.swing.JButton();
        jPanelDocumentos = new javax.swing.JPanel();
        BotonCrearProd = new javax.swing.JButton();
        BotonModificarCrearProd = new javax.swing.JButton();
        BotonEliminarCrearProd = new javax.swing.JButton();
        BotonCopiarCrearProd = new javax.swing.JButton();
        BotonBuscarCrearProd = new javax.swing.JButton();
        jTextFieldBuscarCrearProd = new javax.swing.JTextField();
        jTextFieldInformacionTablaCrearProd = new javax.swing.JTextField();
        jButtonAceptarCrearProd = new javax.swing.JButton();
        jButtonCancelarCrearProd = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Productos y servicios >> Crear");
        setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));

        jLabelCodigoProducto.setText("Código:");

        jTextFieldCodigoProducto.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextFieldCodigoProductoActionPerformed(evt);
            }
        });

        jLabelNombreProducto.setText("Nombre:");

        jLabelDatosVenta.setText("Datos de venta:");

        jTextFieldPrecio.addFocusListener(new java.awt.event.FocusAdapter() {
            public void focusLost(java.awt.event.FocusEvent evt) {
                jTextFieldPrecioFocusLost(evt);
            }
        });

        jLabelPrecio.setText("Precio:");

        jLabelDescuento.setText("Descuento:");

        jTextFieldIVA.addFocusListener(new java.awt.event.FocusAdapter() {
            public void focusLost(java.awt.event.FocusEvent evt) {
                jTextFieldIVAFocusLost(evt);
            }
        });
        jTextFieldIVA.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextFieldIVAActionPerformed(evt);
            }
        });

        jLabelIVA.setText("IVA:");

        jTextFieldPVP.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextFieldPVPActionPerformed(evt);
            }
        });

        jLabelPVP.setText("PVP:");

        jLabelDescripcion.setText("Descripción:");

        jTextAreaDescripción.setColumns(20);
        jTextAreaDescripción.setRows(5);
        jScrollPane1.setViewportView(jTextAreaDescripción);

        jButtonAceptarCrearProducto.setText("Aceptar");
        jButtonAceptarCrearProducto.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonAceptarCrearProductoActionPerformed(evt);
            }
        });

        jButtonCancelarCrearProducto.setText("Cancelar");
        jButtonCancelarCrearProducto.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCancelarCrearProductoActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanelDatosGeneralesLayout = new javax.swing.GroupLayout(jPanelDatosGenerales);
        jPanelDatosGenerales.setLayout(jPanelDatosGeneralesLayout);
        jPanelDatosGeneralesLayout.setHorizontalGroup(
            jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelDatosGeneralesLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanelDatosGeneralesLayout.createSequentialGroup()
                        .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(jPanelDatosGeneralesLayout.createSequentialGroup()
                                .addComponent(jLabelNombreProducto, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(jTextFieldNombreProducto, javax.swing.GroupLayout.PREFERRED_SIZE, 468, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(138, 138, 138))
                            .addGroup(jPanelDatosGeneralesLayout.createSequentialGroup()
                                .addGap(0, 0, Short.MAX_VALUE)
                                .addComponent(jButtonAceptarCrearProducto, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jButtonCancelarCrearProducto, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(128, 128, 128))
                            .addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanelDatosGeneralesLayout.createSequentialGroup()
                                .addComponent(jLabelDatosVenta)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(jSeparator4, javax.swing.GroupLayout.DEFAULT_SIZE, 489, Short.MAX_VALUE)
                                    .addComponent(jSeparator1))
                                .addGap(0, 0, Short.MAX_VALUE)))
                        .addGap(33, 33, 33))
                    .addGroup(jPanelDatosGeneralesLayout.createSequentialGroup()
                        .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanelDatosGeneralesLayout.createSequentialGroup()
                                .addGap(8, 8, 8)
                                .addComponent(jLabelCodigoProducto, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(53, 53, 53)
                                .addComponent(jTextFieldCodigoProducto, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(jPanelDatosGeneralesLayout.createSequentialGroup()
                                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(jLabelDescripcion)
                                    .addComponent(jLabelPrecio, javax.swing.GroupLayout.PREFERRED_SIZE, 55, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addGap(34, 34, 34)
                                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(jTextFieldDescuento, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addGroup(jPanelDatosGeneralesLayout.createSequentialGroup()
                                        .addComponent(jTextFieldPrecio, javax.swing.GroupLayout.PREFERRED_SIZE, 110, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(34, 34, 34)
                                        .addComponent(jLabelIVA, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(jTextFieldIVA, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(34, 34, 34)
                                        .addComponent(jLabelPVP, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                        .addComponent(jTextFieldPVP, javax.swing.GroupLayout.PREFERRED_SIZE, 87, javax.swing.GroupLayout.PREFERRED_SIZE)))))
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                    .addGroup(jPanelDatosGeneralesLayout.createSequentialGroup()
                        .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 572, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabelDescuento, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(0, 0, Short.MAX_VALUE))))
        );
        jPanelDatosGeneralesLayout.setVerticalGroup(
            jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelDatosGeneralesLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelCodigoProducto)
                    .addComponent(jTextFieldCodigoProducto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelNombreProducto)
                    .addComponent(jTextFieldNombreProducto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabelDatosVenta)
                    .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelPrecio)
                    .addComponent(jTextFieldPrecio, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelIVA)
                    .addComponent(jTextFieldIVA, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelPVP)
                    .addComponent(jTextFieldPVP, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelDescuento)
                    .addComponent(jTextFieldDescuento, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, Short.MAX_VALUE)
                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jSeparator4, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 9, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelDescripcion, javax.swing.GroupLayout.Alignment.TRAILING))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addGroup(jPanelDatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButtonCancelarCrearProducto)
                    .addComponent(jButtonAceptarCrearProducto))
                .addContainerGap())
        );

        jTabbedPane1.addTab("Datos generales", jPanelDatosGenerales);

        BotonCrearProd.setText("Crear");
        BotonCrearProd.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BotonCrearProdActionPerformed(evt);
            }
        });

        BotonModificarCrearProd.setText("Modificar");

        BotonEliminarCrearProd.setText("Eliminar");

        BotonCopiarCrearProd.setText("Copiar");

        BotonBuscarCrearProd.setText("Buscar");

        jTextFieldBuscarCrearProd.setText("Buscar...");

        jTextFieldInformacionTablaCrearProd.setText("Datos Tabla");

        jButtonAceptarCrearProd.setText("Aceptar");

        jButtonCancelarCrearProd.setText("Cancelar");

        javax.swing.GroupLayout jPanelDocumentosLayout = new javax.swing.GroupLayout(jPanelDocumentos);
        jPanelDocumentos.setLayout(jPanelDocumentosLayout);
        jPanelDocumentosLayout.setHorizontalGroup(
            jPanelDocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelDocumentosLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanelDocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                    .addComponent(jTextFieldInformacionTablaCrearProd, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 583, Short.MAX_VALUE)
                    .addGroup(jPanelDocumentosLayout.createSequentialGroup()
                        .addComponent(jButtonAceptarCrearProd, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(jButtonCancelarCrearProd, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(jTextFieldBuscarCrearProd, javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanelDocumentosLayout.createSequentialGroup()
                        .addComponent(BotonCrearProd)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(BotonModificarCrearProd)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(BotonEliminarCrearProd)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(BotonCopiarCrearProd)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(BotonBuscarCrearProd)))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanelDocumentosLayout.setVerticalGroup(
            jPanelDocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelDocumentosLayout.createSequentialGroup()
                .addGap(21, 21, 21)
                .addGroup(jPanelDocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(BotonCrearProd, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(BotonEliminarCrearProd, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(BotonCopiarCrearProd, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(BotonBuscarCrearProd, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(BotonModificarCrearProd, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextFieldBuscarCrearProd, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jTextFieldInformacionTablaCrearProd, javax.swing.GroupLayout.DEFAULT_SIZE, 218, Short.MAX_VALUE)
                .addGap(18, 18, 18)
                .addGroup(jPanelDocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButtonCancelarCrearProd)
                    .addComponent(jButtonAceptarCrearProd))
                .addContainerGap())
        );

        jTabbedPane1.addTab("Documentos", jPanelDocumentos);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jTabbedPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 606, javax.swing.GroupLayout.PREFERRED_SIZE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jTabbedPane1)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void BotonCrearProdActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BotonCrearProdActionPerformed
        CrearProducto crearproducto = new CrearProducto();
        crearproducto.setVisible(true);
    }//GEN-LAST:event_BotonCrearProdActionPerformed

    private void jTextFieldCodigoProductoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextFieldCodigoProductoActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextFieldCodigoProductoActionPerformed

    private void jButtonAceptarCrearProductoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonAceptarCrearProductoActionPerformed
        
         try {
            String command = "curl localhost:8080/demo/addP -d IdProducto=" + jTextFieldCodigoProducto.getText();
            command = command + " -d nombreproducto=" + jTextFieldNombreProducto.getText();
            
            command = command + " -d precio=" +jTextFieldPrecio.getText();
                      
            command = command + " -d IVA=" +jTextFieldIVA.getText();
                      
            command = command + " -d PVP=" + jTextFieldPVP.getText();          
            
            command = command + " -d Descuento=" + jTextFieldDescuento.getText();
            command = command + " -d Descripcion=" + jTextAreaDescripción.getText();
            
            
            
                   
            Process process = Runtime.getRuntime().exec(command);
            process.getInputStream();
// TODO add your handling code here:
        } catch (IOException ex) {
            Logger.getLogger(CrearCliente.class.getName()).log(Level.SEVERE, null, ex);
        }
        
         dispose(); 
        
        
        
        
    }//GEN-LAST:event_jButtonAceptarCrearProductoActionPerformed

    private void jTextFieldIVAActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextFieldIVAActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextFieldIVAActionPerformed

    private void jTextFieldPVPActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextFieldPVPActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextFieldPVPActionPerformed

    private void jButtonCancelarCrearProductoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCancelarCrearProductoActionPerformed
        dispose();     
    }//GEN-LAST:event_jButtonCancelarCrearProductoActionPerformed

    private void jTextFieldIVAFocusLost(java.awt.event.FocusEvent evt) {//GEN-FIRST:event_jTextFieldIVAFocusLost
              this.CalcularPVP();
    }//GEN-LAST:event_jTextFieldIVAFocusLost

    private void jTextFieldPrecioFocusLost(java.awt.event.FocusEvent evt) {//GEN-FIRST:event_jTextFieldPrecioFocusLost
       this.CalcularPVP();
    }//GEN-LAST:event_jTextFieldPrecioFocusLost

    private void CalcularPVP(){
        
         float precio= Float.parseFloat(jTextFieldPrecio.getText());
         float IVA= Float.parseFloat(jTextFieldIVA.getText());
         float resultado = precio + precio*IVA;
         
         if(!(precio==0||IVA==0)) //si precio=0 o IVA=0 NO hace lo que pongo dentro
         {
                     
          String resultadoS =String.valueOf(resultado);
            
         jTextFieldPVP.setText(resultadoS);
         }
    }
    
    
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
            java.util.logging.Logger.getLogger(CrearProducto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(CrearProducto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(CrearProducto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(CrearProducto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new CrearProducto().setVisible(true);
            }
        });
    }
    
    

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton BotonBuscarCrearProd;
    private javax.swing.JButton BotonCopiarCrearProd;
    private javax.swing.JButton BotonCrearProd;
    private javax.swing.JButton BotonEliminarCrearProd;
    private javax.swing.JButton BotonModificarCrearProd;
    private javax.swing.JButton jButtonAceptarCrearProd;
    private javax.swing.JButton jButtonAceptarCrearProducto;
    private javax.swing.JButton jButtonCancelarCrearProd;
    private javax.swing.JButton jButtonCancelarCrearProducto;
    private javax.swing.JLabel jLabelCodigoProducto;
    private javax.swing.JLabel jLabelDatosVenta;
    private javax.swing.JLabel jLabelDescripcion;
    private javax.swing.JLabel jLabelDescuento;
    private javax.swing.JLabel jLabelIVA;
    private javax.swing.JLabel jLabelNombreProducto;
    private javax.swing.JLabel jLabelPVP;
    private javax.swing.JLabel jLabelPrecio;
    private javax.swing.JPanel jPanelDatosGenerales;
    private javax.swing.JPanel jPanelDocumentos;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JSeparator jSeparator1;
    private javax.swing.JSeparator jSeparator4;
    private javax.swing.JTabbedPane jTabbedPane1;
    private javax.swing.JTextArea jTextAreaDescripción;
    private javax.swing.JTextField jTextFieldBuscarCrearProd;
    private javax.swing.JTextField jTextFieldCodigoProducto;
    private javax.swing.JTextField jTextFieldDescuento;
    private javax.swing.JTextField jTextFieldIVA;
    private javax.swing.JTextField jTextFieldInformacionTablaCrearProd;
    private javax.swing.JTextField jTextFieldNombreProducto;
    private javax.swing.JTextField jTextFieldPVP;
    private javax.swing.JTextField jTextFieldPrecio;
    // End of variables declaration//GEN-END:variables
}