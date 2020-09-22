<!DOCTYPE html>
<html lang="{{ str_replace('_', '-', app()->getLocale()) }}">
    <head>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">

        <title>Registro de empresa</title>
		<style>
		
		</style>
	<head>
	<body>	
		<section>
			<form action="{{route('registro_empresa')}}" method="post">
			@csrf
				<input type="text" name="nombre_de_empresa" value="Nombre de Empresa">
				<input type="test" name="direccion" value="Dirección">
				<input type="test" name="lugar" value="Lugar">
				<input type="test" name="provincia" value="Provincia">
				<input type="email" name="email" id="email" value="E-mail"><br><br>
				<label for="phone">Numero de teléfono:</label><br>
				<input type="number" name="phone" maxlength="9"><br>
				<small>Format: 123456789</small><br><br>
				<label for="2phone">Segundo numero de teléfono:</label><br>
				<input type="number" name="2phone" maxlength="9"><br>
				<small>Format: 123 456 789</small><br><br>				
                <input type="submit" class="btn btn-primary" value="Guardar">
			</form>
		</section>
	</body>
</html>