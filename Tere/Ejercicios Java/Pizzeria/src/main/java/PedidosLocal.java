/*
1-Crea una aplicación para la venta de pizzas de la cadena de pizzas telesuperpizzaqueloflipas. 
Dicha aplicación debe permitir escoger al menos, 
la base elegida (hiperextramegafina, hipermegafina, extrahiperfina, megaextrafina, extrafina, megafina, hiperfina, fina) 
los ingredientes seleccionados (chourizo, jamón, queso, morcilla, champiñon, lubrigante, grelos, piña, maracuya, chistorra, polbo),
un descuento (0%, 10%, 20% y 25%) y la forma de entrega (a domicilio, en local).
Tambien debe permitir incluir los datos de la persona que hace el pedido en el cado de pedidos a domicilio. 
Cada ingrediente tiene un precio diferente a la vez que los ingredientes.

La aplicación deberá generar un listado en un cuadro de texto donde aparezca el pedido con lo que se ha pedido, 
y el precio del pedido, y si es el caso, los datos de la persona que hace el pedido para las entregas a domicilio.
 */

/**
 *
 * @author Usuario
 */
public class PedidosLocal extends javax.swing.JFrame {

    private String mitexto;
    private float precio;
    
    public PedidosLocal() {
        initComponents();
    }

    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup1 = new javax.swing.ButtonGroup();
        buttonGroup2 = new javax.swing.ButtonGroup();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jSeparator2 = new javax.swing.JSeparator();
        jLabel6 = new javax.swing.JLabel();
        CampoNombre = new javax.swing.JTextField();
        jLabel7 = new javax.swing.JLabel();
        CampoNombre1 = new javax.swing.JTextField();
        jLabel8 = new javax.swing.JLabel();
        CampoNombre2 = new javax.swing.JTextField();
        BotonGuardar = new javax.swing.JButton();
        Botonhiperextramegafina = new javax.swing.JRadioButton();
        Botonhipermegafina = new javax.swing.JRadioButton();
        Botonextrahiperfina = new javax.swing.JRadioButton();
        Botonmegaextrafina = new javax.swing.JRadioButton();
        Botonextrafina = new javax.swing.JRadioButton();
        Botonhiperfina = new javax.swing.JRadioButton();
        Botonfina = new javax.swing.JRadioButton();
        Botonchourizo = new javax.swing.JRadioButton();
        Botonjamon = new javax.swing.JRadioButton();
        jRadioButton10 = new javax.swing.JRadioButton();
        jRadioButton11 = new javax.swing.JRadioButton();
        jRadioButton13 = new javax.swing.JRadioButton();
        jRadioButton14 = new javax.swing.JRadioButton();
        jSeparator3 = new javax.swing.JSeparator();
        jRadioButton15 = new javax.swing.JRadioButton();
        jRadioButton16 = new javax.swing.JRadioButton();
        jRadioButton17 = new javax.swing.JRadioButton();
        jRadioButton18 = new javax.swing.JRadioButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        Areatexto = new javax.swing.JTextArea();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("Base de Pizza");

        jLabel2.setText("Ingredientes");

        jLabel3.setText("Descuento");

        jLabel5.setText("Pedidos a domicilio");

        jLabel6.setText("Nombre");

        jLabel7.setText("Direccion");

        jLabel8.setText("Telefono");

