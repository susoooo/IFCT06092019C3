

/*
CREACION DEL REPOSITORIO
 */
package com.modelobasededatos.accessingdatamysql;


import org.springframework.data.repository.CrudRepository;
import com.modelobasededatos.accessingdatamysql.BDClientes;

// This will be AUTO IMPLEMENTED by Spring into a Bean called userRepository
// CRUD refers Create, Read, Update, Delete
public interface UserRepository extends CrudRepository<BDClientes, Integer>{}


