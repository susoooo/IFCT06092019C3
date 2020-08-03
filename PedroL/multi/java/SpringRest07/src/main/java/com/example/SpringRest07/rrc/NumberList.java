/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.SpringRest07.rrc;

import java.util.Vector;

/**
 *
 * @author Usuario
 */
public class NumberList {
	
	private static Vector<Integer> number_list;
	
	public NumberList() { number_list = new Vector<>(); }
	public NumberList(Vector<Integer> number_list) { this.number_list = number_list; }
	
	public void add(Integer new_num) { number_list.add(new_num); }
	public Integer remove_last() { return number_list.remove(number_list.size() - 1);	}
	public Integer get_last() { return number_list.lastElement(); }
	public Object[] get_all() { return number_list.toArray(); }
	public int size() { return number_list.size(); }
	
}
