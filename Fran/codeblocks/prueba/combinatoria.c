extern float calculoFactorial(int num);

float combinatoria(int elementos, int grupo)
{
    float combinaciones;
    float numerador;
    float denominador;
    float denom2;

    numerador = calculoFactorial(elementos);
    denominador = calculoFactorial(grupo);
    denom2 = calculoFactorial(elementos - grupo);


    combinaciones = (float) (numerador / (denominador * denom2));

    return(combinaciones);
}
