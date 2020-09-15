<?php

use Illuminate\Database\Seeder;

class DatabaseSeeder extends Seeder
{
    /**
     * Seed the application's database.
     *
     * @return void
     */
    public function run()
    {
        // $this->call(UserSeeder::class);
		DB::table('empresa')->insert([
			'empresarioId' => random_int(0,10),
			'alta' => true,
            'nombre_de_empresa' => Str::random(10),
			'direccion' => Str::random(10),
			'lugar' => Str::random(10),
			'provincia' => Str::random(10),
            'email' => Str::random(10).'@gmail.com',
			'numeroTelefono' => random_int(100000000,999999999),
			'segundoNTeléf' => random_int(100000000,999999999),
        ]);		
    }
}
