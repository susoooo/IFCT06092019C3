<?php

namespace App\Http\Controllers;

use Illuminate\Support\Facades\DB;
use Illuminate\Http\Request;
use Illuminate\Routing\Redirector;
use App\Http\Controllers\Controller;

class PageController extends Controller
{
    public function inicio(){
		
		//
		$EId = DB::table('ofertas')
			->value('empresaId');			
		
		$nombres = DB::table('empresa')
				->where('id', $EId)->get();
				
		$empleo = DB::table('ofertas')->get();
		
		return view('principal', ['tablaEmpresa' => $nombres, 'puesto' => $empleo]);
	}
		
	public function empresa(){

		/*en este controlador muestro los datos de las tablas*/
		$empresas = DB::table('empresa')->get();
		$ofertas = DB::table('profesiones')->get();
		
		return view('registro_de_oferta', ['tabla_empresa' => $empresas, 'tabla_profesión' => $ofertas]);		
	}
	
	public function crea_ofertas(Request $request){
		$id=1;
		/*en este controlador guardo la pagina en la tabla */
		
		$user= DB::table('empresa')						
			->where('nombre_de_empresa', $request->input('nombre_de_empresa'))
			->value('id');

		DB::table('ofertas')->insert([
		
			'empresaId' => $user,
			'alta' => 1,
			'puesto' => $request->input('oferta'),
			'jornada' => $request->input('jornada'),
			'salario' => $request->input('salario'),
			'horario' => $request->input('horario'),
			'created_at' => date_format(date_create(),'Y-m-d H:i:s'),
			'updated_at' => date_format(date_create(),'Y-m-d H:i:s'),
			
		]);
		return redirect()->action(
			'registration@mod_ofertas',['id' => $id]
		);
	}
}
