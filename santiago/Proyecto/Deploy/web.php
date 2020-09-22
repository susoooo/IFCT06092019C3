<?php

use Illuminate\Support\Facades\Route;

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/

Route::get('/', 'PageController@inicio');

Route::get('empresa', 'PageController@empresa');

Route::post('empresa', 'PageController@crea_ofertas')->name('crear_oferta');

Route::get('registro', 'registration@registro');

Route::post('registro', 'registration@pagina_de_registro')->name('registro_empresario');

Route::get('r_empresa', 'registration@registro_de_empresa');

Route::post('r_empresa', 'registration@registrar_empresa')->name('registro_empresa');

Route::get('oferta/{id}', 'registration@mod_ofertas');//este metodo para pasar la id es temporal.