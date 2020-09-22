<!DOCTYPE html>
<html lang="{{ str_replace('_', '-', app()->getLocale()) }}">
    <head>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">

        <title>Formulario de empresa</title>
		<style>
		
		</style>
		
	<head>
	<body>
		<h1>Pagina de registro a proyecto server búsqueda de empleo
		<section>
			<article>
				<form action="{{route('registro_empresario')}}" method="post">
				@csrf
					<input type="text" name="nombre" value="Nombre">
					<input type="text" name="apellido" value="1º Apellido">
					<input type="text" name="segundoApellido" value="2º Apellido">
					<input type="text" name="DNI" value="DNI">
					<label for="pwd">Contraseña:</label>
					<input type="password" id="pwd" name="pwd" minlength="8">										
					<input type="submit" value="Guardar cambios">
				</form>
			</article>			
		</section>		
	</body>	
</html>