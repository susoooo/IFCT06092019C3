package com.movaiva.proyecto.service;

import java.util.ArrayList;
import java.util.List;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.movaiva.proyecto.entity.Categoria;
import com.movaiva.proyecto.entity.Provincia;
import com.movaiva.proyecto.repository.ProvinciaRepository;

@Service
@Transactional
public class ProvinciaService {
	
	@Autowired
	private ProvinciaRepository provinciaRepository;

	public ProvinciaService(ProvinciaRepository provinciaRepository) {
		this.provinciaRepository = provinciaRepository;
	}
	
	public List<Provincia> findAll(){
		List<Provincia> provincias=new ArrayList<Provincia>();
		for (Provincia provincia:provinciaRepository.findAll()) {
			provincias.add(provincia);
		}
		return provincias;
	}
	
}
