/*
    OBSOLETO

 */
package com.gozerelgozeriano.pizzeria;

import java.awt.Component;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.FocusEvent;
import java.awt.event.FocusListener;

/**
 *
 * @author Usuario
 */
public class Pizza extends javax.swing.JFrame {

    private Pizzainfo info;
    private boolean ready=false;
    private double totalprize;
    
    public Pizza(){
        initComponents();
    }

    /**
     * Creates new form pizza
     * @param info 
     */
    public Pizza(Pizzainfo info){
        this.info = info;
        initComponents();
        txt_nombre.addFocusListener(new FocusListener() {
            @Override
            public void focusLost(FocusEvent arg0) {
                reportNote();
            }

            @Override
            public void focusGained(FocusEvent e) {
                
            }
        });
        txt_direccion.addFocusListener(new FocusListener() {
            @Override
            public void focusLost(FocusEvent arg0) {
                reportNote();
            }

            @Override
            public void focusGained(FocusEvent e) {
                
            }
        });
        txt_tlf.addFocusListener(new FocusListener() {
            @Override
            public void focusLost(FocusEvent arg0) {
                reportNote();
            }

            @Override
            public void focusGained(FocusEvent e) {
                
            }
        });
        
        ActionListener sliceActionListener = new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent actionEvent) {
                rb_action();
            }
        };
        rb_Local.addActionListener(sliceActionListener);
        rb_domicilio.addActionListener(sliceActionListener);
        txt_resumen.setContentType("text/html");
    }
    
    public void setReady(){
        ready=true;
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup1 = new javax.swing.ButtonGroup();
        pnl_pizzaselect = new javax.swing.JPanel();
        cb_base = new javax.swing.JComboBox<>();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        cb_ingr1 = new javax.swing.JComboBox<>();
        cb_ingr2 = new javax.swing.JComboBox<>();
        cb_ingr3 = new javax.swing.JComboBox<>();
        cb_ingr4 = new javax.swing.JComboBox<>();
        cb_descuento = new javax.swing.JComboBox<>();
        jLabel6 = new javax.swing.JLabel();
        rb_Local = new javax.swing.JRadioButton();
        rb_domicilio = new javax.swing.JRadioButton();
        jPanel1 = new javax.swing.JPanel();
        jScrollPane2 = new javax.swing.JScrollPane();
        txt_resumen = new javax.swing.JEditorPane();
        pnl_domicilio = new javax.swing.JPanel();
        jLabel7 = new javax.swing.JLabel();
        txt_nombre = new javax.swing.JTextField();
        jLabel8 = new javax.swing.JLabel();
        txt_direccion = new javax.swing.JTextField();
        jLabel9 = new javax.swing.JLabel();
        txt_tlf = new javax.swing.JTextField();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        cb_base.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));
        cb_base.addItemListener(new java.awt.event.ItemListener() {
            public void itemStateChanged(java.awt.event.ItemEvent evt) {
                refreshprize(evt);
            }
        });

        jLabel1.setText("Masa:");

        jLabel2.setText("Ingrediente1: ");

        jLabel3.setText("Ingrediente2: ");

        jLabel4.setText("Ingrediente3: ");

        jLabel5.setText("Ingrediente4: ");

        cb_ingr1.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));
        cb_ingr1.addItemListener(new java.awt.event.ItemListener() {
            public void itemStateChanged(java.awt.event.ItemEvent evt) {
                refreshprize(evt);
            }
        });
        cb_ingr1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                cb_ingr1ActionPerformed(evt);
            }
        });

        cb_ingr2.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));
        cb_ingr2.addItemListener(new java.awt.event.ItemListener() {
            public void itemStateChanged(java.awt.event.ItemEvent evt) {
                refreshprize(evt);
            }
        });

        cb_ingr3.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));
        cb_ingr3.addItemListener(new java.awt.event.ItemListener() {
            public void itemStateChanged(java.awt.event.ItemEvent evt) {
                refreshprize(evt);
            }
        });

        cb_ingr4.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));
        cb_ingr4.addItemListener(new java.awt.event.ItemListener() {
            public void itemStateChanged(java.awt.event.ItemEvent evt) {
                refreshprize(evt);
            }
        });

        cb_descuento.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));
        cb_descuento.addItemListener(new java.awt.event.ItemListener() {
            public void itemStateChanged(java.awt.event.ItemEvent evt) {
                refreshprize(evt);
            }
        });
        cb_descuento.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                cb_descuentoActionPerformed(evt);
            }
        });

        jLabel6.setText("Descuento");

        buttonGroup1.add(rb_Local);
        rb_Local.setSelected(true);
        rb_Local.setText("Local");

        buttonGroup1.add(rb_domicilio);
        rb_domicilio.setText("Domicilio");

        javax.swing.GroupLayout pnl_pizzaselectLayout = new javax.swing.GroupLayout(pnl_pizzaselect);
        pnl_pizzaselect.setLayout(pnl_pizzaselectLayout);
        pnl_pizzaselectLayout.setHorizontalGroup(
            pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pnl_pizzaselectLayout.createSequentialGroup()
                .addGap(16, 16, 16)
                .addGroup(pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                        .addGroup(pnl_pizzaselectLayout.createSequentialGroup()
                            .addComponent(jLabel5)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                            .addComponent(cb_ingr4, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addGroup(pnl_pizzaselectLayout.createSequentialGroup()
                            .addComponent(jLabel4)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                            .addComponent(cb_ingr3, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addGroup(pnl_pizzaselectLayout.createSequentialGroup()
                            .addComponent(jLabel3)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                            .addComponent(cb_ingr2, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addGroup(pnl_pizzaselectLayout.createSequentialGroup()
                            .addComponent(jLabel2)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                            .addComponent(cb_ingr1, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addGroup(pnl_pizzaselectLayout.createSequentialGroup()
                            .addComponent(jLabel1)
                            .addGap(37, 37, 37)
                            .addComponent(cb_base, javax.swing.GroupLayout.PREFERRED_SIZE, 154, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(pnl_pizzaselectLayout.createSequentialGroup()
                        .addComponent(jLabel6)
                        .addGap(18, 18, 18)
                        .addComponent(cb_descuento, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                        .addComponent(rb_Local)
                        .addComponent(rb_domicilio)))
                .addContainerGap(34, Short.MAX_VALUE))
        );
        pnl_pizzaselectLayout.setVerticalGroup(
            pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pnl_pizzaselectLayout.createSequentialGroup()
                .addGap(28, 28, 28)
                .addGroup(pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(cb_base, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1))
                .addGap(34, 34, 34)
                .addGroup(pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(cb_ingr1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(cb_ingr2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(cb_ingr3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel5)
                    .addComponent(cb_ingr4, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(37, 37, 37)
                .addGroup(pnl_pizzaselectLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(cb_descuento, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel6))
                .addGap(18, 18, 18)
                .addComponent(rb_Local)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(rb_domicilio)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        jScrollPane2.setViewportView(txt_resumen);

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jScrollPane2, javax.swing.GroupLayout.DEFAULT_SIZE, 496, Short.MAX_VALUE)
                .addContainerGap())
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jScrollPane2, javax.swing.GroupLayout.DEFAULT_SIZE, 583, Short.MAX_VALUE)
                .addContainerGap())
        );

        jLabel7.setText("Nombre");
        jLabel7.setEnabled(false);

        txt_nombre.setEnabled(false);
        txt_nombre.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txt_nombreActionPerformed(evt);
            }
        });

        jLabel8.setText("Dirección");
        jLabel8.setEnabled(false);

        txt_direccion.setEnabled(false);

        jLabel9.setText("Teléfono");
        jLabel9.setEnabled(false);

        txt_tlf.setEnabled(false);

        javax.swing.GroupLayout pnl_domicilioLayout = new javax.swing.GroupLayout(pnl_domicilio);
        pnl_domicilio.setLayout(pnl_domicilioLayout);
        pnl_domicilioLayout.setHorizontalGroup(
            pnl_domicilioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pnl_domicilioLayout.createSequentialGroup()
                .addGap(17, 17, 17)
                .addGroup(pnl_domicilioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(pnl_domicilioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                        .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, pnl_domicilioLayout.createSequentialGroup()
                            .addComponent(jLabel7)
                            .addGap(18, 18, 18))
                        .addGroup(pnl_domicilioLayout.createSequentialGroup()
                            .addComponent(jLabel8)
                            .addGap(18, 18, 18)))
                    .addGroup(pnl_domicilioLayout.createSequentialGroup()
                        .addComponent(jLabel9)
                        .addGap(22, 22, 22)))
                .addGroup(pnl_domicilioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(pnl_domicilioLayout.createSequentialGroup()
                        .addGap(6, 6, 6)
                        .addComponent(txt_tlf, javax.swing.GroupLayout.PREFERRED_SIZE, 143, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(pnl_domicilioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                        .addComponent(txt_direccion)
                        .addComponent(txt_nombre, javax.swing.GroupLayout.DEFAULT_SIZE, 153, Short.MAX_VALUE)))
                .addContainerGap(39, Short.MAX_VALUE))
        );
        pnl_domicilioLayout.setVerticalGroup(
            pnl_domicilioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(pnl_domicilioLayout.createSequentialGroup()
                .addGap(14, 14, 14)
                .addGroup(pnl_domicilioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel7)
                    .addComponent(txt_nombre, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(pnl_domicilioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel8)
                    .addComponent(txt_direccion, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(pnl_domicilioLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel9)
                    .addComponent(txt_tlf, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(pnl_domicilio, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(pnl_pizzaselect, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(23, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(26, 26, 26)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(pnl_pizzaselect, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(pnl_domicilio, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                .addContainerGap(16, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void cb_ingr1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cb_ingr1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_cb_ingr1ActionPerformed

    private String getRecipeString(){
        String pizzatext;
        int selection;
        pizzatext = "<font face=\"arial\"size=\"24\"<center>PIZZERIA LA MAMMA</center></font><br><br>";
        pizzatext+="<strong>BASE</strong><br>";
        pizzatext+= "&nbsp;&nbsp;&nbsp;&nbsp;" + cb_base.getSelectedItem() + "&nbsp;&nbsp;&nbsp;&nbsp;" + info.getbaseprizes(cb_base.getSelectedIndex()) + "€<br>";
        pizzatext += "<br><strong>INGREDIENTES</strong><br>";
        selection = cb_ingr1.getSelectedIndex();
        if(selection>0){
            pizzatext += "&nbsp;&nbsp;&nbsp;&nbsp;" + cb_ingr1.getSelectedItem() + "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" + info.getingrprizes(selection) + "€<br>";
        }
        selection = cb_ingr2.getSelectedIndex();
        if(selection>0){
            pizzatext += "&nbsp;&nbsp;&nbsp;&nbsp;" + cb_ingr2.getSelectedItem() + "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" + info.getingrprizes(selection) + "€<br>";
        }
        selection = cb_ingr3.getSelectedIndex();
        if(selection>0){
            pizzatext += "&nbsp;&nbsp;&nbsp;&nbsp;" + cb_ingr3.getSelectedItem() + "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" + info.getingrprizes(selection) + "€<br>";
        }
        selection = cb_ingr4.getSelectedIndex();
        if(selection>0){
            pizzatext += "&nbsp;&nbsp;&nbsp;&nbsp;" + cb_ingr4.getSelectedItem() + "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" + info.getingrprizes(selection) + "€<br>";
        }
        pizzatext += "<br><h2>TOTAL&nbsp;&nbsp;&nbsp;&nbsp;" + totalprize +"€</h2>";
        selection = cb_descuento.getSelectedIndex();
        if(selection>0){
            pizzatext += "<br><h2>DESCUENTO&nbsp;&nbsp;&nbsp;&nbsp;" + cb_descuento.getSelectedItem() + "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" + (totalprize - (totalprize*info.getdescuento(selection)/100.0)+"€</h2>");
        }
        
        if(rb_Local.isSelected()){
            pizzatext += "<br><br><strong>Servicio local</strong>";
        }else{
            pizzatext += "<br><br><strong>Servicio domicilio</strong>";
            pizzatext += "<br>" + txt_nombre.getText();
            pizzatext += "<br>" + txt_direccion.getText();
            pizzatext += "<br>" + txt_tlf.getText();
        }
        return(pizzatext);
    }
    
    private double getRecipePrize(){
        double prize;
        int selection;
        prize = info.getbaseprizes(cb_base.getSelectedIndex());
        selection = cb_ingr1.getSelectedIndex();
        if(selection>0){
            prize +=info.getingrprizes(selection);
        }
        selection = cb_ingr2.getSelectedIndex();
        if(selection>0){
            prize +=info.getingrprizes(selection);
        }
        selection = cb_ingr3.getSelectedIndex();
        if(selection>0){
            prize +=info.getingrprizes(selection);
        }
        selection = cb_ingr4.getSelectedIndex();
        if(selection>0){
            prize +=info.getingrprizes(selection);
        }
        return(prize);
    }
    
    private void reportNote(){
        totalprize = getRecipePrize();
        txt_resumen.setText(getRecipeString());
    }
    
    private void refreshprize(java.awt.event.ItemEvent evt) {//GEN-FIRST:event_refreshprize
        if(ready){
            reportNote();
        }
        
    }//GEN-LAST:event_refreshprize

    private void rb_action(){
        for(Component comp : pnl_domicilio.getComponents()){
            comp.setEnabled(!this.rb_Local.isSelected());
        }
        reportNote();
    }
    
    private void cb_descuentoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cb_descuentoActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_cb_descuentoActionPerformed

    private void txt_nombreActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txt_nombreActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txt_nombreActionPerformed

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
            java.util.logging.Logger.getLogger(Pizza.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>
        /* Create and display the form */
        /*java.awt.EventQueue.invokeLater(new Runnable() {
        public void run() {
        new Pizza().setVisible(true);
        }
        });*/
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Pizza().setVisible(true);
            }
        });
    }
    
    public void loadbases(String[] baseslist){
        this.cb_base.removeAllItems();
        for (String baseslist1 : baseslist) {
            this.cb_base.addItem(baseslist1);
        }
    }
    
    public void loadingr(String[] ingrlist){
        this.cb_ingr1.removeAllItems();
        this.cb_ingr2.removeAllItems();
        this.cb_ingr3.removeAllItems();
        this.cb_ingr4.removeAllItems();
        for (String ingrlist1 : ingrlist) {
            this.cb_ingr1.addItem(ingrlist1);
            this.cb_ingr2.addItem(ingrlist1);
            this.cb_ingr3.addItem(ingrlist1);
            this.cb_ingr4.addItem(ingrlist1);
        }
    }
    
    public void loaddescuentos(double[]descuentoslist){
        this.cb_descuento.removeAllItems();
        for (double descuentoslist1 : descuentoslist) {
            this.cb_descuento.addItem(Double.toString(descuentoslist1)+"%");
        }
    }
    
    private void refreshprize(java.awt.event.ActionEvent evt) {                                         
        // TODO add your handling code here:
    }    

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.JComboBox<String> cb_base;
    private javax.swing.JComboBox<String> cb_descuento;
    private javax.swing.JComboBox<String> cb_ingr1;
    private javax.swing.JComboBox<String> cb_ingr2;
    private javax.swing.JComboBox<String> cb_ingr3;
    private javax.swing.JComboBox<String> cb_ingr4;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JPanel pnl_domicilio;
    private javax.swing.JPanel pnl_pizzaselect;
    private javax.swing.JRadioButton rb_Local;
    private javax.swing.JRadioButton rb_domicilio;
    private javax.swing.JTextField txt_direccion;
    private javax.swing.JTextField txt_nombre;
    private javax.swing.JEditorPane txt_resumen;
    private javax.swing.JTextField txt_tlf;
    // End of variables declaration//GEN-END:variables
}
