package com.movaiva.proyecto.service;

import java.util.ArrayList;
import java.util.List;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.movaiva.proyecto.entity.Categoria;
import com.movaiva.proyecto.repository.CategoriaRepository;

@Service
@Transactional
public class CategoriaService {
	
	@Autowired
	private CategoriaRepository categoriaRepository;

	public CategoriaService(CategoriaRepository categoriaRepository) {
		this.categoriaRepository = categoriaRepository;
	}
	
	public List<Categoria> findAll(){
		List<Categoria> categorias=new ArrayList<Categoria>();
		for (Categoria categoria:categoriaRepository.findAll()) {
			categorias.add(categoria);
		}
		return categorias;
	}

}
