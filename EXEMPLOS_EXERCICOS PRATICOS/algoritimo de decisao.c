//Desenvolver um algoritmo que leia um número inteiro e 
//verifique se o número é divisível por 5 e por 3 ao mesmo tempo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int numero;

    printf("digite um numero: ");
    scanf("%d", &numero);

    if ((numero % 5) == 0 && (numero % 3) == 0)
    {
        printf("o numero e divisivel");
        printf("\n");
    }
    else
    {
        printf("o numero nao e divisivel");
        printf("\n");
    }
    return 0;
}