/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ifct0609.mavenproject2;

/**
 *
 * @author Usuario
 */
public class Frame5 extends javax.swing.JFrame {

    /**
     * Creates new form Frame5
     */
    public Frame5() {
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

        jTabbedPane3 = new javax.swing.JTabbedPane();
        PanelPestanas = new javax.swing.JTabbedPane();
        PanelFuentes = new javax.swing.JPanel();
        EtiquetaFuentes = new javax.swing.JLabel();
        TextFieldFuente = new javax.swing.JTextField();
        jScrollPane1 = new javax.swing.JScrollPane();
        ListaFuentes = new javax.swing.JList<>();
        EtiquetaEstilo = new javax.swing.JLabel();
        jScrollPane2 = new javax.swing.JScrollPane();
        ListaEstilos = new javax.swing.JList<>();
        TextFieldEstilo = new javax.swing.JTextField();
        EtiquetaTamanhos = new javax.swing.JLabel();
        TextFieldTamanhos = new javax.swing.JTextField();
        jScrollPane3 = new javax.swing.JScrollPane();
        ListaTamanhos = new javax.swing.JList<>();
        EiquetaColor = new javax.swing.JLabel();
        ComboBoxColor = new javax.swing.JComboBox<>();
        PanelEspacio = new javax.swing.JPanel();
        PanelEfectos = new javax.swing.JPanel();
        ButtonAceptar = new javax.swing.JButton();
        ButtonCancelar = new javax.swing.JButton();
        ButtonPredeterminar = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        EtiquetaFuentes.setText("Fuente:");

        TextFieldFuente.setText("Times New Roman");

        ListaFuentes.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "Arial", "Arial Bold", "Courier", "Ebrima", "Elephant", "Fixedsys", "Times New Roman", "Tiranti Solid LET", "Traditional Arabic", "Trebuchet MS", "Tunga", " " };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        ListaFuentes.setSelectionMode(javax.swing.ListSelectionModel.SINGLE_SELECTION);
        ListaFuentes.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        jScrollPane1.setViewportView(ListaFuentes);

        EtiquetaEstilo.setText("Estilo de fuente:");

