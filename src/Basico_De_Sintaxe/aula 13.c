#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void IMPRIMIR(int a, int b, int resultado)
{
    printf("\n");
    printf(" o calculo de %i + %i = %i \n", a, b, resultado);
    printf(" o calculo de %i - %i = %i \n", a, b, resultado);
    printf(" o calculo de %i x %i = %i \n", a, b, resultado);
    printf(" o calculo de %i x %i = %i \n", a, b, resultado);
}

int main(void)
{

    int a;
    int b;
    int resultado;

    resultado = a + b;
    resultado = a - b;
    resultado = a * b;
    resultado = a / b;
    
    printf("\n");
    printf("digite um numero desejado: ");
    scanf("%d",& a);

    printf("\n");
    printf("digite outro numero desejado: ");
    scanf("%d", & b);
    
    printf("\n");
    system("pause");
    system("cls");

    IMPRIMIR(a, b, resultado);
    
    printf("\n");
}