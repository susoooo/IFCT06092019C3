<?php

use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;

class CreateEmpresaTable extends Migration
{
    /**
     * Run the migrations.
     *
     * @return void
     */
    public function up()
    {
        Schema::create('empresa', function (Blueprint $table) {
            $table->id();
			$table->biginteger('empresarioId');
			$table->boolean('alta');
			$table->string('nombre_de_empresa');
			$table->string('direccion');
			$table->string('lugar');
			$table->string('provincia');
            $table->string('email')->unique();
            $table->timestamp('email_verified_at')->nullable();
			$table->integer('numeroTelefono');
			$table->integer('segundoNTeléf');          
			$table->rememberToken();
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
        Schema::dropIfExists('empresa');
    }
}
