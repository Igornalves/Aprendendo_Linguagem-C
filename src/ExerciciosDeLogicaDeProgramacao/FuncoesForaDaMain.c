#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float soma(float a, float b)
{

    float resultado;
    resultado = a + b;
    return resultado;
}

float subtracao(float a, float b)
{

    float resultado;
    resultado = a - b;
    return resultado;
}

float multiplicacao(float a, float b)
{

    float resultado;
    resultado = a * b;
    return resultado;
}

float divisao(float a, float b)
{

    float resultado;
    resultado = a / b;
    return resultado;
}

int main()
{

    system("color B0");

    float a = 10.3;
    float b = 12.5;

    float s;
    s = soma(a, b);

    float g;
    g = subtracao(a, b);

    float d;
    d = multiplicacao(a, b);

    float t;
    t = divisao(a, b);

    printf("\n");

    printf("                   a soma de %f com %f e igual a %f \n", a, b, s);

    printf("\n");

    printf("                   a subtracao de %f com %f e igual a %f \n", a, b, g);

    printf("\n");

    printf("                   a multiplicacao de %f com %f e igual a %f \n", a, b, d);

    printf("\n");

    printf("                   a divisao de %f com %f e igual a %f \n\n", a, b, t);

    printf("                                 fim do programa \n \n ");
    printf("                     ");
    system("pause");
}