/*
Guarda info de ingredientes, bases y precios
 */
package com.gozerelgozeriano.pizzeria;

import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.Scanner;

/**
 *
 * @author gozerelgozeriano
 */
public class Pizzainfo {
    private final String BASESFILE="/bases.c";
    private final String INGREDIENTESFILE="/ingredientes.c";
    private final String DESCUENTOSFILE="/descuentos.c";
    private String[] BASES;
    private double[] BASEPRIZE;
    private String[] INGREDIENTES;
    private double[] INGREDIENTESPRIZE;
    private double[] DESCUENTOS;
    
    private static int countLines(String fileName) {
        int lines = 0;
        try (InputStream is = new BufferedInputStream(new FileInputStream(fileName))) {
            byte[] c = new byte[1024];
            int count = 0;
            int readChars = 0;
            boolean endsWithoutNewLine = false;
            while ((readChars = is.read(c)) != -1) {
                for (int i = 0; i < readChars; ++i) {
                    if (c[i] == '\n')
                        ++count;
                }
                endsWithoutNewLine = (c[readChars - 1] != '\n');
            }
            if (endsWithoutNewLine) {
                ++count;
            }
            lines = count;
        } catch (IOException e) {
            e.printStackTrace();
        }

        return lines;
    }
    
    public void Load(){
        String[] arrprize = new String[2];
        String basepath = MainClass.class.getResource(BASESFILE).getPath().replaceFirst("/", "");
        String ingrpath = MainClass.class.getResource(INGREDIENTESFILE).getPath().replaceFirst("/", "");
        String descpath = MainClass.class.getResource(DESCUENTOSFILE).getPath().replaceFirst("/", "");
        int basescount = countLines(basepath);
        int ingrcount = countLines(ingrpath);
        int desccount = countLines(descpath);
        BASES = new String[basescount];
        BASEPRIZE = new double[basescount];
        INGREDIENTES = new String[ingrcount];
        INGREDIENTESPRIZE = new double[ingrcount];
        DESCUENTOS = new double[desccount];
        Scanner myReader;
        File file;
        
        try {
            file = new File(basepath);
            myReader = new Scanner(file);
            for(int i = 0; i<basescount;i++){
                String data = myReader.nextLine();
                arrprize = data.split("#");
                BASES[i]=arrprize[0];
                BASEPRIZE[i]=Double.parseDouble(arrprize[1]);
            }
            myReader.close();
        } catch (FileNotFoundException e) {
            System.out.println("An error occurred.");
        }
        
        try {
            file = new File(ingrpath);
            myReader = new Scanner(file);
            for(int i = 0; i<ingrcount;i++){
                String data = myReader.nextLine();
                arrprize = data.split("#");
                INGREDIENTES[i]=arrprize[0];
                INGREDIENTESPRIZE[i]=Double.parseDouble(arrprize[1]);
            }
            myReader.close();
        } catch (FileNotFoundException e) {
            System.out.println("An error occurred.");
        }
        
        try {
            file = new File(descpath);
            myReader = new Scanner(file);
            for(int i = 0; i<desccount;i++){
                String data = myReader.nextLine();
                System.out.println(Double.parseDouble(data));
                DESCUENTOS[i]=Double.parseDouble(data);
            }
            myReader.close();
        } catch (FileNotFoundException e) {
            System.out.println("An error occurred.");
        }
        
    }

    /**
     *
     * @return list of bases
     */
    public String[] getbases(){
        return(BASES);
    }
    
    public String[] getingr(){
        return(INGREDIENTES);
    }
    
    public double getbaseprizes(int base){
        return(BASEPRIZE[base]);
    }
    
    public double getingrprizes(int ingr){
        return(INGREDIENTESPRIZE[ingr]);
    }
    
    public double[] getdescuentos(){
        return(DESCUENTOS);
    }
    
    public double getdescuento(int desc){
        return(DESCUENTOS[desc]);
    }
    
    
}
