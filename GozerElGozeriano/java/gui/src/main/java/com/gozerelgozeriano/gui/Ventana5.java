/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.gozerelgozeriano.gui;

/**
 *
 * @author Usuario
 */
public class Ventana5 extends javax.swing.JFrame {

    /**
     * Creates new form Ventana5
     */
    public Ventana5() {
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

        tabpanel = new javax.swing.JTabbedPane();
        pnl_fuente = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        txt_fuente = new javax.swing.JTextField();
        jScrollPane1 = new javax.swing.JScrollPane();
        jList1 = new javax.swing.JList<>();
        jScrollPane2 = new javax.swing.JScrollPane();
        jList2 = new javax.swing.JList<>();
        jTextField2 = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        jScrollPane3 = new javax.swing.JScrollPane();
        jList3 = new javax.swing.JList<>();
        jTextField3 = new javax.swing.JTextField();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        cb_color = new javax.swing.JComboBox<>();
        jLabel5 = new javax.swing.JLabel();
        cb_stylesub = new javax.swing.JComboBox<>();
        jLabel6 = new javax.swing.JLabel();
        cb_colorsub = new javax.swing.JComboBox<>();
        jLabel7 = new javax.swing.JLabel();
        jSeparator1 = new javax.swing.JSeparator();
        ck_tachado = new javax.swing.JCheckBox();
        ck_dobletachado = new javax.swing.JCheckBox();
        ck_superindice = new javax.swing.JCheckBox();
        ck_subindice = new javax.swing.JCheckBox();
        ck_grabado = new javax.swing.JCheckBox();
        ck_relieve = new javax.swing.JCheckBox();
        vk_contorno = new javax.swing.JCheckBox();
        ck_sombra = new javax.swing.JCheckBox();
        ck_oculto = new javax.swing.JCheckBox();
        ck_mayusculas = new javax.swing.JCheckBox();
        ck_versales = new javax.swing.JCheckBox();
        jLabel8 = new javax.swing.JLabel();
        jSeparator2 = new javax.swing.JSeparator();
        jLabel9 = new javax.swing.JLabel();
        jScrollPane4 = new javax.swing.JScrollPane();
        txt_vistaprevia = new javax.swing.JTextArea();
        pnl_espacio = new javax.swing.JPanel();
        pnl_efectos = new javax.swing.JPanel();
        pnl_botbuttons = new javax.swing.JPanel();
        btn_predt = new javax.swing.JButton();
        btn_cancelar = new javax.swing.JButton();
        btn_aceptar = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Fuente");

        tabpanel.setBorder(javax.swing.BorderFactory.createBevelBorder(javax.swing.border.BevelBorder.RAISED));

        jLabel1.setText("Fuente");

        txt_fuente.setText("jTextField1");

        jList1.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "Item 1", "Item 2", "Item 3", "Item 4", "Item 5" };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        jScrollPane1.setViewportView(jList1);

