/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.modelobasededatos.accessingdatamysql;

import org.springframework.data.repository.CrudRepository;
import com.modelobasededatos.accessingdatamysql.BDCitas;

// This will be AUTO IMPLEMENTED by Spring into a Bean called userRepository
// CRUD refers Create, Read, Update, Delete
public interface CitasRepository extends CrudRepository<BDCitas, Integer>{}

        //{
        //public void save(BDCitas n);

      //  }