        ListaEstilos.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "Normal", "Negrita", "Cursiva", "Negrita Cursiva" };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        jScrollPane2.setViewportView(ListaEstilos);

        TextFieldEstilo.setText("Normal");

        EtiquetaTamanhos.setText("Tamaño:");

        TextFieldTamanhos.setText("12");

        ListaTamanhos.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "8", "9", "10", "11", "12", "13", "14", "15", "16", "18", "20", "24", "28", "32", "38", "43" };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        jScrollPane3.setViewportView(ListaTamanhos);

        EiquetaColor.setText("Color de texto:");

        ComboBoxColor.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Automático", "Azul", "Blanco", "Gris", "Marrón", "Negro", "Rojo", "Verde", "Violeta", " " }));

        javax.swing.GroupLayout PanelFuentesLayout = new javax.swing.GroupLayout(PanelFuentes);
        PanelFuentes.setLayout(PanelFuentesLayout);
        PanelFuentesLayout.setHorizontalGroup(
            PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PanelFuentesLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(EtiquetaFuentes)
                    .addComponent(TextFieldFuente, javax.swing.GroupLayout.PREFERRED_SIZE, 215, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                        .addComponent(EiquetaColor)
                        .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 201, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGroup(PanelFuentesLayout.createSequentialGroup()
                            .addGap(6, 6, 6)
                            .addComponent(ComboBoxColor, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addGroup(PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(PanelFuentesLayout.createSequentialGroup()
                        .addGap(9, 9, 9)
                        .addComponent(EtiquetaEstilo)
                        .addGap(83, 83, 83)
                        .addComponent(EtiquetaTamanhos))
                    .addGroup(PanelFuentesLayout.createSequentialGroup()
                        .addGap(18, 18, 18)
                        .addGroup(PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(TextFieldEstilo, javax.swing.GroupLayout.PREFERRED_SIZE, 149, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addGroup(PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(TextFieldTamanhos, javax.swing.GroupLayout.PREFERRED_SIZE, 136, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jScrollPane3, javax.swing.GroupLayout.PREFERRED_SIZE, 119, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addContainerGap(22, Short.MAX_VALUE))
        );
        PanelFuentesLayout.setVerticalGroup(
            PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PanelFuentesLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(EtiquetaFuentes)
                    .addComponent(EtiquetaEstilo)
                    .addComponent(EtiquetaTamanhos))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(TextFieldFuente, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(TextFieldEstilo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(TextFieldTamanhos, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelFuentesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jScrollPane2, javax.swing.GroupLayout.DEFAULT_SIZE, 93, Short.MAX_VALUE)
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE)
                    .addComponent(jScrollPane3, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(EiquetaColor)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(ComboBoxColor, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(170, Short.MAX_VALUE))
        );

        PanelPestanas.addTab("Fuentes", PanelFuentes);

        javax.swing.GroupLayout PanelEspacioLayout = new javax.swing.GroupLayout(PanelEspacio);
        PanelEspacio.setLayout(PanelEspacioLayout);
        PanelEspacioLayout.setHorizontalGroup(
            PanelEspacioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 564, Short.MAX_VALUE)
        );
        PanelEspacioLayout.setVerticalGroup(
            PanelEspacioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 375, Short.MAX_VALUE)
        );

        PanelPestanas.addTab("Espacio entre caracteres", PanelEspacio);

        javax.swing.GroupLayout PanelEfectosLayout = new javax.swing.GroupLayout(PanelEfectos);
        PanelEfectos.setLayout(PanelEfectosLayout);
        PanelEfectosLayout.setHorizontalGroup(
            PanelEfectosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 564, Short.MAX_VALUE)
        );
        PanelEfectosLayout.setVerticalGroup(
            PanelEfectosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 375, Short.MAX_VALUE)
        );

        PanelPestanas.addTab("Efectos de texto", PanelEfectos);

        ButtonAceptar.setText("Aceptar");
        ButtonAceptar.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                ButtonAceptarMouseReleased(evt);
            }
        });

        ButtonCancelar.setText("Cancelar");

        ButtonPredeterminar.setText("Predeterminar");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(PanelPestanas)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addGap(26, 26, 26)
                .addComponent(ButtonPredeterminar)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(ButtonAceptar)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(ButtonCancelar)
                .addGap(28, 28, 28))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(PanelPestanas, javax.swing.GroupLayout.PREFERRED_SIZE, 401, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(ButtonAceptar)
                    .addComponent(ButtonCancelar)
                    .addComponent(ButtonPredeterminar))
                .addGap(0, 8, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void ButtonAceptarMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonAceptarMouseReleased
        // TODO add your handling code here:
        
    }//GEN-LAST:event_ButtonAceptarMouseReleased

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
            java.util.logging.Logger.getLogger(Frame5.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Frame5.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Frame5.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Frame5.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Frame5().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton ButtonAceptar;
    private javax.swing.JButton ButtonCancelar;
    private javax.swing.JButton ButtonPredeterminar;
    private javax.swing.JComboBox<String> ComboBoxColor;
    private javax.swing.JLabel EiquetaColor;
    private javax.swing.JLabel EtiquetaEstilo;
    private javax.swing.JLabel EtiquetaFuentes;
    private javax.swing.JLabel EtiquetaTamanhos;
    private javax.swing.JList<String> ListaEstilos;
    private javax.swing.JList<String> ListaFuentes;
    private javax.swing.JList<String> ListaTamanhos;
    private javax.swing.JPanel PanelEfectos;
    private javax.swing.JPanel PanelEspacio;
    private javax.swing.JPanel PanelFuentes;
    private javax.swing.JTabbedPane PanelPestanas;
    private javax.swing.JTextField TextFieldEstilo;
    private javax.swing.JTextField TextFieldFuente;
    private javax.swing.JTextField TextFieldTamanhos;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JScrollPane jScrollPane3;
    private javax.swing.JTabbedPane jTabbedPane3;
    // End of variables declaration//GEN-END:variables
}
