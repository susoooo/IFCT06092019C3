/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.d_ventana5;

/**
 *
 * @author Usuario
 */
public class Fuente extends javax.swing.JFrame {

    /**
     * Creates new form Fuente
     */
    public Fuente() {
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

        TP1º = new javax.swing.JTabbedPane();
        Pfuente = new javax.swing.JPanel();
        Tfuente = new javax.swing.JLabel();
        TestiloDeFuente = new javax.swing.JLabel();
        Ttamaño = new javax.swing.JLabel();
        TFfuente = new javax.swing.JTextField();
        TFestiloDeFuente = new javax.swing.JTextField();
        TFtamaño = new javax.swing.JTextField();
        SPfuente = new javax.swing.JScrollPane();
        Lfuente = new javax.swing.JList<>();
        SPestiloDeFuente = new javax.swing.JScrollPane();
        LestiloFuente = new javax.swing.JList<>();
        SPtamaño = new javax.swing.JScrollPane();
        Ltamaño = new javax.swing.JList<>();
        TcolorDeFuente = new javax.swing.JLabel();
        ComboBcolorDeFuente = new javax.swing.JComboBox<>();
        ComboBestiloDeSubrayado = new javax.swing.JComboBox<>();
        TestiloDeSubrayado = new javax.swing.JLabel();
        TcolorDeSubrayado = new javax.swing.JLabel();
        ComboBcolorDeSubrayado = new javax.swing.JComboBox<>();
        Tefectos = new javax.swing.JLabel();
        Sefectos = new javax.swing.JSeparator();
        CheckBtachado = new javax.swing.JCheckBox();
        CheckBdobleTachado = new javax.swing.JCheckBox();
        CheckBsuperIndice = new javax.swing.JCheckBox();
        CheckBsubíndice = new javax.swing.JCheckBox();
        CheckBsombra = new javax.swing.JCheckBox();
        CheckBcontorno = new javax.swing.JCheckBox();
        CheckBrelieve = new javax.swing.JCheckBox();
        CheckBgrabado = new javax.swing.JCheckBox();
        CheckBversales = new javax.swing.JCheckBox();
        CheckBmayúsculas = new javax.swing.JCheckBox();
        CheckBoculto = new javax.swing.JCheckBox();
        jLabel1 = new javax.swing.JLabel();
        jSeparator2 = new javax.swing.JSeparator();
        jScrollPane1 = new javax.swing.JScrollPane();
        TAvistaPrevia = new javax.swing.JTextArea();
        TfuenteTrueType = new javax.swing.JLabel();
        Bpredeterminar = new javax.swing.JButton();
        Baceptar = new javax.swing.JButton();
        Bcancelar = new javax.swing.JButton();
        PespacioEntreCaracteres = new javax.swing.JPanel();
        PefectosDeTexto = new javax.swing.JPanel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        Tfuente.setText("Fuente:");

        TestiloDeFuente.setText("Estilo de fuente:");

        Ttamaño.setText("Tamaño:");

        TFfuente.setText("Times New Roman");

        TFestiloDeFuente.setText("Normal");

        TFtamaño.setText("12");

        Lfuente.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "Times New Roman", "Tiranti Solid LET", "Traditional Aravic", "Trebuchet MS", "Tunga" };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        SPfuente.setViewportView(Lfuente);

