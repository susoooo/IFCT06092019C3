/*
CREACION DEL REPOSITORIO
 */
package com.modelobasededatos.accessingdatamysql;


import org.springframework.data.repository.CrudRepository;
import com.modelobasededatos.accessingdatamysql.BDProductos;

// This will be AUTO IMPLEMENTED by Spring into a Bean called userRepository
// CRUD refers Create, Read, Update, Delete
public interface ProductosRepository extends CrudRepository<BDProductos, Integer>{}




