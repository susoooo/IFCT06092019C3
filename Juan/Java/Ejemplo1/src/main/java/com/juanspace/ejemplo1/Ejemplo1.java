/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.juanspace.ejemplo1;

/**
 *
 * @author Usuario
 */
public class Ejemplo1 extends javax.swing.JFrame {

    /**
     * Creates new form Ejemplo1
     */
    public Ejemplo1() {
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

        Texto = new javax.swing.JTextField();
        ConversorADolares = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        Reiniciar = new javax.swing.JButton();
        ADolares = new javax.swing.JButton();
        AEuros = new javax.swing.JButton();
        jLabel3 = new javax.swing.JLabel();
        ConversorAEuros = new javax.swing.JTextField();
        Saludar = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        Texto.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TextoActionPerformed(evt);
            }
        });

        ConversorADolares.setHorizontalAlignment(javax.swing.JTextField.RIGHT);
        ConversorADolares.setText(" €");
        ConversorADolares.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ConversorADolaresActionPerformed(evt);
            }
        });

        jLabel1.setText("Escribe un nombre");

        jLabel2.setText("Introduce euros");

        Reiniciar.setText("Reiniciar casillas");
        Reiniciar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ReiniciarActionPerformed(evt);
            }
        });

        ADolares.setText("Convertir a dólares");
        ADolares.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ADolaresActionPerformed(evt);
            }
        });

        AEuros.setText("Convertir a euros");
        AEuros.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                AEurosActionPerformed(evt);
            }
        });

        jLabel3.setText("Introduce dólares");

        ConversorAEuros.setHorizontalAlignment(javax.swing.JTextField.RIGHT);
        ConversorAEuros.setText(" $");
        ConversorAEuros.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ConversorAEurosActionPerformed(evt);
            }
        });

        Saludar.setText("Saludar");
        Saludar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                SaludarActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(98, 98, 98)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel3)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                        .addComponent(jLabel1, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jLabel2, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(Texto, javax.swing.GroupLayout.DEFAULT_SIZE, 120, Short.MAX_VALUE)
                            .addComponent(ConversorADolares)
                            .addComponent(ConversorAEuros))
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGap(36, 36, 36)
                                .addComponent(AEuros)
                                .addContainerGap(16, Short.MAX_VALUE))
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(Saludar, javax.swing.GroupLayout.PREFERRED_SIZE, 100, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(ADolares))
                                .addContainerGap())))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(Reiniciar, javax.swing.GroupLayout.PREFERRED_SIZE, 147, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE))))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(51, 51, 51)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Texto, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1)
                    .addComponent(Saludar))
                .addGap(14, 14, 14)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(ConversorADolares, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ADolares))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(ConversorAEuros, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel3)
                    .addComponent(AEuros))
                .addGap(18, 18, 18)
                .addComponent(Reiniciar)
                .addContainerGap(71, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void ReiniciarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ReiniciarActionPerformed
        Texto.setText("");
        ConversorADolares.setText(" €");
        ConversorAEuros.setText(" $");
    }//GEN-LAST:event_ReiniciarActionPerformed

    private void TextoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TextoActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_TextoActionPerformed

    private void ConversorADolaresActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ConversorADolaresActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_ConversorADolaresActionPerformed

    private void ADolaresActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ADolaresActionPerformed
        String RecogerDolares=ConversorADolares.getText();
        ConversorADolares.setText(ConvertirADolares(RecogerDolares.substring(0, RecogerDolares.length()-2))+" $");
    }//GEN-LAST:event_ADolaresActionPerformed

    private void AEurosActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AEurosActionPerformed
        String RecogerEuros=ConversorAEuros.getText();
        ConversorAEuros.setText(ConvertirAEuros(RecogerEuros.substring(0,RecogerEuros.length()-2))+" €");
    }//GEN-LAST:event_AEurosActionPerformed

    private void ConversorAEurosActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ConversorAEurosActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_ConversorAEurosActionPerformed

    private void SaludarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_SaludarActionPerformed
        String text= Texto.getText();
        Texto.setText("Hola "+text);
    }//GEN-LAST:event_SaludarActionPerformed

    public float ConvertirADolares(String euros){
        float dolares;
        dolares= (float) (Float.parseFloat(euros)/1.14);
        return dolares;
    }
    
    public float ConvertirAEuros(String dolares){
        float euros;
        euros= (float) (Float.parseFloat(dolares)/0.87);
        return euros;
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
            java.util.logging.Logger.getLogger(Ejemplo1.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Ejemplo1.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Ejemplo1.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Ejemplo1.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Ejemplo1().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton ADolares;
    private javax.swing.JButton AEuros;
    private javax.swing.JTextField ConversorADolares;
    private javax.swing.JTextField ConversorAEuros;
    private javax.swing.JButton Reiniciar;
    private javax.swing.JButton Saludar;
    private javax.swing.JTextField Texto;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    // End of variables declaration//GEN-END:variables
}
