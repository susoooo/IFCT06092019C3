/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebas_programacion_java.calculadora;

/**
 *
 * @author Usuario
 */
public class Calcu extends javax.swing.JFrame {

    public float number[];
    public String Operation;
    
    
    public Calcu() {
        initComponents();
        setLocationRelativeTo(null);
        number = new float[2];
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        Bc = new javax.swing.JButton();
        Bdivision = new javax.swing.JButton();
        Bmultiplicación = new javax.swing.JButton();
        Brestar = new javax.swing.JButton();
        Bsiete = new javax.swing.JButton();
        Bocho = new javax.swing.JButton();
        Bnueve = new javax.swing.JButton();
        Bcuatro = new javax.swing.JButton();
        Bcinco = new javax.swing.JButton();
        Bseis = new javax.swing.JButton();
        Bsumar = new javax.swing.JButton();
        Buno = new javax.swing.JButton();
        Bdos = new javax.swing.JButton();
        Btres = new javax.swing.JButton();
        Bresultado = new javax.swing.JButton();
        Bcero = new javax.swing.JButton();
        Bcoma = new javax.swing.JButton();
        Tmcalcu = new javax.swing.JLabel();
        Tmscalcu = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Calcu++");

        jPanel1.setBackground(new java.awt.Color(0, 51, 153));

        Bc.setText("C");
        Bc.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BcMouseReleased(evt);
            }
        });

        Bdivision.setText("/");
        Bdivision.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BdivisionMouseReleased(evt);
            }
        });

        Bmultiplicación.setText("*");
        Bmultiplicación.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BmultiplicaciónMouseReleased(evt);
            }
        });

        Brestar.setText("-");
        Brestar.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BrestarMouseReleased(evt);
            }
        });

        Bsiete.setText("7");
        Bsiete.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BsieteMouseReleased(evt);
            }
        });

        Bocho.setText("8");
        Bocho.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BochoMouseReleased(evt);
            }
        });

        Bnueve.setText("9");
        Bnueve.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BnueveMouseReleased(evt);
            }
        });

        Bcuatro.setText("4");
        Bcuatro.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BcuatroMouseReleased(evt);
            }
        });

        Bcinco.setText("5");
        Bcinco.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BcincoMouseReleased(evt);
            }
        });

        Bseis.setText("6");
        Bseis.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BseisMouseReleased(evt);
            }
        });

        Bsumar.setText("+");
        Bsumar.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BsumarMouseReleased(evt);
            }
        });

        Buno.setText("1");
        Buno.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BunoMouseReleased(evt);
            }
        });

        Bdos.setText("2");
        Bdos.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BdosMouseReleased(evt);
            }
        });

        Btres.setText("3");
        Btres.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BtresMouseReleased(evt);
            }
        });

        Bresultado.setText("=");
        Bresultado.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BresultadoMouseReleased(evt);
            }
        });

        Bcero.setText("0");
        Bcero.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BceroMouseReleased(evt);
            }
        });

        Bcoma.setText(".");
        Bcoma.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseReleased(java.awt.event.MouseEvent evt) {
                BcomaMouseReleased(evt);
            }
        });

        Tmcalcu.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        Tmcalcu.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        Tmcalcu.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        Tmcalcu.setOpaque(true);

        Tmscalcu.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        Tmscalcu.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        Tmscalcu.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        Tmscalcu.setOpaque(true);

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Tmcalcu, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(Bc, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(Bdivision, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(Bmultiplicación, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(Brestar, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(jPanel1Layout.createSequentialGroup()
                                        .addComponent(Buno, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(Bdos, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(Btres, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addGroup(jPanel1Layout.createSequentialGroup()
                                        .addComponent(Bcero, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(Bcoma, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(Bresultado, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(jPanel1Layout.createSequentialGroup()
                                        .addComponent(Bsiete, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(Bocho, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(Bnueve, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addGroup(jPanel1Layout.createSequentialGroup()
                                        .addComponent(Bcuatro, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(Bcinco, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(Bseis, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(Bsumar, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(0, 56, Short.MAX_VALUE))
                    .addComponent(Tmscalcu, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap())
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(Tmscalcu, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(1, 1, 1)
                .addComponent(Tmcalcu, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(53, 53, 53)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Bc)
                    .addComponent(Bdivision)
                    .addComponent(Bmultiplicación)
                    .addComponent(Brestar))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(Bsiete)
                            .addComponent(Bocho)
                            .addComponent(Bnueve))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(Bcuatro)
                            .addComponent(Bcinco)
                            .addComponent(Bseis)))
                    .addComponent(Bsumar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(Buno)
                            .addComponent(Bdos)
                            .addComponent(Btres))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(Bcero)
                            .addComponent(Bcoma)))
                    .addComponent(Bresultado, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap(61, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 4, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void BceroMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BceroMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"0");
    }//GEN-LAST:event_BceroMouseReleased

    private void BunoMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BunoMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"1");
    }//GEN-LAST:event_BunoMouseReleased

    private void BdosMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BdosMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"2");
    }//GEN-LAST:event_BdosMouseReleased

    private void BtresMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BtresMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"3");   
    }//GEN-LAST:event_BtresMouseReleased

    private void BcuatroMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BcuatroMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"4");
    }//GEN-LAST:event_BcuatroMouseReleased

    private void BcincoMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BcincoMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"5");
    }//GEN-LAST:event_BcincoMouseReleased

    private void BseisMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BseisMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"6");
    }//GEN-LAST:event_BseisMouseReleased

    private void BsieteMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BsieteMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"7");
    }//GEN-LAST:event_BsieteMouseReleased

    private void BochoMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BochoMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"8");
    }//GEN-LAST:event_BochoMouseReleased

    private void BnueveMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BnueveMouseReleased
        Tmcalcu.setText(Tmcalcu.getText()+"9");
    }//GEN-LAST:event_BnueveMouseReleased

    private void BcMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BcMouseReleased
        Tmcalcu.setText("");
        Tmscalcu.setText("");
    }//GEN-LAST:event_BcMouseReleased

    private void BsumarMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BsumarMouseReleased
        number[0]=Float.parseFloat(Tmcalcu.getText());
        Operation="+";
        Tmcalcu.setText("");
    }//GEN-LAST:event_BsumarMouseReleased

    private void BresultadoMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BresultadoMouseReleased
        number[1]=Float.parseFloat(Tmcalcu.getText());
        float resultado = 0;
        String result;
        Tmscalcu.setText(Float.toString(number[0])+Operation+Float.toString(number[1]));
        
        switch (Operation){
            case "+": resultado=(number[0]+number[1]);
                break;
            
            case "-": resultado=(number[0]-number[1]);
                break;
                
            case "*": resultado=(number[0]*number[1]);
                break;
                
            case "/": if(number[1]==0){
                       Tmscalcu.setText("No se divide entre cero");
                       }                        
                    else {
                        resultado=(number[0]/number[1]);
                        }
                break;             
        }
        
        result=Float.toString(resultado);
        
        if(resultado%1==0){
            Tmcalcu.setText(result.substring(0, result.length()-2));
        }
        else{
              Tmcalcu.setText(result);
        }
    }//GEN-LAST:event_BresultadoMouseReleased

    private void BcomaMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BcomaMouseReleased
        if(!(Tmcalcu.getText().contains("."))){
            Tmcalcu.setText(Tmcalcu.getText()+".");
        }
    }//GEN-LAST:event_BcomaMouseReleased

    private void BrestarMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BrestarMouseReleased
        number[0]=Float.parseFloat(Tmcalcu.getText());
        Operation="-";
        Tmcalcu.setText("");
    }//GEN-LAST:event_BrestarMouseReleased

    private void BmultiplicaciónMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BmultiplicaciónMouseReleased
        number[0]=Float.parseFloat(Tmcalcu.getText());
        Operation="*";
        Tmcalcu.setText("");
    }//GEN-LAST:event_BmultiplicaciónMouseReleased

    private void BdivisionMouseReleased(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BdivisionMouseReleased
        number[0]=Float.parseFloat(Tmcalcu.getText());
        Operation="/";
        Tmcalcu.setText("");
    }//GEN-LAST:event_BdivisionMouseReleased
    
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
            java.util.logging.Logger.getLogger(Calcu.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Calcu.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Calcu.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Calcu.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Calcu().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton Bc;
    private javax.swing.JButton Bcero;
    private javax.swing.JButton Bcinco;
    private javax.swing.JButton Bcoma;
    private javax.swing.JButton Bcuatro;
    private javax.swing.JButton Bdivision;
    private javax.swing.JButton Bdos;
    private javax.swing.JButton Bmultiplicación;
    private javax.swing.JButton Bnueve;
    private javax.swing.JButton Bocho;
    private javax.swing.JButton Brestar;
    private javax.swing.JButton Bresultado;
    private javax.swing.JButton Bseis;
    private javax.swing.JButton Bsiete;
    private javax.swing.JButton Bsumar;
    private javax.swing.JButton Btres;
    private javax.swing.JButton Buno;
    private javax.swing.JLabel Tmcalcu;
    private javax.swing.JLabel Tmscalcu;
    private javax.swing.JPanel jPanel1;
    // End of variables declaration//GEN-END:variables
}
