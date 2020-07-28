/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.ventana3;

/**
 *
 * @author Usuario
 */
public class Ventana3 extends javax.swing.JFrame {

    /**
     * Creates new form Ventana3
     */
    public Ventana3() {
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

        BtnGrBotones = new javax.swing.ButtonGroup();
        BtnGrDistri = new javax.swing.ButtonGroup();
        PanelPrincipal = new javax.swing.JPanel();
        RBSinMarcaAgua = new javax.swing.JRadioButton();
        RBMarcaAgua = new javax.swing.JRadioButton();
        BotonSeleccinarImagen = new javax.swing.JButton();
        TextoEscala = new javax.swing.JLabel();
        ComboBoxAutom = new javax.swing.JComboBox<>();
        ChBoxDecolorar = new javax.swing.JCheckBox();
        RBMarcaAguaTexto = new javax.swing.JRadioButton();
        LabelTexto = new javax.swing.JLabel();
        LabelFuente = new javax.swing.JLabel();
        LabelTamaño = new javax.swing.JLabel();
        LabelColor = new javax.swing.JLabel();
        LabelDistri = new javax.swing.JLabel();
        RaBtnHorizontal = new javax.swing.JRadioButton();
        BtnAceptar = new javax.swing.JButton();
        BtnCancelar = new javax.swing.JButton();
        BtnAplicar = new javax.swing.JButton();
        RaBtnDiagonal = new javax.swing.JRadioButton();
        CbBoxAltoSecreto = new javax.swing.JComboBox<>();
        jComboBox2 = new javax.swing.JComboBox<>();
        jComboBox3 = new javax.swing.JComboBox<>();
        jComboBox4 = new javax.swing.JComboBox<>();
        ChBoxSemitransparente = new javax.swing.JCheckBox();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Marca de agua impresa");
        setBackground(java.awt.Color.lightGray);

        PanelPrincipal.setBackground(java.awt.Color.lightGray);
        PanelPrincipal.setEnabled(false);

        RBSinMarcaAgua.setBackground(java.awt.Color.lightGray);
        BtnGrBotones.add(RBSinMarcaAgua);
        RBSinMarcaAgua.setForeground(java.awt.Color.black);
        RBSinMarcaAgua.setText("Sin Marca de Agua");
        RBSinMarcaAgua.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                RBSinMarcaAguaActionPerformed(evt);
            }
        });

        RBMarcaAgua.setBackground(java.awt.Color.lightGray);
        BtnGrBotones.add(RBMarcaAgua);
        RBMarcaAgua.setForeground(java.awt.Color.black);
        RBMarcaAgua.setSelected(true);
        RBMarcaAgua.setText("Marca de agua de imagen");

        BotonSeleccinarImagen.setBackground(java.awt.Color.lightGray);
        BotonSeleccinarImagen.setForeground(java.awt.Color.black);
        BotonSeleccinarImagen.setText("Seleccionar imagen...");

        TextoEscala.setText("Escala:");
        TextoEscala.setEnabled(false);

        ComboBoxAutom.setBackground(java.awt.Color.white);
        ComboBoxAutom.setForeground(java.awt.Color.black);
        ComboBoxAutom.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Automático", "Item 2", "Item 3", "Item 4" }));
        ComboBoxAutom.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ComboBoxAutomActionPerformed(evt);
            }
        });

        ChBoxDecolorar.setBackground(java.awt.Color.lightGray);
        ChBoxDecolorar.setForeground(java.awt.Color.black);
        ChBoxDecolorar.setSelected(true);
        ChBoxDecolorar.setText("Decolorar");
        ChBoxDecolorar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ChBoxDecolorarActionPerformed(evt);
            }
        });

        RBMarcaAguaTexto.setBackground(java.awt.Color.lightGray);
        RBMarcaAguaTexto.setForeground(java.awt.Color.black);
        RBMarcaAguaTexto.setText("Marca de agua de texto");
        RBMarcaAguaTexto.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                RBMarcaAguaTextoActionPerformed(evt);
            }
        });

        LabelTexto.setForeground(java.awt.Color.black);
        LabelTexto.setText("Texto:");
        LabelTexto.setEnabled(false);

        LabelFuente.setForeground(java.awt.Color.black);
        LabelFuente.setText("Fuente:");
        LabelFuente.setEnabled(false);

        LabelTamaño.setForeground(java.awt.Color.black);
        LabelTamaño.setText("Tamaño:");
        LabelTamaño.setEnabled(false);

        LabelColor.setForeground(java.awt.Color.black);
        LabelColor.setText("Color:");
        LabelColor.setEnabled(false);

        LabelDistri.setForeground(java.awt.Color.black);
        LabelDistri.setText("Distribución:");
        LabelDistri.setEnabled(false);

        RaBtnHorizontal.setBackground(java.awt.Color.lightGray);
        BtnGrDistri.add(RaBtnHorizontal);
        RaBtnHorizontal.setText("Horizontal");
        RaBtnHorizontal.setEnabled(false);
        RaBtnHorizontal.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                RaBtnHorizontalActionPerformed(evt);
            }
        });

        BtnAceptar.setBackground(java.awt.Color.lightGray);
        BtnAceptar.setText("Aceptar");
        BtnAceptar.setEnabled(false);
        BtnAceptar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BtnAceptarActionPerformed(evt);
            }
        });

        BtnCancelar.setBackground(java.awt.Color.lightGray);
        BtnCancelar.setText("Cancelar");

        BtnAplicar.setBackground(java.awt.Color.lightGray);
        BtnAplicar.setText("Aplicar");
        BtnAplicar.setEnabled(false);
        BtnAplicar.setFocusPainted(false);

        RaBtnDiagonal.setBackground(java.awt.Color.lightGray);
        BtnGrDistri.add(RaBtnDiagonal);
        RaBtnDiagonal.setSelected(true);
        RaBtnDiagonal.setText("Diagonal");
        RaBtnDiagonal.setEnabled(false);
        RaBtnDiagonal.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                RaBtnDiagonalActionPerformed(evt);
            }
        });

        CbBoxAltoSecreto.setBackground(java.awt.Color.lightGray);
        CbBoxAltoSecreto.setForeground(java.awt.Color.black);
        CbBoxAltoSecreto.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "ALTO SECRETO", "Item 2", "Item 3", "Item 4" }));
        CbBoxAltoSecreto.setEnabled(false);
        CbBoxAltoSecreto.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CbBoxAltoSecretoActionPerformed(evt);
            }
        });

        jComboBox2.setBackground(java.awt.Color.lightGray);
        jComboBox2.setForeground(java.awt.Color.black);
        jComboBox2.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Times New Roman", "Item 2", "Item 3", "Item 4" }));
        jComboBox2.setEnabled(false);

        jComboBox3.setBackground(java.awt.Color.lightGray);
        jComboBox3.setForeground(java.awt.Color.black);
        jComboBox3.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Automático", "Item 2", "Item 3", "Item 4" }));
        jComboBox3.setEnabled(false);

        jComboBox4.setBackground(java.awt.Color.lightGray);
        jComboBox4.setForeground(java.awt.Color.black);
        jComboBox4.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Automático", "Item 2", "Item 3", "Item 4" }));
        jComboBox4.setEnabled(false);

        ChBoxSemitransparente.setBackground(java.awt.Color.lightGray);
        ChBoxSemitransparente.setSelected(true);
        ChBoxSemitransparente.setText("Semitransparente");
        ChBoxSemitransparente.setEnabled(false);

        javax.swing.GroupLayout PanelPrincipalLayout = new javax.swing.GroupLayout(PanelPrincipal);
        PanelPrincipal.setLayout(PanelPrincipalLayout);
        PanelPrincipalLayout.setHorizontalGroup(
            PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(RBSinMarcaAgua)
                    .addComponent(RBMarcaAgua))
                .addGap(0, 0, Short.MAX_VALUE))
            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(PanelPrincipalLayout.createSequentialGroup()
                        .addGap(30, 30, 30)
                        .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                .addComponent(BotonSeleccinarImagen)
                                .addGap(0, 0, Short.MAX_VALUE))
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, PanelPrincipalLayout.createSequentialGroup()
                                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                        .addComponent(TextoEscala)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                        .addComponent(ChBoxDecolorar, javax.swing.GroupLayout.PREFERRED_SIZE, 112, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                        .addGap(167, 167, 167)
                                        .addComponent(RaBtnDiagonal, javax.swing.GroupLayout.PREFERRED_SIZE, 114, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 38, Short.MAX_VALUE)
                                        .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addComponent(ChBoxSemitransparente, javax.swing.GroupLayout.Alignment.TRAILING)
                                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, PanelPrincipalLayout.createSequentialGroup()
                                                .addComponent(BtnAceptar)
                                                .addGap(18, 18, 18)
                                                .addComponent(BtnCancelar))
                                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, PanelPrincipalLayout.createSequentialGroup()
                                                .addComponent(RaBtnHorizontal)
                                                .addGap(14, 14, 14)))))
                                .addGap(18, 18, 18)
                                .addComponent(BtnAplicar))))
                    .addGroup(PanelPrincipalLayout.createSequentialGroup()
                        .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                .addGap(29, 29, 29)
                                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addComponent(LabelDistri)
                                    .addComponent(LabelTexto, javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(LabelFuente, javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(LabelTamaño, javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(LabelColor, javax.swing.GroupLayout.Alignment.LEADING))
                                .addGap(97, 97, 97)
                                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(ComboBoxAutom, javax.swing.GroupLayout.PREFERRED_SIZE, 133, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                        .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                            .addComponent(jComboBox3, 0, 136, Short.MAX_VALUE)
                                            .addComponent(jComboBox4, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                        .addComponent(CbBoxAltoSecreto, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                        .addComponent(jComboBox2, 0, 195, Short.MAX_VALUE))))
                            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                .addContainerGap()
                                .addComponent(RBMarcaAguaTexto)))
                        .addGap(0, 0, Short.MAX_VALUE)))
                .addContainerGap())
        );
        PanelPrincipalLayout.setVerticalGroup(
            PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                .addContainerGap()
                .addComponent(RBSinMarcaAgua)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(RBMarcaAgua)
                .addGap(1, 1, 1)
                .addComponent(BotonSeleccinarImagen)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(TextoEscala)
                    .addComponent(ComboBoxAutom, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ChBoxDecolorar))
                .addGap(18, 18, 18)
                .addComponent(RBMarcaAguaTexto)
                .addGap(18, 18, 18)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(LabelTexto)
                    .addComponent(CbBoxAltoSecreto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(LabelFuente)
                    .addComponent(jComboBox2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(LabelTamaño)
                    .addComponent(jComboBox3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(LabelColor)
                    .addComponent(jComboBox4, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ChBoxSemitransparente))
                .addGap(18, 18, 18)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(RaBtnDiagonal)
                        .addComponent(RaBtnHorizontal))
                    .addComponent(LabelDistri))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 53, Short.MAX_VALUE)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(BtnAceptar)
                    .addComponent(BtnCancelar)
                    .addComponent(BtnAplicar))
                .addContainerGap())
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(PanelPrincipal, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(PanelPrincipal, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 12, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void ComboBoxAutomActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ComboBoxAutomActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_ComboBoxAutomActionPerformed

    private void RBSinMarcaAguaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_RBSinMarcaAguaActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_RBSinMarcaAguaActionPerformed

    private void ChBoxDecolorarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ChBoxDecolorarActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_ChBoxDecolorarActionPerformed

    private void RBMarcaAguaTextoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_RBMarcaAguaTextoActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_RBMarcaAguaTextoActionPerformed

    private void RaBtnHorizontalActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_RaBtnHorizontalActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_RaBtnHorizontalActionPerformed

    private void BtnAceptarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BtnAceptarActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_BtnAceptarActionPerformed

    private void RaBtnDiagonalActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_RaBtnDiagonalActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_RaBtnDiagonalActionPerformed

    private void CbBoxAltoSecretoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CbBoxAltoSecretoActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_CbBoxAltoSecretoActionPerformed

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
        } catch (ClassNotFoundException | InstantiationException | IllegalAccessException | javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Ventana3.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            @Override
            public void run() {
                new Ventana3().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton BotonSeleccinarImagen;
    private javax.swing.JButton BtnAceptar;
    private javax.swing.JButton BtnAplicar;
    private javax.swing.JButton BtnCancelar;
    private javax.swing.ButtonGroup BtnGrBotones;
    private javax.swing.ButtonGroup BtnGrDistri;
    private javax.swing.JComboBox<String> CbBoxAltoSecreto;
    private javax.swing.JCheckBox ChBoxDecolorar;
    private javax.swing.JCheckBox ChBoxSemitransparente;
    private javax.swing.JComboBox<String> ComboBoxAutom;
    private javax.swing.JLabel LabelColor;
    private javax.swing.JLabel LabelDistri;
    private javax.swing.JLabel LabelFuente;
    private javax.swing.JLabel LabelTamaño;
    private javax.swing.JLabel LabelTexto;
    private javax.swing.JPanel PanelPrincipal;
    private javax.swing.JRadioButton RBMarcaAgua;
    private javax.swing.JRadioButton RBMarcaAguaTexto;
    private javax.swing.JRadioButton RBSinMarcaAgua;
    private javax.swing.JRadioButton RaBtnDiagonal;
    private javax.swing.JRadioButton RaBtnHorizontal;
    private javax.swing.JLabel TextoEscala;
    private javax.swing.JComboBox<String> jComboBox2;
    private javax.swing.JComboBox<String> jComboBox3;
    private javax.swing.JComboBox<String> jComboBox4;
    // End of variables declaration//GEN-END:variables
}
