/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.example.SpringRest07.rrc;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map.Entry;
import java.util.Set;

/**
 *
 * @author Usuario
 */
public class PriceList {
	
	private static HashMap<String, Float> price_list;
	
	
	public PriceList() { price_list = new HashMap<>(); }
	public PriceList(HashMap<String, Float> price_list) { this.price_list = price_list; }
	
	public boolean add(String product, Float price) {
		if (!price_list.containsKey(product)) { 
			price_list.put(product, price);
			return true;
		}
		
		return false;
	}
	public boolean change_price(String product, Float price) { 
		return price_list.replace(product, price) != null;
	}
	public boolean change_name(String current_name, String new_name) { 
		if(price_list.containsKey(current_name)) { 
			Float price = price_list.get(current_name);
			price_list.remove(current_name);
			price_list.put(new_name, price);
			return true;
		}
		
		return false;
	}
	public HashMap<String, Float> get(String product) { 
		HashMap<String, Float> response = new HashMap<>();
		
		if(price_list.containsKey(product)) { response.put(product, price_list.get(product)); }
		
		return response;
	}
	public HashMap<String, Float> get_all() { return price_list; }
	public Float get_price(String product) { return price_list.get(product); }
	public HashMap<String, Float> get_highest_priced() {
		HashMap<String, Float> response = new HashMap<>();
		String highest_product = "";
		Float highest_price = 0f;
		
		for(var i : price_list.entrySet()) {
			if(i.getValue() > highest_price) { 
				highest_product = i.getKey();
				highest_price = i.getValue();
			}
		}
		response.put(highest_product, highest_price);
		
		return response;
	}
	public HashMap<String, Float> get_lowest_priced() {
		HashMap<String, Float> response = new HashMap<>();
		Set<Entry<String, Float>> kill_me = price_list.entrySet();
		Entry<String, Float> kill_me_again = kill_me.iterator().next();
		String lowest_product = kill_me_again.getKey();
		Float lowest_price = kill_me_again.getValue();
		
		for(var i : kill_me) {
			if(i.getValue() < lowest_price) { 
				lowest_product = i.getKey();
				lowest_price = i.getValue();
			}
		}
		response.put(lowest_product, lowest_price);
		
		return response;
	}
	public Object get_median() {
		Object[] arr = price_list.entrySet().toArray();
		
		return arr[arr.length / 2];
	}
	
	public int size() { return price_list.size(); }
	public boolean contains_key(String product) { return price_list.containsKey(product); }
	
}