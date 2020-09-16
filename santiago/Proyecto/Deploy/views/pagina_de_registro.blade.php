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
	
		<section>
			<article>
				<form action="/action_page.php" method="get">
					<input list="empresas" name="empresa" id="empresa">
						<datalist id="empresa">
							<option value="nombre de empresa de base de datos">
							<option value="nombre de la segunda empresa de base de datos">
						</datalist>
					<input type="submit">
				</form>
			</article>
			
			<article>				
				<form action="/action_page.php">
					<input type="text" name="fname" value="nombre"><br><br>
					<input type="text" name="lname" value="1º apellido"><br><br>
					<input type="text" name="surname" value="2º apellido"><br><br>
					<input type="text" name="dni" value="DNI"><br><br>
					<input type="text" name="password" value="Contraseña"><br><br>
					<input type="text" name="password_confirmation" value="Confirmación de contraseña"><br><br>
				</form>	
			</article>
		
		</section>
		<section>
		
		</section>
	</body>
	<aside>
		<button>Agregar empresa</button>
		<button>Eliminar empresa</button>
		<button strong>Guardar</button>
	</aside>
</html>