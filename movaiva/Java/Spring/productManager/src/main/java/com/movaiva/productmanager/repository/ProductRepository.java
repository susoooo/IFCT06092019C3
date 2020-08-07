package com.movaiva.productmanager.repository;

import org.springframework.data.repository.CrudRepository;

import com.movaiva.productmanager.entity.Product;

public interface ProductRepository extends CrudRepository<Product,Integer> {

}
