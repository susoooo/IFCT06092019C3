/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.fram1;

/**
 *
 * @author Usuario
 */
public class frame1 extends javax.swing.JFrame {

    /**
     * Creates new form frame1
     */
    public frame1() {
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

        Alquileres = new javax.swing.JPanel();
        Vispre = new javax.swing.JButton();
        BotImp = new javax.swing.JButton();
        BotCan = new javax.swing.JButton();
        Meses = new javax.swing.JComboBox<>();
        Años = new javax.swing.JComboBox<>();
        Etiaño = new javax.swing.JLabel();
        EtiMes = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Alquiler por año y mes");
        setBackground(new java.awt.Color(0, 153, 255));

        Vispre.setText("Cancelar");
        Vispre.setName("BotonCancelar"); // NOI18N

        BotImp.setText("Imprimir");
        BotImp.setName("Impboton"); // NOI18N

        BotCan.setBackground(new java.awt.Color(51, 51, 255));
        BotCan.setForeground(new java.awt.Color(51, 51, 255));
        BotCan.setText("Vista previa");
        BotCan.setName("VitPre"); // NOI18N

        Meses.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Enero", "Febrero", "Marzo", "Abril" }));
        Meses.setName("Meses"); // NOI18N

        Años.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "2016", "2017", "2018", "2019", "2020" }));
        Años.setToolTipText("2018");
        Años.setAlignmentX(4.0F);
        Años.setName("Años"); // NOI18N

        Etiaño.setText("Mes");
        Etiaño.setName("EtiAño"); // NOI18N

        EtiMes.setText("Año");

        javax.swing.GroupLayout AlquileresLayout = new javax.swing.GroupLayout(Alquileres);
        Alquileres.setLayout(AlquileresLayout);
        AlquileresLayout.setHorizontalGroup(
            AlquileresLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(AlquileresLayout.createSequentialGroup()
                .addGroup(AlquileresLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(AlquileresLayout.createSequentialGroup()
                        .addGap(95, 95, 95)
                        .addGroup(AlquileresLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(AlquileresLayout.createSequentialGroup()
                                .addComponent(Etiaño)
                                .addGap(18, 18, 18)
                                .addComponent(Meses, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(AlquileresLayout.createSequentialGroup()
                                .addComponent(EtiMes)
                                .addGap(18, 18, 18)
                                .addComponent(Años, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))))
                    .addGroup(AlquileresLayout.createSequentialGroup()
                        .addGap(73, 73, 73)
                        .addComponent(BotCan)
                        .addGap(18, 18, 18)
                        .addComponent(BotImp)
                        .addGap(18, 18, 18)
                        .addComponent(Vispre)))
                .addContainerGap(40, Short.MAX_VALUE))
        );
        AlquileresLayout.setVerticalGroup(
            AlquileresLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(AlquileresLayout.createSequentialGroup()
                .addGroup(AlquileresLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(EtiMes)
                    .addComponent(Años, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(AlquileresLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Etiaño)
                    .addComponent(Meses, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(AlquileresLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(BotCan)
                    .addComponent(BotImp)
                    .addComponent(Vispre))
                .addGap(0, 53, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(Alquileres, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 14, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap(31, Short.MAX_VALUE)
                .addComponent(Alquileres, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

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
            java.util.logging.Logger.getLogger(frame1.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(frame1.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(frame1.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(frame1.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new frame1().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JPanel Alquileres;
    private javax.swing.JComboBox<String> Años;
    private javax.swing.JButton BotCan;
    private javax.swing.JButton BotImp;
    private javax.swing.JLabel EtiMes;
    private javax.swing.JLabel Etiaño;
    private javax.swing.JComboBox<String> Meses;
    private javax.swing.JButton Vispre;
    // End of variables declaration//GEN-END:variables
}