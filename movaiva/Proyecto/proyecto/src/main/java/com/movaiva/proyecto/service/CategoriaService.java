package com.movaiva.proyecto.service;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.movaiva.proyecto.repository.CategoriaRepository;

@Service
@Transactional
public class CategoriaService {
	
	@Autowired
	private CategoriaRepository categoriaRepository;

	public CategoriaService(CategoriaRepository categoriaRepository) {
		this.categoriaRepository = categoriaRepository;
	}

}