        BotonGuardar.setText("Guardar");
        BotonGuardar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BotonGuardarActionPerformed(evt);
            }
        });

        buttonGroup1.add(Botonhiperextramegafina);
        Botonhiperextramegafina.setText("hiperextramegafina");
        Botonhiperextramegafina.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BotonhiperextramegafinaActionPerformed(evt);
            }
        });

        buttonGroup1.add(Botonhipermegafina);
        Botonhipermegafina.setText("hipermegafina");

        buttonGroup1.add(Botonextrahiperfina);
        Botonextrahiperfina.setText("extrahiperfina");

        buttonGroup1.add(Botonmegaextrafina);
        Botonmegaextrafina.setText("megaextrafina");

        buttonGroup1.add(Botonextrafina);
        Botonextrafina.setText("extrafina");

        buttonGroup1.add(Botonhiperfina);
        Botonhiperfina.setText("hiperfina");

        buttonGroup1.add(Botonfina);
        Botonfina.setText("fina");

        Botonchourizo.setText("chourizo");
        Botonchourizo.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BotonchourizoActionPerformed(evt);
            }
        });

        Botonjamon.setText("jamon");
        Botonjamon.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BotonjamonActionPerformed(evt);
            }
        });

        jRadioButton10.setText("queso");
        jRadioButton10.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButton10ActionPerformed(evt);
            }
        });

        jRadioButton11.setText("morcilla");
        jRadioButton11.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButton11ActionPerformed(evt);
            }
        });

        jRadioButton13.setText("champiñon");
        jRadioButton13.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButton13ActionPerformed(evt);
            }
        });

        jRadioButton14.setText("grelos");
        jRadioButton14.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButton14ActionPerformed(evt);
            }
        });

        buttonGroup2.add(jRadioButton15);
        jRadioButton15.setText("0%");
        jRadioButton15.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButton15ActionPerformed(evt);
            }
        });

        buttonGroup2.add(jRadioButton16);
        jRadioButton16.setText("10%");
        jRadioButton16.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButton16ActionPerformed(evt);
            }
        });

        buttonGroup2.add(jRadioButton17);
        jRadioButton17.setText("20%");
        jRadioButton17.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButton17ActionPerformed(evt);
            }
        });

        buttonGroup2.add(jRadioButton18);
        jRadioButton18.setText("25%");
        jRadioButton18.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButton18ActionPerformed(evt);
            }
        });

        Areatexto.setColumns(20);
        Areatexto.setRows(5);
        jScrollPane1.setViewportView(Areatexto);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(87, 87, 87)
                .addComponent(BotonGuardar, javax.swing.GroupLayout.PREFERRED_SIZE, 119, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                        .addGroup(layout.createSequentialGroup()
                            .addGap(18, 18, 18)
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                .addGroup(layout.createSequentialGroup()
                                    .addComponent(Botonchourizo)
                                    .addGap(82, 82, 82)
                                    .addComponent(jRadioButton11))
                                .addGroup(layout.createSequentialGroup()
                                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                        .addComponent(Botonjamon)
                                        .addComponent(jRadioButton10)
                                        .addComponent(jRadioButton15)
                                        .addComponent(jRadioButton16))
                                    .addGap(92, 92, 92)
                                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                        .addComponent(jRadioButton13)
                                        .addComponent(jRadioButton18)
                                        .addComponent(jRadioButton17)
                                        .addComponent(jRadioButton14)))))
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addGroup(layout.createSequentialGroup()
                                .addContainerGap()
                                .addComponent(jLabel1)
                                .addGap(18, 18, 18)
                                .addComponent(jSeparator2, javax.swing.GroupLayout.PREFERRED_SIZE, 152, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(layout.createSequentialGroup()
                                .addGap(19, 19, 19)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(Botonhiperextramegafina)
                                    .addComponent(Botonhipermegafina)
                                    .addComponent(Botonextrahiperfina)
                                    .addComponent(Botonmegaextrafina))
                                .addGap(18, 18, 18)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(Botonfina)
                                    .addComponent(Botonextrafina)
                                    .addComponent(Botonhiperfina)))
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(jLabel2)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(jSeparator3, javax.swing.GroupLayout.PREFERRED_SIZE, 149, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(8, 8, 8))))
                    .addComponent(jLabel3)
                    .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 92, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(32, 32, 32)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel6)
                            .addComponent(jLabel7)
                            .addComponent(jLabel8))
                        .addGap(53, 53, 53)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(CampoNombre1, javax.swing.GroupLayout.PREFERRED_SIZE, 172, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(CampoNombre, javax.swing.GroupLayout.PREFERRED_SIZE, 172, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(CampoNombre2, javax.swing.GroupLayout.PREFERRED_SIZE, 172, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 36, Short.MAX_VALUE)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 246, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(66, 66, 66))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jLabel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(jSeparator2))
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Botonhiperextramegafina)
                    .addComponent(Botonextrafina))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Botonhipermegafina)
                    .addComponent(Botonhiperfina))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(Botonextrahiperfina)
                            .addComponent(Botonfina))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(Botonmegaextrafina)
                        .addGap(27, 27, 27)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(jLabel2)
                            .addComponent(jSeparator3, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(Botonchourizo)
                            .addComponent(jRadioButton11))
                        .addGap(3, 3, 3)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(Botonjamon)
                            .addComponent(jRadioButton13))
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jRadioButton10)
                            .addComponent(jRadioButton14))
                        .addGap(18, 18, 18)
                        .addComponent(jLabel3)
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jRadioButton15)
                            .addComponent(jRadioButton17))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jRadioButton16)
                            .addComponent(jRadioButton18))
                        .addGap(18, 18, 18)
                        .addComponent(jLabel5)
                        .addGap(10, 10, 10)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(CampoNombre, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel6))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabel7)
                            .addComponent(CampoNombre1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(27, 27, 27)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabel8)
                            .addComponent(CampoNombre2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 417, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(BotonGuardar, javax.swing.GroupLayout.PREFERRED_SIZE, 32, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(29, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void BotonjamonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BotonjamonActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_BotonjamonActionPerformed

    private void jRadioButton10ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButton10ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButton10ActionPerformed

    private void jRadioButton11ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButton11ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButton11ActionPerformed

    private void jRadioButton13ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButton13ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButton13ActionPerformed

    private void jRadioButton14ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButton14ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButton14ActionPerformed

    private void jRadioButton15ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButton15ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButton15ActionPerformed

    private void jRadioButton16ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButton16ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButton16ActionPerformed

    private void jRadioButton17ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButton17ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButton17ActionPerformed

    private void jRadioButton18ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButton18ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButton18ActionPerformed

    private void BotonhiperextramegafinaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BotonhiperextramegafinaActionPerformed
            
            this.Areatexto.getText(); 
            
    }//GEN-LAST:event_BotonhiperextramegafinaActionPerformed

    
    private void BotonchourizoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BotonchourizoActionPerformed
        //this.EtiquetaTicket.setText("chourizo   1,50 €");
    }//GEN-LAST:event_BotonchourizoActionPerformed

    private void BotonGuardarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BotonGuardarActionPerformed
        
      // String mitexto;
               if (Botonhiperextramegafina.isSelected())
               {
                  precio= 5;
                  mitexto= ("hiperextramegafina   "+"precio: "+precio) ;
                  Areatexto.setText (mitexto);      
                     
               } else {
                   
                   if (Botonhipermegafina.isSelected())
                         { 
                           precio= 4.52f;                  
                           mitexto= ("hipermegafina   "+"precio: "+ precio) ;
                           Areatexto.setText (mitexto); 
                         
                         } else {
                            
                            if (Botonextrahiperfina.isSelected())
                            {
                                precio= 4.70f;
                                mitexto= ("extrahiperfina   "+"precio: "+ precio) ;
                                Areatexto.setText (mitexto); 
                              
                            }else {
                            
                            if (Botonmegaextrafina.isSelected())
                            {
                                precio= 4.45f;
                                mitexto= ("megaextrafina   "+"precio: "+ precio) ;
                                Areatexto.setText (mitexto);
                            
                            }else {
                            
                            if (Botonextrafina.isSelected())
                            {
                                precio= 3.25f;
                                mitexto= ("extrafina   "+"precio: "+ precio) ;
                                Areatexto.setText (mitexto);
                            
                            }else {
                            
                            if (Botonhiperfina.isSelected())
                            {
                                precio= 3.00f;
                                mitexto= ("hiperfina   "+"precio: "+ precio) ;
                                Areatexto.setText (mitexto);
                            
                            }else {
                            
                            if (Botonfina.isSelected())
                            {
                                precio= 2.00f;
                                mitexto= ("fina   "+"precio: "+ precio) ;
                                Areatexto.setText (mitexto);
                            }
                            }
                            }
                            }
               }     
                            }
    }//GEN-LAST:event_BotonGuardarActionPerformed
    if (Botonchourizo.isSelected())
               {
                  precio= 1;
                  mitexto= ("\n"+ "Chourizo   "+"precio: "+precio) ;
                  Areatexto.setText (Areatexto.getText()+mitexto);      
                     
               } 
                   
    if (Botonjamon.isSelected())
           { 
                           precio= 4,52f;                  
                           mitexto= ("\n"+"Jamon   "+"precio: "+ precio) ;
                           Areatexto.setText(Areatexto.getText()mitexto); 
                         
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
            java.util.logging.Logger.getLogger(PedidosLocal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(PedidosLocal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(PedidosLocal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(PedidosLocal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new PedidosLocal().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextArea Areatexto;
    private javax.swing.JButton BotonGuardar;
    private javax.swing.JRadioButton Botonchourizo;
    private javax.swing.JRadioButton Botonextrafina;
    private javax.swing.JRadioButton Botonextrahiperfina;
    private javax.swing.JRadioButton Botonfina;
    private javax.swing.JRadioButton Botonhiperextramegafina;
    private javax.swing.JRadioButton Botonhiperfina;
    private javax.swing.JRadioButton Botonhipermegafina;
    private javax.swing.JRadioButton Botonjamon;
    private javax.swing.JRadioButton Botonmegaextrafina;
    private javax.swing.JTextField CampoNombre;
    private javax.swing.JTextField CampoNombre1;
    private javax.swing.JTextField CampoNombre2;
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.ButtonGroup buttonGroup2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JRadioButton jRadioButton10;
    private javax.swing.JRadioButton jRadioButton11;
    private javax.swing.JRadioButton jRadioButton13;
    private javax.swing.JRadioButton jRadioButton14;
    private javax.swing.JRadioButton jRadioButton15;
    private javax.swing.JRadioButton jRadioButton16;
    private javax.swing.JRadioButton jRadioButton17;
    private javax.swing.JRadioButton jRadioButton18;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JSeparator jSeparator2;
    private javax.swing.JSeparator jSeparator3;
    // End of variables declaration//GEN-END:variables
}