        jList2.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "Item 1", "Item 2", "Item 3", "Item 4", "Item 5" };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        jScrollPane2.setViewportView(jList2);

        jTextField2.setText("jTextField1");

        jLabel2.setText("Estilo de fuente");

        jList3.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "Item 1", "Item 2", "Item 3", "Item 4", "Item 5" };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        jScrollPane3.setViewportView(jList3);

        jTextField3.setText("jTextField1");

        jLabel3.setText("Tamaño");

        jLabel4.setText("Color de fuente");

        cb_color.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Automático", "Item 2", "Item 3", "Item 4" }));
        cb_color.setAutoscrolls(true);

        jLabel5.setText("Estilo de subrayado");

        cb_stylesub.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "(ninguno)", "Item 2", "Item 3", "Item 4" }));

        jLabel6.setText("Color de subrayado");

        cb_colorsub.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Automático", "Item 2", "Item 3", "Item 4" }));
        cb_colorsub.setEnabled(false);

        jLabel7.setText("Efectos");

        ck_tachado.setText("Tachado");

        ck_dobletachado.setText("Doble tachado");

        ck_superindice.setText("Superindice");

        ck_subindice.setText("Subindice");

        ck_grabado.setText("Grabado");

        ck_relieve.setText("Relieve");

        vk_contorno.setText("Contorno");

        ck_sombra.setText("Sombra");

        ck_oculto.setText("Oculto");

        ck_mayusculas.setText("Mayúsculas");

        ck_versales.setText("Versales");

        jLabel8.setText("Vista previa");

        jLabel9.setText("Fuentre truetype asodnaonafoanfaònf");

        txt_vistaprevia.setColumns(20);
        txt_vistaprevia.setRows(5);
        jScrollPane4.setViewportView(txt_vistaprevia);

        javax.swing.GroupLayout pnl_fuenteLayout = new javax.swing.GroupLayout(pnl_fuente);
        pnl_fuente.setLayout(pnl_fuenteLayout);
        pnl_fuenteLayout.setHorizontalGroup(
            pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pnl_fuenteLayout.createSequentialGroup()
                .addGap(15, 15, 15)
                .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jScrollPane4)
                    .addComponent(jLabel9)
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addComponent(jLabel8)
                        .addGap(18, 18, 18)
                        .addComponent(jSeparator2, javax.swing.GroupLayout.PREFERRED_SIZE, 334, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jLabel1)
                            .addComponent(txt_fuente, javax.swing.GroupLayout.DEFAULT_SIZE, 141, Short.MAX_VALUE)
                            .addComponent(jScrollPane1))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jLabel2)
                            .addComponent(jTextField2)
                            .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, 141, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jLabel3)
                            .addComponent(jTextField3)
                            .addComponent(jScrollPane3, javax.swing.GroupLayout.PREFERRED_SIZE, 141, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel4)
                            .addComponent(cb_color, javax.swing.GroupLayout.PREFERRED_SIZE, 120, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel5)
                            .addComponent(cb_stylesub, javax.swing.GroupLayout.PREFERRED_SIZE, 120, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel6)
                            .addComponent(cb_colorsub, javax.swing.GroupLayout.PREFERRED_SIZE, 120, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addGap(6, 6, 6)
                        .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(ck_dobletachado)
                            .addComponent(ck_tachado)
                            .addComponent(ck_subindice)
                            .addComponent(ck_superindice))
                        .addGap(37, 37, 37)
                        .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(ck_grabado)
                            .addGroup(pnl_fuenteLayout.createSequentialGroup()
                                .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(vk_contorno)
                                    .addComponent(ck_sombra)
                                    .addComponent(ck_relieve))
                                .addGap(42, 42, 42)
                                .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(ck_mayusculas)
                                    .addComponent(ck_versales)
                                    .addComponent(ck_oculto)))))
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addComponent(jLabel7)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 376, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(16, Short.MAX_VALUE))
        );
        pnl_fuenteLayout.setVerticalGroup(
            pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pnl_fuenteLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addComponent(jLabel3)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jTextField3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jScrollPane3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addComponent(jLabel2)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jTextField2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addComponent(jLabel1)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(txt_fuente, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addComponent(jLabel4)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(cb_color, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addComponent(jLabel5)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(cb_stylesub, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addComponent(jLabel6)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(cb_colorsub, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(18, 18, 18)
                .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel7)
                    .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addComponent(ck_tachado)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(ck_dobletachado)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(ck_superindice)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(ck_subindice))
                    .addGroup(pnl_fuenteLayout.createSequentialGroup()
                        .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(pnl_fuenteLayout.createSequentialGroup()
                                .addComponent(ck_sombra)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(vk_contorno)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(ck_relieve))
                            .addGroup(pnl_fuenteLayout.createSequentialGroup()
                                .addComponent(ck_versales)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(ck_mayusculas)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(ck_oculto)))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(ck_grabado)))
                .addGap(18, 18, 18)
                .addGroup(pnl_fuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel8)
                    .addComponent(jSeparator2, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jScrollPane4, javax.swing.GroupLayout.PREFERRED_SIZE, 100, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jLabel9)
                .addContainerGap(19, Short.MAX_VALUE))
        );

        tabpanel.addTab("Fuente", pnl_fuente);

        javax.swing.GroupLayout pnl_espacioLayout = new javax.swing.GroupLayout(pnl_espacio);
        pnl_espacio.setLayout(pnl_espacioLayout);
        pnl_espacioLayout.setHorizontalGroup(
            pnl_espacioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 466, Short.MAX_VALUE)
        );
        pnl_espacioLayout.setVerticalGroup(
            pnl_espacioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 571, Short.MAX_VALUE)
        );

        tabpanel.addTab("Espacio entre caracteres", pnl_espacio);

        javax.swing.GroupLayout pnl_efectosLayout = new javax.swing.GroupLayout(pnl_efectos);
        pnl_efectos.setLayout(pnl_efectosLayout);
        pnl_efectosLayout.setHorizontalGroup(
            pnl_efectosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 466, Short.MAX_VALUE)
        );
        pnl_efectosLayout.setVerticalGroup(
            pnl_efectosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 571, Short.MAX_VALUE)
        );

        tabpanel.addTab("Efectos de texto", pnl_efectos);

        btn_predt.setText("Predeterminar...");

        btn_cancelar.setText("Cancelar");
        btn_cancelar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_cancelarActionPerformed(evt);
            }
        });

        btn_aceptar.setText("Aceptar");
        btn_aceptar.setName("btn_aceptar"); // NOI18N
        btn_aceptar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_aceptarActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout pnl_botbuttonsLayout = new javax.swing.GroupLayout(pnl_botbuttons);
        pnl_botbuttons.setLayout(pnl_botbuttonsLayout);
        pnl_botbuttonsLayout.setHorizontalGroup(
            pnl_botbuttonsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pnl_botbuttonsLayout.createSequentialGroup()
                .addContainerGap()
                .addComponent(btn_predt)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(btn_aceptar)
                .addGap(18, 18, 18)
                .addComponent(btn_cancelar)
                .addContainerGap())
        );
        pnl_botbuttonsLayout.setVerticalGroup(
            pnl_botbuttonsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pnl_botbuttonsLayout.createSequentialGroup()
                .addGroup(pnl_botbuttonsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btn_predt)
                    .addComponent(btn_aceptar)
                    .addComponent(btn_cancelar))
                .addGap(0, 8, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(pnl_botbuttons, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(tabpanel)
                        .addContainerGap())))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(tabpanel)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(pnl_botbuttons, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btn_cancelarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_cancelarActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_btn_cancelarActionPerformed

    private void btn_aceptarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_aceptarActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_btn_aceptarActionPerformed

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
            java.util.logging.Logger.getLogger(Ventana5.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Ventana5.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Ventana5.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Ventana5.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Ventana5().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btn_aceptar;
    private javax.swing.JButton btn_cancelar;
    private javax.swing.JButton btn_predt;
    private javax.swing.JComboBox<String> cb_color;
    private javax.swing.JComboBox<String> cb_colorsub;
    private javax.swing.JComboBox<String> cb_stylesub;
    private javax.swing.JCheckBox ck_dobletachado;
    private javax.swing.JCheckBox ck_grabado;
    private javax.swing.JCheckBox ck_mayusculas;
    private javax.swing.JCheckBox ck_oculto;
    private javax.swing.JCheckBox ck_relieve;
    private javax.swing.JCheckBox ck_sombra;
    private javax.swing.JCheckBox ck_subindice;
    private javax.swing.JCheckBox ck_superindice;
    private javax.swing.JCheckBox ck_tachado;
    private javax.swing.JCheckBox ck_versales;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JList<String> jList1;
    private javax.swing.JList<String> jList2;
    private javax.swing.JList<String> jList3;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JScrollPane jScrollPane3;
    private javax.swing.JScrollPane jScrollPane4;
    private javax.swing.JSeparator jSeparator1;
    private javax.swing.JSeparator jSeparator2;
    private javax.swing.JTextField jTextField2;
    private javax.swing.JTextField jTextField3;
    private javax.swing.JPanel pnl_botbuttons;
    private javax.swing.JPanel pnl_efectos;
    private javax.swing.JPanel pnl_espacio;
    private javax.swing.JPanel pnl_fuente;
    private javax.swing.JTabbedPane tabpanel;
    private javax.swing.JTextField txt_fuente;
    private javax.swing.JTextArea txt_vistaprevia;
    private javax.swing.JCheckBox vk_contorno;
    // End of variables declaration//GEN-END:variables
}
