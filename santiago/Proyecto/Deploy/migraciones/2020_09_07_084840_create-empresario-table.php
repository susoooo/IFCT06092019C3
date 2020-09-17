<?php

use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;

class CreateEmpresarioTable extends Migration
{
    /**
     * Run the migrations.
     *
     * @return void
     */
    public function up()
    {
        Schema::create('empresario', function (Blueprint $table) {
            $table->id();
			$table->boolean('alta');
			$table->string('nombre');
			$table->string('apellido');
			$table->string('segundoApellido');
			$table->integer('DNI');
			$table->string('password');
            $table->timestamps();
        });
    }

    /**
     * Reverse the migrations.
     *
     * @return void
     */
    public function down()
    {
        Schema::dropIfExists('empresario');
    }
}