package com.movaiva.productmanager.repository;

import java.util.List;

import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import com.movaiva.productmanager.entity.Product;

public interface ProductRepository extends CrudRepository<Product,Integer> {
	
	 @Query("select * from product p where p.name like %?1%")
	 public List<Product> findByName(String name);
	 @Query("update product set name=?1 where p.name=?2")
	 public void update(String newName,String name);
	 

}
