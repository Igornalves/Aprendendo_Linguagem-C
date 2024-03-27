#include <stdio.h>
#include <stdlib.h> // importando a biblioteca padrão fornece funções para alocação de memória

int main()
{
    int num2 = 12;
    int num1 = 12;

    int somaResultado;

    somaResultado = num1 + num2;

    printf("fazendo um calculo de soma resultado e: %d \n", somaResultado);

    if (somaResultado <= 24)
    {
        printf("esse numero e menor que o esperado \n");
    }
    else
    {
        printf("esse numero e maior que o esperando \n");
    }

    system("pause");
    system("cls");
}