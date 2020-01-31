struct fecha
{
	int dia;
	int mes;
	int anio;
};

struct personas
{
    char activo;
	char nombre[15];
	char sexo[6];
	int altura;
	struct fecha fechaNacimiento;
	int edad;
	// float sueldo;
};
