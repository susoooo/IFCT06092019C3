/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.spring07_2;


/**
 *
 * @author Usuario
 */
public class Greeting {
        private final int longitud;
        private final int caracteres;
        private final int letras;
        private final int numeros;
	private final String content;

	public Greeting(int lon,int car, int let, int num, String content) {
		this.longitud=lon;
                this.caracteres=car;
                this.letras=let;
                this.numeros=num;
		this.content = content;
	}

	public int getLon() {
		return longitud;
	}
        public int getCar() {
		return caracteres;
	}
        public int getLet() {
		return letras;
	}
        public int getNum() {
		return numeros;
	}

	public String getContent() {
		return content;
	}
}