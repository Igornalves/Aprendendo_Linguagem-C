#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float operacoes(float a, float b)
{
    float resultado;
    resultado = a + b;
    resultado = a - b;
    resultado = a * b;
    return resultado;
}

int main()
{

    system("color B0");

    float a;
    float b;
    float resultado;

    printf("                                digite um numero: ");
    scanf("%s", a);

    printf("                                digite outro numero: ");
    scanf("%s", b);

    printf("\n");

    printf("                        o resultado de %f com %f e igual a %f\n", a, b, resultado);

    system("pause");
}