        LestiloFuente.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "Normal", "Cursiva", "Negrita", "Negrita Cursiva", "", "" };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        SPestiloDeFuente.setViewportView(LestiloFuente);

        Ltamaño.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20" };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        SPtamaño.setViewportView(Ltamaño);

        TcolorDeFuente.setText("Color de fuente:");

        ComboBcolorDeFuente.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Automático", "Item 2", "Item 3", "Item 4" }));
        ComboBcolorDeFuente.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ComboBcolorDeFuenteActionPerformed(evt);
            }
        });

        ComboBestiloDeSubrayado.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "(Ninguno)", "Item 2", "Item 3", "Item 4" }));

        TestiloDeSubrayado.setText("Estílo de subrayado:");

        TcolorDeSubrayado.setText("Color de subrayado:");

        ComboBcolorDeSubrayado.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Automático", "Item 2", "Item 3", "Item 4" }));

        Tefectos.setText("Efectos");

        CheckBtachado.setText("Tachado");

        CheckBdobleTachado.setText("Doble tachado");

        CheckBsuperIndice.setText("Superíndice");

        CheckBsubíndice.setText("Subíndice");

        CheckBsombra.setText("Sombra");

        CheckBcontorno.setText("Contorno");

        CheckBrelieve.setText("Relieve");

        CheckBgrabado.setText("Grabado");

        CheckBversales.setText("Versales");

        CheckBmayúsculas.setText("Mayúsculas");

        CheckBoculto.setText("Oculto");

        jLabel1.setText("Vista previa");

        TAvistaPrevia.setColumns(20);
        TAvistaPrevia.setRows(5);
        TAvistaPrevia.setText("\n\n_________\t  Times New Roman\t    _________");
        jScrollPane1.setViewportView(TAvistaPrevia);

        TfuenteTrueType.setText("Fuente TrueType, se usará la misma fuente en pantalla y en la impresora.");

        Bpredeterminar.setText("Predeterminar...");

        Baceptar.setText("Aceptar");
        Baceptar.setSelected(true);
        Baceptar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BaceptarActionPerformed(evt);
            }
        });

        Bcancelar.setText("Cancelar");

        javax.swing.GroupLayout PfuenteLayout = new javax.swing.GroupLayout(Pfuente);
        Pfuente.setLayout(PfuenteLayout);
        PfuenteLayout.setHorizontalGroup(
            PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PfuenteLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(PfuenteLayout.createSequentialGroup()
                        .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(CheckBtachado)
                            .addComponent(CheckBsubíndice)
                            .addComponent(CheckBsuperIndice)
                            .addComponent(CheckBdobleTachado))
                        .addGap(82, 82, 82)
                        .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(CheckBsombra)
                            .addComponent(CheckBcontorno)
                            .addComponent(CheckBrelieve)
                            .addComponent(CheckBgrabado))
                        .addGap(68, 68, 68)
                        .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(PfuenteLayout.createSequentialGroup()
                                .addComponent(CheckBversales)
                                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                            .addGroup(PfuenteLayout.createSequentialGroup()
                                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(CheckBmayúsculas)
                                    .addComponent(CheckBoculto))
                                .addGap(0, 0, Short.MAX_VALUE))))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, PfuenteLayout.createSequentialGroup()
                        .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(jScrollPane1, javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(javax.swing.GroupLayout.Alignment.LEADING, PfuenteLayout.createSequentialGroup()
                                .addComponent(jLabel1)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jSeparator2))
                            .addGroup(PfuenteLayout.createSequentialGroup()
                                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, PfuenteLayout.createSequentialGroup()
                                        .addComponent(SPfuente, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(18, 18, 18)
                                        .addComponent(SPestiloDeFuente))
                                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, PfuenteLayout.createSequentialGroup()
                                        .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addGroup(PfuenteLayout.createSequentialGroup()
                                                .addComponent(Tfuente)
                                                .addGap(0, 0, Short.MAX_VALUE))
                                            .addComponent(TFfuente))
                                        .addGap(18, 18, 18)
                                        .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addComponent(TFestiloDeFuente, javax.swing.GroupLayout.PREFERRED_SIZE, 125, javax.swing.GroupLayout.PREFERRED_SIZE)
                                            .addComponent(TestiloDeFuente)))
                                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, PfuenteLayout.createSequentialGroup()
                                        .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addComponent(ComboBcolorDeFuente, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                                            .addComponent(TcolorDeFuente))
                                        .addGap(18, 18, 18)
                                        .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addComponent(TestiloDeSubrayado)
                                            .addComponent(ComboBestiloDeSubrayado, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                                .addGap(18, 18, 18)
                                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(Ttamaño)
                                    .addComponent(TFtamaño)
                                    .addComponent(SPtamaño)
                                    .addComponent(TcolorDeSubrayado)
                                    .addComponent(ComboBcolorDeSubrayado, 0, 115, Short.MAX_VALUE)))
                            .addGroup(PfuenteLayout.createSequentialGroup()
                                .addGap(0, 0, Short.MAX_VALUE)
                                .addComponent(Tefectos)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addComponent(Sefectos, javax.swing.GroupLayout.PREFERRED_SIZE, 386, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(26, 26, 26))
                    .addGroup(PfuenteLayout.createSequentialGroup()
                        .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(PfuenteLayout.createSequentialGroup()
                                .addComponent(TfuenteTrueType)
                                .addGap(0, 0, Short.MAX_VALUE))
                            .addGroup(PfuenteLayout.createSequentialGroup()
                                .addComponent(Bpredeterminar)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(Baceptar)
                                .addGap(18, 18, 18)
                                .addComponent(Bcancelar)))
                        .addContainerGap())))
        );
        PfuenteLayout.setVerticalGroup(
            PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PfuenteLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Tfuente)
                    .addComponent(TestiloDeFuente)
                    .addComponent(Ttamaño))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(TFfuente, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(TFestiloDeFuente, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(TFtamaño, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                        .addComponent(SPestiloDeFuente, javax.swing.GroupLayout.DEFAULT_SIZE, 103, Short.MAX_VALUE)
                        .addComponent(SPtamaño, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE))
                    .addComponent(SPfuente, javax.swing.GroupLayout.PREFERRED_SIZE, 112, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(TcolorDeFuente)
                    .addComponent(TestiloDeSubrayado)
                    .addComponent(TcolorDeSubrayado))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(ComboBcolorDeFuente, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ComboBestiloDeSubrayado, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ComboBcolorDeSubrayado, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Tefectos)
                    .addComponent(Sefectos, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(CheckBversales)
                    .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(CheckBtachado)
                        .addComponent(CheckBsombra)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(CheckBdobleTachado)
                    .addComponent(CheckBcontorno)
                    .addComponent(CheckBmayúsculas))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(CheckBsuperIndice)
                    .addComponent(CheckBrelieve)
                    .addComponent(CheckBoculto))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(CheckBsubíndice)
                    .addComponent(CheckBgrabado))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel1)
                    .addComponent(jSeparator2, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(TfuenteTrueType)
                .addGap(18, 18, 18)
                .addGroup(PfuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Bpredeterminar)
                    .addComponent(Baceptar)
                    .addComponent(Bcancelar))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        TP1º.addTab("Fuente", Pfuente);

        javax.swing.GroupLayout PespacioEntreCaracteresLayout = new javax.swing.GroupLayout(PespacioEntreCaracteres);
        PespacioEntreCaracteres.setLayout(PespacioEntreCaracteresLayout);
        PespacioEntreCaracteresLayout.setHorizontalGroup(
            PespacioEntreCaracteresLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 468, Short.MAX_VALUE)
        );
        PespacioEntreCaracteresLayout.setVerticalGroup(
            PespacioEntreCaracteresLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 575, Short.MAX_VALUE)
        );

        TP1º.addTab("Espacio entre caracteres", PespacioEntreCaracteres);

        javax.swing.GroupLayout PefectosDeTextoLayout = new javax.swing.GroupLayout(PefectosDeTexto);
        PefectosDeTexto.setLayout(PefectosDeTextoLayout);
        PefectosDeTextoLayout.setHorizontalGroup(
            PefectosDeTextoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 468, Short.MAX_VALUE)
        );
        PefectosDeTextoLayout.setVerticalGroup(
            PefectosDeTextoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 575, Short.MAX_VALUE)
        );

        TP1º.addTab("Efectos de texto", PefectosDeTexto);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(TP1º)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(TP1º)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void ComboBcolorDeFuenteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ComboBcolorDeFuenteActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_ComboBcolorDeFuenteActionPerformed

    private void BaceptarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BaceptarActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_BaceptarActionPerformed

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
            java.util.logging.Logger.getLogger(Fuente.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Fuente.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Fuente.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Fuente.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Fuente().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton Baceptar;
    private javax.swing.JButton Bcancelar;
    private javax.swing.JButton Bpredeterminar;
    private javax.swing.JCheckBox CheckBcontorno;
    private javax.swing.JCheckBox CheckBdobleTachado;
    private javax.swing.JCheckBox CheckBgrabado;
    private javax.swing.JCheckBox CheckBmayúsculas;
    private javax.swing.JCheckBox CheckBoculto;
    private javax.swing.JCheckBox CheckBrelieve;
    private javax.swing.JCheckBox CheckBsombra;
    private javax.swing.JCheckBox CheckBsubíndice;
    private javax.swing.JCheckBox CheckBsuperIndice;
    private javax.swing.JCheckBox CheckBtachado;
    private javax.swing.JCheckBox CheckBversales;
    private javax.swing.JComboBox<String> ComboBcolorDeFuente;
    private javax.swing.JComboBox<String> ComboBcolorDeSubrayado;
    private javax.swing.JComboBox<String> ComboBestiloDeSubrayado;
    private javax.swing.JList<String> LestiloFuente;
    private javax.swing.JList<String> Lfuente;
    private javax.swing.JList<String> Ltamaño;
    private javax.swing.JPanel PefectosDeTexto;
    private javax.swing.JPanel PespacioEntreCaracteres;
    private javax.swing.JPanel Pfuente;
    private javax.swing.JScrollPane SPestiloDeFuente;
    private javax.swing.JScrollPane SPfuente;
    private javax.swing.JScrollPane SPtamaño;
    private javax.swing.JSeparator Sefectos;
    private javax.swing.JTextArea TAvistaPrevia;
    private javax.swing.JTextField TFestiloDeFuente;
    private javax.swing.JTextField TFfuente;
    private javax.swing.JTextField TFtamaño;
    private javax.swing.JTabbedPane TP1º;
    private javax.swing.JLabel TcolorDeFuente;
    private javax.swing.JLabel TcolorDeSubrayado;
    private javax.swing.JLabel Tefectos;
    private javax.swing.JLabel TestiloDeFuente;
    private javax.swing.JLabel TestiloDeSubrayado;
    private javax.swing.JLabel Tfuente;
    private javax.swing.JLabel TfuenteTrueType;
    private javax.swing.JLabel Ttamaño;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JSeparator jSeparator2;
    // End of variables declaration//GEN-END:variables
}