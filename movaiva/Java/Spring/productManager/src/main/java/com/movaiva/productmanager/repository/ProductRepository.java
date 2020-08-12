package com.movaiva.productmanager.repository;

import java.util.List;

import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import com.movaiva.productmanager.entity.Product;

public interface ProductRepository extends CrudRepository<Product,Integer> {
	
	@Modifying 
	@Query("select p from Product p where p.name like %:name%")
	public List<Product> findByName(String name);
	@Modifying
	@Query("update Product p set p.name=:newName where p.name=:name")
	public void update(String newName,String name);
	 

}
