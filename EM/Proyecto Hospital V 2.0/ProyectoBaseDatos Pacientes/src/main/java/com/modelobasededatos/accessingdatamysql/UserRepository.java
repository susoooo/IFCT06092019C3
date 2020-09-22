
/*
CREACION DEL REPOSITORIO
 */
package com.modelobasededatos.accessingdatamysql;


import org.springframework.data.repository.CrudRepository;
import com.modelobasededatos.accessingdatamysql.BDPacientes;

// This will be AUTO IMPLEMENTED by Spring into a Bean called userRepository
// CRUD refers Create, Read, Update, Delete
public interface UserRepository extends CrudRepository<BDPacientes, Integer>{

    //public void save(BDPacientes n);
}
