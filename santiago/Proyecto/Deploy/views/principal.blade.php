<!DOCTYPE html>
<html lang="{{ str_replace('_', '-', app()->getLocale()) }}">
    <head>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">

        <title>Buscador de empleo</title>
		<style>
			.button {
				border: none;
				color: black;
				background-color: #008CBA;
				padding: 5px;
				test-aling: center;
				display: inline-block;
				font-size: 16;
				margin: 4px 3px;
				cursor: pointer;
				border-radius: 10px;
			}
			
			.linea_empresa{
				border-radius: 10px;
				width: 85%;				
				align: center;
				background-color: #000000;				
			}
			
			.right {				
				margin: auto;
				position: absolute;
				right: 56px;
				width: 70px;
				top: 10px;
				float: right;				
				padding:5px;
				background-color: silver;
				border: 3px solid #73AD21;
				border-radius: 5px;
			}
			
			.salarioJH{
				margin: auto;
				position: absolute;
				right: 15.5%;
				width: 23%;
				border: 3px solid silver;
				padding:5px;
				background-color: silver;
				border-radius: 10px;
			}
			
			.body{
				background-color:#181221;
			}
			
		</style>
	</head>
	<body class="body">
		<section>	
			
				@foreach ($tablaEmpresa as $empresa)
					@foreach ($puesto as $oferta)
					<article class="linea_empresa">
						
						<article>
						
							<button class="salarioJH">Salario: {{$oferta->salario}}, {{$oferta->jornada}}, Horario: {{$oferta->horario}}</button>
							
						</article>
						
						<p class='button'>									
							{{$empresa->nombre_de_empresa}} {{$oferta->puesto}}
						</p>
						
					</article><br>
					@endforeach
				@endforeach
			
		</section>
		<aside>
			<a class="right " href="{{route('registro_empresario')}}"> Inicio sesión</a>
		</aside>
</html>