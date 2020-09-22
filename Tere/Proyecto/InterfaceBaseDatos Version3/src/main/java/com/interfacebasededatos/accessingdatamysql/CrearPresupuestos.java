/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.interfacebasededatos.accessingdatamysql;

import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
//import javax.swing.JTable;
//import javax.swing.table.DefaultTableModel;
 


/**
 *
 * @author Usuario
 */
public class CrearPresupuestos extends javax.swing.JFrame {

   
    
    public CrearPresupuestos() {
        initComponents();
        
    }
    
    /*void mostrartabla(){
        DefaultTableModel modelo = new DefaultTableModel();
        modelo.addColumn("nombrefiscal");
        modelo.addColumn("nombrecomercial");
        modelo.addColumn("Direccion");
        modelo.addColumn("CP");
        modelo.addColumn("Ciudad");
        modelo.addColumn("DNI");
        Tabladatos.setModel(modelo);
        
        String sql = "SELCT * FROM bdclientes" ;
        
        
        String datos[] = new String[6];
            
        
    }*/
    

   
    
    
  
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jTabbedPane1 = new javax.swing.JTabbedPane();
        jPanel1DatosGenerales = new javax.swing.JPanel();
        jLabelNumero = new javax.swing.JLabel();
        jTextFieldNumero = new javax.swing.JTextField();
        jLabel1Fecha = new javax.swing.JLabel();
        jTextFieldFecha = new javax.swing.JTextField();
        jLabelNombreFiscal = new javax.swing.JLabel();
        jTextFieldNombreFiscal = new javax.swing.JTextField();
        jLabelDireccion = new javax.swing.JLabel();
        jTextFieldNombreComercial = new javax.swing.JTextField();
        jLabelCP = new javax.swing.JLabel();
        jLabelNIF = new javax.swing.JLabel();
        jTextFieldNIF = new javax.swing.JTextField();
        jLabelCondiciones = new javax.swing.JLabel();
        jSeparator2 = new javax.swing.JSeparator();
        jCheckBoxSinIVA = new javax.swing.JCheckBox();
        jCheckBoxRE = new javax.swing.JCheckBox();
        jButtonCancelar = new javax.swing.JButton();
        jButtonAceptar = new javax.swing.JButton();
        jLabelNombreComercial = new javax.swing.JLabel();
        jTextFieldDireccion = new javax.swing.JTextField();
        jTextFieldCPyCiudad = new javax.swing.JTextField();
        jCheckBoxPagado = new javax.swing.JCheckBox();
        jCheckBoxFacturado = new javax.swing.JCheckBox();
        jCheckBoxIRPF1 = new javax.swing.JCheckBox();
        jLabelCodigoProducto = new javax.swing.JLabel();
        jButtonBuscarCliente = new javax.swing.JButton();
        jScrollPane3 = new javax.swing.JScrollPane();
        tblDatos = new javax.swing.JTable();
        cboxFiltro = new javax.swing.JComboBox<>();
        txtValorBusqueda = new javax.swing.JTextField();
        btnBuscar = new javax.swing.JButton();
        jPanelDatosAdicionales = new javax.swing.JPanel();
        jLabelFormadePago = new javax.swing.JLabel();
        jSeparator1 = new javax.swing.JSeparator();
        jLabelMandato = new javax.swing.JLabel();
        jTextFieldMandato = new javax.swing.JTextField();
        jLabelObservaciones = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        jTextArea1 = new javax.swing.JTextArea();
        jButtonAceptar1 = new javax.swing.JButton();
        jButtonCancelar1 = new javax.swing.JButton();
        jSeparator4 = new javax.swing.JSeparator();
        jLabelIBAN1 = new javax.swing.JLabel();
        jTextFieldIBAN1 = new javax.swing.JTextField();
        jTextFieldIBIC = new javax.swing.JTextField();
        jPanel3Documentos = new javax.swing.JPanel();
        BotonCrear = new javax.swing.JButton();
        BotonModificar = new javax.swing.JButton();
        BotonEliminar = new javax.swing.JButton();
        BotonCopiar = new javax.swing.JButton();
        BotonBuscar = new javax.swing.JButton();
        jTextField1 = new javax.swing.JTextField();
        jButtonAceptar2 = new javax.swing.JButton();
        jButtonCancelar2 = new javax.swing.JButton();
        jTextFieldInformacionTabla = new javax.swing.JTextField();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Presupuestos >> Crear");
        setIconImages(null);
        setMaximizedBounds(new java.awt.Rectangle(605, 400, 0, 0));
        setSize(new java.awt.Dimension(600, 400));

