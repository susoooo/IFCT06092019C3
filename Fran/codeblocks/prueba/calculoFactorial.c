
float calculoFactorial(int num)
{
    int contador;
    float fact;

    fact = 1;

    for (contador = num; contador > 1; contador --)
	{
		fact = (float) (fact * contador);
	}

    return(fact);
}
