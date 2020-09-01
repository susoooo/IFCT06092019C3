package com.movaiva.productmanager.repository;

import java.util.List;
import java.util.Optional;

import org.springframework.data.jpa.repository.Modifying;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import com.movaiva.productmanager.entity.Product;

public interface ProductRepository extends CrudRepository<Product,Integer> {
	
	@Query("select p from Product p where p.name like %:name%")
	public List<Product> findByName(String name);
	@Query("select p from Product p where p.id=:id")
	public Optional<Product> findById(Integer id);
	@Modifying
	@Query("update Product p set p.name=:name, p.prize=:prize where p.id=:id")
	public void update(Integer id, String name, Double prize);
	 

}