        jLabelNumero.setText("Número:");

        jTextFieldNumero.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextFieldNumeroActionPerformed(evt);
            }
        });

        jLabel1Fecha.setText("Fecha:");

        jLabelNombreFiscal.setText("Nombre fiscal:");

        jTextFieldNombreFiscal.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextFieldNombreFiscalActionPerformed(evt);
            }
        });

        jLabelDireccion.setText("Dirección:");

        jTextFieldNombreComercial.setEditable(false);

        jLabelCP.setText("CP y Ciudad:");

        jLabelNIF.setText("NIF:");

        jTextFieldNIF.setEditable(false);
        jTextFieldNIF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextFieldNIFActionPerformed(evt);
            }
        });

        jLabelCondiciones.setText("Condiciones");

        jCheckBoxSinIVA.setText("Sin IVA");
        jCheckBoxSinIVA.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jCheckBoxSinIVAActionPerformed(evt);
            }
        });

        jCheckBoxRE.setText("RE");

        jButtonCancelar.setText("Cancelar");
        jButtonCancelar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCancelarActionPerformed(evt);
            }
        });

        jButtonAceptar.setText("Aceptar");
        jButtonAceptar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonAceptarActionPerformed(evt);
            }
        });

        jLabelNombreComercial.setText("Nombre comercial:");

        jTextFieldDireccion.setEditable(false);
        jTextFieldDireccion.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextFieldDireccionActionPerformed(evt);
            }
        });

        jTextFieldCPyCiudad.setEditable(false);

        jCheckBoxPagado.setText("Pagado");
        jCheckBoxPagado.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jCheckBoxPagadoActionPerformed(evt);
            }
        });

        jCheckBoxFacturado.setText("Facturado");
        jCheckBoxFacturado.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jCheckBoxFacturadoActionPerformed(evt);
            }
        });

        jCheckBoxIRPF1.setText("IRPF");
        jCheckBoxIRPF1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jCheckBoxIRPF1ActionPerformed(evt);
            }
        });

        jLabelCodigoProducto.setText("Buscar producto por:");

        jButtonBuscarCliente.setText("..");
        jButtonBuscarCliente.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonBuscarClienteActionPerformed(evt);
            }
        });

        tblDatos.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Código", "Nombre", "Cantidad", "Precio", "Descuento", "IVA", "Importe"
            }
        ));
        jScrollPane3.setViewportView(tblDatos);

        cboxFiltro.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Seleccionar", "Código", "Nombre", " ", " " }));
        cboxFiltro.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                cboxFiltroActionPerformed(evt);
            }
        });

        btnBuscar.setText("Buscar");
        btnBuscar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnBuscarActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1DatosGeneralesLayout = new javax.swing.GroupLayout(jPanel1DatosGenerales);
        jPanel1DatosGenerales.setLayout(jPanel1DatosGeneralesLayout);
        jPanel1DatosGeneralesLayout.setHorizontalGroup(
            jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(jLabelCondiciones)
                            .addComponent(jCheckBoxSinIVA))
                        .addGap(21, 21, 21)
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                                .addComponent(jSeparator2, javax.swing.GroupLayout.PREFERRED_SIZE, 262, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(121, 121, 121)
                                .addComponent(jTextFieldNombreComercial, javax.swing.GroupLayout.PREFERRED_SIZE, 217, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(0, 0, Short.MAX_VALUE))
                            .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                                .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                                        .addComponent(jCheckBoxIRPF1)
                                        .addGap(29, 29, 29)
                                        .addComponent(jCheckBoxFacturado)
                                        .addGap(0, 0, Short.MAX_VALUE))
                                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1DatosGeneralesLayout.createSequentialGroup()
                                        .addGap(0, 0, Short.MAX_VALUE)
                                        .addComponent(jLabelNIF, javax.swing.GroupLayout.PREFERRED_SIZE, 96, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jTextFieldNIF, javax.swing.GroupLayout.PREFERRED_SIZE, 217, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(19, 19, 19))
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1DatosGeneralesLayout.createSequentialGroup()
                                .addGap(0, 0, Short.MAX_VALUE)
                                .addComponent(jButtonAceptar, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(47, 47, 47)
                                .addComponent(jButtonCancelar, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(489, 489, 489))))
                    .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                                .addComponent(jLabelNumero, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(18, 18, 18)
                                .addComponent(jTextFieldNumero, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(28, 28, 28)
                                .addComponent(jLabel1Fecha, javax.swing.GroupLayout.PREFERRED_SIZE, 64, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jTextFieldFecha, javax.swing.GroupLayout.PREFERRED_SIZE, 103, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(18, 18, 18)
                                .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(jLabelNombreComercial, javax.swing.GroupLayout.PREFERRED_SIZE, 96, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(jLabelNombreFiscal, javax.swing.GroupLayout.PREFERRED_SIZE, 96, javax.swing.GroupLayout.PREFERRED_SIZE)))
                            .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                                .addComponent(jCheckBoxPagado)
                                .addGap(18, 18, 18)
                                .addComponent(jCheckBoxRE, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(199, 199, 199)
                                .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(jLabelCP, javax.swing.GroupLayout.PREFERRED_SIZE, 83, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(jLabelDireccion, javax.swing.GroupLayout.PREFERRED_SIZE, 96, javax.swing.GroupLayout.PREFERRED_SIZE))))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jTextFieldDireccion, javax.swing.GroupLayout.PREFERRED_SIZE, 217, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jTextFieldCPyCiudad, javax.swing.GroupLayout.PREFERRED_SIZE, 217, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                                .addComponent(jTextFieldNombreFiscal, javax.swing.GroupLayout.PREFERRED_SIZE, 179, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jButtonBuscarCliente, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addComponent(jScrollPane3)
                        .addContainerGap())
                    .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addGap(4, 4, 4)
                        .addComponent(jLabelCodigoProducto, javax.swing.GroupLayout.PREFERRED_SIZE, 109, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(cboxFiltro, javax.swing.GroupLayout.PREFERRED_SIZE, 112, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(txtValorBusqueda, javax.swing.GroupLayout.PREFERRED_SIZE, 260, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnBuscar)
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
        );
        jPanel1DatosGeneralesLayout.setVerticalGroup(
            jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                .addGap(28, 28, 28)
                .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelNumero)
                    .addComponent(jTextFieldNumero, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1Fecha)
                    .addComponent(jTextFieldFecha, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelNombreFiscal)
                    .addComponent(jTextFieldNombreFiscal, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButtonBuscarCliente))
                .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabelNombreComercial)
                            .addComponent(jLabelCondiciones)
                            .addComponent(jTextFieldNombreComercial, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addGap(16, 16, 16)
                        .addComponent(jSeparator2, javax.swing.GroupLayout.PREFERRED_SIZE, 13, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addGap(6, 6, 6)
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabelDireccion)
                            .addComponent(jTextFieldDireccion, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabelCP)
                            .addComponent(jTextFieldCPyCiudad, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabelNIF)
                            .addComponent(jTextFieldNIF, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addGap(13, 13, 13)
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jCheckBoxSinIVA)
                            .addComponent(jCheckBoxFacturado)
                            .addComponent(jCheckBoxIRPF1))
                        .addGap(9, 9, 9)
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jCheckBoxPagado)
                            .addComponent(jCheckBoxRE))))
                .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addGap(52, 52, 52)
                        .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabelCodigoProducto)
                            .addComponent(cboxFiltro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(txtValorBusqueda, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1DatosGeneralesLayout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnBuscar)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jScrollPane3, javax.swing.GroupLayout.PREFERRED_SIZE, 211, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 27, Short.MAX_VALUE)
                .addGroup(jPanel1DatosGeneralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButtonCancelar)
                    .addComponent(jButtonAceptar))
                .addContainerGap())
        );

        jTabbedPane1.addTab("Datos generales", jPanel1DatosGenerales);

        jLabelFormadePago.setText("forma de pago");

        jLabelMandato.setText("Modo:");

        jLabelObservaciones.setText("Observaciones:");

        jTextArea1.setColumns(20);
        jTextArea1.setRows(5);
        jScrollPane1.setViewportView(jTextArea1);

        jButtonAceptar1.setText("Aceptar");

        jButtonCancelar1.setText("Cancelar");
        jButtonCancelar1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCancelar1ActionPerformed(evt);
            }
        });

        jLabelIBAN1.setText("IBAN / BIC:");

        javax.swing.GroupLayout jPanelDatosAdicionalesLayout = new javax.swing.GroupLayout(jPanelDatosAdicionales);
        jPanelDatosAdicionales.setLayout(jPanelDatosAdicionalesLayout);
        jPanelDatosAdicionalesLayout.setHorizontalGroup(
            jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                .addGap(19, 19, 19)
                .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                        .addComponent(jLabelObservaciones)
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanelDatosAdicionalesLayout.createSequentialGroup()
                        .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                                .addGap(15, 15, 15)
                                .addComponent(jLabelFormadePago, javax.swing.GroupLayout.PREFERRED_SIZE, 119, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jSeparator1))
                            .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                                .addGap(0, 0, Short.MAX_VALUE)
                                .addComponent(jButtonAceptar1, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jButtonCancelar1, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(144, 144, 144))
                    .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                        .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                                .addGap(15, 15, 15)
                                .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(jLabelIBAN1, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(jLabelMandato))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                                        .addComponent(jTextFieldIBAN1, javax.swing.GroupLayout.PREFERRED_SIZE, 139, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(jTextFieldIBIC, javax.swing.GroupLayout.PREFERRED_SIZE, 91, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addComponent(jTextFieldMandato)))
                            .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 582, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addContainerGap(257, Short.MAX_VALUE))))
            .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                    .addGap(23, 23, 23)
                    .addComponent(jSeparator4, javax.swing.GroupLayout.PREFERRED_SIZE, 592, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
        );
        jPanelDatosAdicionalesLayout.setVerticalGroup(
            jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jSeparator1, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelFormadePago))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jTextFieldMandato, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelMandato))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabelIBAN1)
                    .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(jTextFieldIBAN1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(jTextFieldIBIC, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(81, 81, 81)
                .addComponent(jLabelObservaciones)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButtonCancelar1)
                    .addComponent(jButtonAceptar1))
                .addContainerGap(173, Short.MAX_VALUE))
            .addGroup(jPanelDatosAdicionalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(jPanelDatosAdicionalesLayout.createSequentialGroup()
                    .addGap(180, 180, 180)
                    .addComponent(jSeparator4, javax.swing.GroupLayout.PREFERRED_SIZE, 9, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addContainerGap(319, Short.MAX_VALUE)))
        );

        jTabbedPane1.addTab("Datos adicionales", jPanelDatosAdicionales);

        BotonCrear.setText("Crear");
        BotonCrear.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BotonCrearActionPerformed(evt);
            }
        });

        BotonModificar.setText("Modificar");

        BotonEliminar.setText("Eliminar");

        BotonCopiar.setText("Copiar");

        BotonBuscar.setText("Buscar");

        jTextField1.setText("Buscar...");

        jButtonAceptar2.setText("Aceptar");

        jButtonCancelar2.setText("Cancelar");
        jButtonCancelar2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCancelar2ActionPerformed(evt);
            }
        });

        jTextFieldInformacionTabla.setText("Datos Tabla");

        javax.swing.GroupLayout jPanel3DocumentosLayout = new javax.swing.GroupLayout(jPanel3Documentos);
        jPanel3Documentos.setLayout(jPanel3DocumentosLayout);
        jPanel3DocumentosLayout.setHorizontalGroup(
            jPanel3DocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3DocumentosLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel3DocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                    .addComponent(jTextFieldInformacionTabla, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 583, Short.MAX_VALUE)
                    .addGroup(jPanel3DocumentosLayout.createSequentialGroup()
                        .addComponent(jButtonAceptar2, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(jButtonCancelar2, javax.swing.GroupLayout.PREFERRED_SIZE, 116, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(jTextField1, javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanel3DocumentosLayout.createSequentialGroup()
                        .addComponent(BotonCrear)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(BotonModificar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(BotonEliminar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(BotonCopiar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(BotonBuscar)))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel3DocumentosLayout.setVerticalGroup(
            jPanel3DocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3DocumentosLayout.createSequentialGroup()
                .addGap(21, 21, 21)
                .addGroup(jPanel3DocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(BotonCrear, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(BotonEliminar, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(BotonCopiar, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(BotonBuscar, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(BotonModificar, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jTextField1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jTextFieldInformacionTabla, javax.swing.GroupLayout.DEFAULT_SIZE, 361, Short.MAX_VALUE)
                .addGap(18, 18, 18)
                .addGroup(jPanel3DocumentosLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButtonCancelar2)
                    .addComponent(jButtonAceptar2))
                .addContainerGap())
        );

        jTabbedPane1.addTab("Documentos", jPanel3Documentos);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jTabbedPane1)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jTabbedPane1)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void BotonCrearActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BotonCrearActionPerformed
        CrearPresupuestos crear = new CrearPresupuestos();
        crear.setVisible(true);
    }//GEN-LAST:event_BotonCrearActionPerformed

    private void jCheckBoxIRPF1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jCheckBoxIRPF1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jCheckBoxIRPF1ActionPerformed

    private void jCheckBoxFacturadoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jCheckBoxFacturadoActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jCheckBoxFacturadoActionPerformed

    private void jCheckBoxPagadoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jCheckBoxPagadoActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jCheckBoxPagadoActionPerformed

    private void jButtonAceptarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonAceptarActionPerformed
        try {
            String command = "curl localhost:8080/demo/add -d IdNumeroPresupuesto=" + jTextFieldNumero.getText();
            command = command + " -d fecha=" + jTextFieldFecha.getText();
            command = command + " -d nombrefiscal=" + jTextFieldNombreFiscal.getText();
            command = command + " -d sinIVA=" + jCheckBoxSinIVA.isSelected();
            command = command + " -d IRPF=" + jCheckBoxIRPF1.isSelected();
            command = command + " -d facturado=" + jCheckBoxFacturado.isSelected();
            command = command + " -d pagado=" + jCheckBoxPagado.isSelected();
            command = command + " -d RE=" + jCheckBoxRE.isSelected();
            

            Process process = Runtime.getRuntime().exec(command);
            process.getInputStream();
            // TODO add your handling code here:
        } catch (IOException ex) {
            Logger.getLogger(CrearPresupuestos.class.getName()).log(Level.SEVERE, null, ex);
        }

        dispose();
    }//GEN-LAST:event_jButtonAceptarActionPerformed

    private void jButtonCancelarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCancelarActionPerformed

     
        dispose();

    }//GEN-LAST:event_jButtonCancelarActionPerformed

    private void jCheckBoxSinIVAActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jCheckBoxSinIVAActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jCheckBoxSinIVAActionPerformed

    private void jTextFieldNombreFiscalActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextFieldNombreFiscalActionPerformed
       
        

    }//GEN-LAST:event_jTextFieldNombreFiscalActionPerformed

    private void jTextFieldNumeroActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextFieldNumeroActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextFieldNumeroActionPerformed

    private void jButtonBuscarClienteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonBuscarClienteActionPerformed
        
        dispose(); 
        
        BuscarCliente buscarclient = new BuscarCliente();
        buscarclient.setVisible(true);
    }//GEN-LAST:event_jButtonBuscarClienteActionPerformed

    private void jTextFieldDireccionActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextFieldDireccionActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextFieldDireccionActionPerformed

    private void jTextFieldNIFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextFieldNIFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextFieldNIFActionPerformed

    private void jButtonCancelar1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCancelar1ActionPerformed
        dispose();
    }//GEN-LAST:event_jButtonCancelar1ActionPerformed

    private void jButtonCancelar2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCancelar2ActionPerformed
       dispose();
    }//GEN-LAST:event_jButtonCancelar2ActionPerformed

    private void cboxFiltroActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cboxFiltroActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_cboxFiltroActionPerformed

    private void btnBuscarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnBuscarActionPerformed
        
    }//GEN-LAST:event_btnBuscarActionPerformed

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
            java.util.logging.Logger.getLogger(CrearPresupuestos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(CrearPresupuestos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(CrearPresupuestos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(CrearPresupuestos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new CrearPresupuestos().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton BotonBuscar;
    private javax.swing.JButton BotonCopiar;
    private javax.swing.JButton BotonCrear;
    private javax.swing.JButton BotonEliminar;
    private javax.swing.JButton BotonModificar;
    private javax.swing.JButton btnBuscar;
    private javax.swing.JComboBox<String> cboxFiltro;
    private javax.swing.JButton jButtonAceptar;
    private javax.swing.JButton jButtonAceptar1;
    private javax.swing.JButton jButtonAceptar2;
    private javax.swing.JButton jButtonBuscarCliente;
    private javax.swing.JButton jButtonCancelar;
    private javax.swing.JButton jButtonCancelar1;
    private javax.swing.JButton jButtonCancelar2;
    private javax.swing.JCheckBox jCheckBoxFacturado;
    private javax.swing.JCheckBox jCheckBoxIRPF1;
    private javax.swing.JCheckBox jCheckBoxPagado;
    private javax.swing.JCheckBox jCheckBoxRE;
    private javax.swing.JCheckBox jCheckBoxSinIVA;
    private javax.swing.JLabel jLabel1Fecha;
    private javax.swing.JLabel jLabelCP;
    private javax.swing.JLabel jLabelCodigoProducto;
    private javax.swing.JLabel jLabelCondiciones;
    private javax.swing.JLabel jLabelDireccion;
    private javax.swing.JLabel jLabelFormadePago;
    private javax.swing.JLabel jLabelIBAN1;
    private javax.swing.JLabel jLabelMandato;
    private javax.swing.JLabel jLabelNIF;
    private javax.swing.JLabel jLabelNombreComercial;
    private javax.swing.JLabel jLabelNombreFiscal;
    private javax.swing.JLabel jLabelNumero;
    private javax.swing.JLabel jLabelObservaciones;
    private javax.swing.JPanel jPanel1DatosGenerales;
    private javax.swing.JPanel jPanel3Documentos;
    private javax.swing.JPanel jPanelDatosAdicionales;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane3;
    private javax.swing.JSeparator jSeparator1;
    private javax.swing.JSeparator jSeparator2;
    private javax.swing.JSeparator jSeparator4;
    private javax.swing.JTabbedPane jTabbedPane1;
    private javax.swing.JTextArea jTextArea1;
    private javax.swing.JTextField jTextField1;
    public static javax.swing.JTextField jTextFieldCPyCiudad;
    public static javax.swing.JTextField jTextFieldDireccion;
    private javax.swing.JTextField jTextFieldFecha;
    private javax.swing.JTextField jTextFieldIBAN1;
    private javax.swing.JTextField jTextFieldIBIC;
    private javax.swing.JTextField jTextFieldInformacionTabla;
    private javax.swing.JTextField jTextFieldMandato;
    public static javax.swing.JTextField jTextFieldNIF;
    public static javax.swing.JTextField jTextFieldNombreComercial;
    public static javax.swing.JTextField jTextFieldNombreFiscal;
    private javax.swing.JTextField jTextFieldNumero;
    private javax.swing.JTable tblDatos;
    private javax.swing.JTextField txtValorBusqueda;
    // End of variables declaration//GEN-END:variables

    
}
