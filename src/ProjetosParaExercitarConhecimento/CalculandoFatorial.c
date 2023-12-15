#include <stdio.h>
#include <stdlib.h>

int fatorial(int w)
{
    if (w <= 1)
    {
        return w;
    }
    else
    {
        return w * fatorial(w - 1);
    }
}

int main(void)
{
    // Exercicio 1: crie um programa que calcule um fatorial de um numero qualquer

    int w;

    printf("vc poderia digitar um numero: ");
    scanf("%d", &w);

    printf("\n");

    printf("o valor da fatorial que foi feio o calculo e de %d", fatorial(w));

    printf("\n");

    return 0;
}