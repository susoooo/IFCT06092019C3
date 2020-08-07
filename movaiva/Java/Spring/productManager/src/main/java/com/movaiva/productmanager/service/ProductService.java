package com.movaiva.productmanager.service;

import java.util.ArrayList;
import java.util.List;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import com.movaiva.productmanager.repository.ProductRepository;
import com.movaiva.productmanager.entity.Product;

@Service
@Transactional
public class ProductService {
	
	@Autowired
	private final ProductRepository productRepository;

	public ProductService(ProductRepository productRepository) {
		this.productRepository = productRepository;
	}
	
	public List<Product> findAll(){
		List <Product> products=new ArrayList<>();
		for(Product product : productRepository.findAll()) {
			products.add(product);
		}
		return products;
	}
	
	

}
