/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.functionalguis;

/**
 *
 * @author Usuario
 */
public class Calculadora extends javax.swing.JFrame {

    Float PrimerOperando = 0.0f, SegundoOperando = 0.0f;
    boolean ClearBeforeNext = false;
    enum Operacion {
        BLANK,
        ADD,
        SUB,
        MUL,
        DIV,
        SEN,
        COS,
        TAN,
    }
    Operacion Operador = Operacion.BLANK;
    
    /**
     * Creates new form Calculadora
     */
    public Calculadora() {
        setLocationRelativeTo(null);
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

        PanelPrincipal = new javax.swing.JPanel();
        FieldPantalla = new javax.swing.JTextField();
        ButtonMultiplicacion = new javax.swing.JButton();
        ButtonComa = new javax.swing.JButton();
        ButtonSubstraccion = new javax.swing.JButton();
        ButtonClear3 = new javax.swing.JButton();
        ButtonSen = new javax.swing.JButton();
        ButtonSiete = new javax.swing.JButton();
        ButtonOcho = new javax.swing.JButton();
        ButtonNueve = new javax.swing.JButton();
        ButtonAdicion = new javax.swing.JButton();
        ButtonCos = new javax.swing.JButton();
        ButtonTan = new javax.swing.JButton();
        ButtonCuatro = new javax.swing.JButton();
        ButtonCinco = new javax.swing.JButton();
        ButtonSeis = new javax.swing.JButton();
        ButtonDos = new javax.swing.JButton();
        ButtonTres = new javax.swing.JButton();
        ButtonUno = new javax.swing.JButton();
        ButtonIgual = new javax.swing.JButton();
        ButtonDivision = new javax.swing.JButton();
        ButtonCero = new javax.swing.JButton();
        MenuBar = new javax.swing.JMenuBar();
        MenuFile = new javax.swing.JMenu();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Calc");
        setResizable(false);

        FieldPantalla.setFont(new java.awt.Font("Tahoma", 0, 24)); // NOI18N

        ButtonMultiplicacion.setText("x");
        ButtonMultiplicacion.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonMultiplicacion.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ButtonMultiplicacionMouseClicked(evt);
            }
        });

        ButtonComa.setText(",");
        ButtonComa.setPreferredSize(new java.awt.Dimension(40, 40));

        ButtonSubstraccion.setText("-");
        ButtonSubstraccion.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonSubstraccion.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ButtonSubstraccionMouseClicked(evt);
            }
        });

        ButtonClear3.setText("C");
        ButtonClear3.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonClear3.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ButtonClear3MouseClicked(evt);
            }
        });

        ButtonSen.setText("sen");
        ButtonSen.setMargin(new java.awt.Insets(2, 2, 2, 2));
        ButtonSen.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonSen.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ButtonSenMouseClicked(evt);
            }
        });

        ButtonSiete.setText("7");
        ButtonSiete.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonSiete.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonSieteMousePressed(evt);
            }
        });

        ButtonOcho.setText("8");
        ButtonOcho.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonOcho.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonOchoMousePressed(evt);
            }
        });

        ButtonNueve.setText("9");
        ButtonNueve.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonNueve.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonNueveMousePressed(evt);
            }
        });

        ButtonAdicion.setText("+");
        ButtonAdicion.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonAdicion.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ButtonAdicionMouseClicked(evt);
            }
        });

        ButtonCos.setText("cos");
        ButtonCos.setMargin(new java.awt.Insets(2, 2, 2, 2));
        ButtonCos.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonCos.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ButtonCosMouseClicked(evt);
            }
        });

        ButtonTan.setText("tan");
        ButtonTan.setMargin(new java.awt.Insets(2, 2, 2, 2));
        ButtonTan.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonTan.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ButtonTanMouseClicked(evt);
            }
        });

        ButtonCuatro.setText("4");
        ButtonCuatro.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonCuatro.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonCuatroMousePressed(evt);
            }
        });

        ButtonCinco.setText("5");
        ButtonCinco.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonCinco.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonCincoMousePressed(evt);
            }
        });

        ButtonSeis.setText("6");
        ButtonSeis.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonSeis.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonSeisMousePressed(evt);
            }
        });

        ButtonDos.setText("2");
        ButtonDos.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonDos.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonDosMousePressed(evt);
            }
        });

        ButtonTres.setText("3");
        ButtonTres.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonTres.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonTresMousePressed(evt);
            }
        });

        ButtonUno.setText("1");
        ButtonUno.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonUno.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonUnoMousePressed(evt);
            }
        });

        ButtonIgual.setText("=");
        ButtonIgual.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonIgual.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ButtonIgualMouseClicked(evt);
            }
        });

        ButtonDivision.setText("÷");
        ButtonDivision.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonDivision.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ButtonDivisionMouseClicked(evt);
            }
        });

        ButtonCero.setText("0");
        ButtonCero.setPreferredSize(new java.awt.Dimension(40, 40));
        ButtonCero.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ButtonCeroMousePressed(evt);
            }
        });

        javax.swing.GroupLayout PanelPrincipalLayout = new javax.swing.GroupLayout(PanelPrincipal);
        PanelPrincipal.setLayout(PanelPrincipalLayout);
        PanelPrincipalLayout.setHorizontalGroup(
            PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(PanelPrincipalLayout.createSequentialGroup()
                        .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                .addComponent(ButtonCero, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(ButtonComa, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                .addComponent(ButtonUno, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(ButtonDos, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                .addComponent(ButtonCuatro, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(ButtonCinco, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                .addComponent(ButtonSeis, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(ButtonSubstraccion, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                .addComponent(ButtonTres, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(ButtonMultiplicacion, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                                .addComponent(ButtonIgual, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(ButtonDivision, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))))
                    .addGroup(PanelPrincipalLayout.createSequentialGroup()
                        .addComponent(ButtonSiete, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(ButtonOcho, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(ButtonNueve, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(ButtonAdicion, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                        .addComponent(FieldPantalla, javax.swing.GroupLayout.Alignment.LEADING)
                        .addGroup(javax.swing.GroupLayout.Alignment.LEADING, PanelPrincipalLayout.createSequentialGroup()
                            .addComponent(ButtonClear3, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                            .addComponent(ButtonSen, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                            .addComponent(ButtonCos, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                            .addComponent(ButtonTan, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        PanelPrincipalLayout.setVerticalGroup(
            PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PanelPrincipalLayout.createSequentialGroup()
                .addContainerGap()
                .addComponent(FieldPantalla, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(ButtonClear3, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonSen, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonCos, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonTan, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(ButtonSiete, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonOcho, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonNueve, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonAdicion, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(ButtonCuatro, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonCinco, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonSeis, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonSubstraccion, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(ButtonDos, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonTres, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonUno, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonMultiplicacion, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelPrincipalLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(ButtonComa, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonIgual, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonDivision, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonCero, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        MenuFile.setText("Exit");
        MenuFile.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                MenuFileMouseClicked(evt);
            }
        });
        MenuBar.add(MenuFile);

        setJMenuBar(MenuBar);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(PanelPrincipal, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(PanelPrincipal, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void ButtonUnoMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonUnoMousePressed
        WriteOnScreen("1", false);
    }//GEN-LAST:event_ButtonUnoMousePressed

    private void ButtonDosMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonDosMousePressed
        WriteOnScreen("2", false);
    }//GEN-LAST:event_ButtonDosMousePressed

    private void ButtonTresMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonTresMousePressed
        WriteOnScreen("3", false);
    }//GEN-LAST:event_ButtonTresMousePressed

    private void ButtonCuatroMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonCuatroMousePressed
        WriteOnScreen("4", false);
    }//GEN-LAST:event_ButtonCuatroMousePressed

    private void ButtonCincoMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonCincoMousePressed
        WriteOnScreen("5", false);
    }//GEN-LAST:event_ButtonCincoMousePressed

    private void ButtonSeisMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonSeisMousePressed
        WriteOnScreen("6", false);
    }//GEN-LAST:event_ButtonSeisMousePressed

    private void ButtonSieteMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonSieteMousePressed
        WriteOnScreen("7", false);
    }//GEN-LAST:event_ButtonSieteMousePressed

    private void ButtonOchoMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonOchoMousePressed
        WriteOnScreen("8", false);
    }//GEN-LAST:event_ButtonOchoMousePressed

    private void ButtonNueveMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonNueveMousePressed
        WriteOnScreen("9", false);
    }//GEN-LAST:event_ButtonNueveMousePressed

    private void ButtonCeroMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonCeroMousePressed
        WriteOnScreen("0", false);
    }//GEN-LAST:event_ButtonCeroMousePressed

    private void ButtonAdicionMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonAdicionMouseClicked
        PrimerOperando = Float.parseFloat(FieldPantalla.getText());
        Operador = Operacion.ADD;
        WriteOnScreen("+ ", true);
        ClearBeforeNext = true;
    }//GEN-LAST:event_ButtonAdicionMouseClicked

    private void ButtonSubstraccionMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonSubstraccionMouseClicked
        PrimerOperando = Float.parseFloat(FieldPantalla.getText());
        Operador = Operacion.SUB;
        WriteOnScreen("- ", true);
        ClearBeforeNext = true;
    }//GEN-LAST:event_ButtonSubstraccionMouseClicked

    private void ButtonMultiplicacionMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonMultiplicacionMouseClicked
        PrimerOperando = Float.parseFloat(FieldPantalla.getText());
        Operador = Operacion.MUL;
        WriteOnScreen("x ", true);
        ClearBeforeNext = true;
    }//GEN-LAST:event_ButtonMultiplicacionMouseClicked

    private void ButtonDivisionMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonDivisionMouseClicked
        PrimerOperando = Float.parseFloat(FieldPantalla.getText());
        Operador = Operacion.DIV;
        WriteOnScreen("÷ ", true);
        ClearBeforeNext = true;
    }//GEN-LAST:event_ButtonDivisionMouseClicked

    private void ButtonClear3MouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonClear3MouseClicked
        PrimerOperando = 0.0f;
        SegundoOperando = 0.0f;
        WriteOnScreen("", true);
    }//GEN-LAST:event_ButtonClear3MouseClicked

    private void ButtonIgualMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonIgualMouseClicked
        Float Resultado = 0.0f;
        String FResultado;
        SegundoOperando = Float.parseFloat(FieldPantalla.getText());
        
        switch(Operador) {
            case ADD -> { Resultado = PrimerOperando + SegundoOperando; }
            case SUB -> { Resultado = PrimerOperando - SegundoOperando; }
            case MUL -> { Resultado = PrimerOperando * SegundoOperando; }
            case DIV -> { Resultado = PrimerOperando / SegundoOperando; }
            case BLANK -> { }
        }
        
        if(Resultado % 1 == 0) { 
            FResultado = Resultado.toString(); 
            FResultado = FResultado.substring(0, FResultado.length() - 1);
        } else { FResultado = Resultado.toString(); }
        
        WriteOnScreen(Resultado.toString(), true);
        ClearBeforeNext = true;
        Operador = Operacion.BLANK;
    }//GEN-LAST:event_ButtonIgualMouseClicked

    private void ButtonSenMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonSenMouseClicked
        Operador = Operacion.SEN;
        WriteTrigResultOnScreen();
    }//GEN-LAST:event_ButtonSenMouseClicked

    private void ButtonCosMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonCosMouseClicked
        Operador = Operacion.COS;
        WriteTrigResultOnScreen();
    }//GEN-LAST:event_ButtonCosMouseClicked

    private void ButtonTanMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ButtonTanMouseClicked
        Operador = Operacion.TAN;
        WriteTrigResultOnScreen();
    }//GEN-LAST:event_ButtonTanMouseClicked

    private void MenuFileMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_MenuFileMouseClicked
        System.exit(0);
    }//GEN-LAST:event_MenuFileMouseClicked

    private void WriteTrigResultOnScreen() {
        Double Numero = Double.parseDouble(FieldPantalla.getText());
        Float Respuesta = 0.0f;
        
        switch(Operador) {
            case SEN -> { Respuesta = (float)Math.toRadians(Math.sin(Numero)); }
            case COS -> { Respuesta = (float)Math.toRadians(Math.cos(Numero)); }
            case TAN -> { Respuesta = (float)Math.toRadians(Math.tan(Numero)); }
        }
        Operador = Operacion.BLANK;
                
        WriteOnScreen(Respuesta.toString(), true);
        ClearBeforeNext = true;
    }
    
    private void WriteOnScreen(String Characters, boolean ClearFirst) {
        if(ClearFirst || ClearBeforeNext) { FieldPantalla.setText(""); }
        if(ClearBeforeNext) { ClearBeforeNext = false; }
        FieldPantalla.setText(FieldPantalla.getText() + Characters);
    }
    
    //TODO: sen, cos, tan
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
                if ("Windows".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Calculadora().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton ButtonAdicion;
    private javax.swing.JButton ButtonCero;
    private javax.swing.JButton ButtonCinco;
    private javax.swing.JButton ButtonClear3;
    private javax.swing.JButton ButtonComa;
    private javax.swing.JButton ButtonCos;
    private javax.swing.JButton ButtonCuatro;
    private javax.swing.JButton ButtonDivision;
    private javax.swing.JButton ButtonDos;
    private javax.swing.JButton ButtonIgual;
    private javax.swing.JButton ButtonMultiplicacion;
    private javax.swing.JButton ButtonNueve;
    private javax.swing.JButton ButtonOcho;
    private javax.swing.JButton ButtonSeis;
    private javax.swing.JButton ButtonSen;
    private javax.swing.JButton ButtonSiete;
    private javax.swing.JButton ButtonSubstraccion;
    private javax.swing.JButton ButtonTan;
    private javax.swing.JButton ButtonTres;
    private javax.swing.JButton ButtonUno;
    private javax.swing.JTextField FieldPantalla;
    private javax.swing.JMenuBar MenuBar;
    private javax.swing.JMenu MenuFile;
    private javax.swing.JPanel PanelPrincipal;
    // End of variables declaration//GEN-END:variables
}