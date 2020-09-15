<!DOCTYPE html>
<html lang="{{ str_replace('_', '-', app()->getLocale()) }}">
    <head>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">

        <title>Formulario de empresa</title>
		<style>
		.linea_empresa{
				color: silver;
				border-radius: 10px;
				width: 85%;				
				align: center;
				background-color: #000000;				
			}
		
		</style>
		
	<head>
	<body>	
		<section>
			<article>
				<form action="{{route('crear_oferta')}}" method="post">
				@csrf
					<input class="linea_empresa" list="empresas" name="nombre_de_empresa" id="seleccionEmpresa">					
						<datalist id="empresas">
						@foreach($tabla_empresa as $t_empresa)
							<option value="{{$t_empresa->nombre_de_empresa}}">
						@endforeach
						</datalist><br>
					
					
						@foreach($tabla_profesión as $t_oferta)
					
							<input type="radio" name="oferta" value="{{$t_oferta->profesion}}">{{$t_oferta->profesion}}
						
						@endforeach<br>
					
					
					<input list="jornadas" name="jornada" id="seleccionJornada">
						<datalist id="jornadas">
							<option value="Jornada completa">
							<option value="Jornada a tiempo parcial">
							<option value="Jornada parcial por horas">
							<option value="Jornada de trabajo reducida">
							<option value="Jornada de trabajo continua">
							<option value="Jornada nocturna">
							<option value="Contrato para festivos">
						</datalist>
					<input type="text" name="salario" value="salario">				
					<input type="text" name="horario" value="horario">					
					<input type="submit" value="Guardar cambios">					
				</form>
			</article>			
		</section>
	</body>
</html>