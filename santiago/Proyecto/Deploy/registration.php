<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;
use App\Http\Controllers\Controller;
use Log;

class registration extends Controller
{
    //
	public function registro(){		
		
		return view('pagina_de_registro');
	}

	public function pagina_de_registro(Request $request){

			/*if($request->input('pwd')!=$request->input('pwd_confirmacion'))
				return view('pagina_de_registro',['pwd_c'=> 'Error contraseña']);
			*/
			$id = DB::table('empresario')->insertGetId([
			
				'alta' => 1,
				'nombre' => $request->input('nombre'),
				'apellido' => $request->input('apellido'),
				'segundoApellido' => $request->input('segundoApellido'),
				'DNI' => $request->input('DNI'),
				'password' => $request->input('pwd'),
				'created_at' => date_format(date_create(),'Y-m-d H:i:s'),
				'updated_at' => date_format(date_create(),'Y-m-d H:i:s'),
			]);

			return redirect()->action(
				'registration@mod_ofertas',['id' => $id]
			);
	}
	
	public function mod_ofertas($id){
		
		
		$empresario = DB::table('empresario')->find($id);
			 
				$nombres = DB::table('empresa')
					->where('empresarioId', $id)->get();


			if($nombres->isEmpty()){

				
				$nombres = [(object) array('nombre_de_empresa'=>'Nombre de empresa', 'id'=>NULL)];
				
				//Log::info("!!!!!!!!Logeando variable nombres cargada: " . print_r($nombres, true));
				
				};

			//Log::info("!!!!!!!!Logeando nombressssss: " . print_r($nombres, true));

			foreach ($nombres as $nombre){
				if(!is_null($nombre->id)){
					$oferta = DB::table('ofertas')
								->where('empresaId', $nombre->id)
								->get();

					if(is_null($oferta)){$oferta = [(object) array('puesto'=>'Puesto', 'salario'=>'0000', 'jornada'=>'Jornada', 'horario'=>'0000')];};				
				}else {$oferta = [(object) array('puesto'=>'Puesto', 'salario'=>'0000', 'jornada'=>'Jornada', 'horario'=>'0000')];};
			}
		return view('Modificacion_de_ofertas',['id'=>$id, 'titulo'=>$empresario->nombre, 'tablaEmpresa' => $nombres, 'puesto' => $oferta]);
		return redirect()->action(
				'registration@registrar_empresa',['id' => $id]
			);
	}

	public function registro_de_empresa(){
		
		
		return view('registro_de_empresa');
	}

	public function registrar_empresa(Request $request){

		$id=1;
		DB::table('empresa')->insert([

			'empresarioId' => $id,
			'alta' => 1,
			'nombre_de_empresa' => $request->input('nombre_de_empresa'),
			'direccion' => $request->input('direccion'),
			'lugar' => $request->input('lugar'),
			'provincia' => $request->input('provincia'),
			'email' => $request->input('email'),
			'email_verified_at'=> date_format(date_create(),'Y-m-d H:i:s'),
			'numeroTelefono' => $request->input('phone'),
			'segundoNTeléf' => $request->input('2phone'),
			'created_at' => date_format(date_create(),'Y-m-d H:i:s'),
			'updated_at' => date_format(date_create(),'Y-m-d H:i:s'),
		]);
		
		return redirect()->action(
			'registration@mod_ofertas',['id' => $id]
		);
	}


}
