#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    int number[3], indice;

    for (indice = 0; indice <= 2; indice++)
    {

        printf("             Entre com o numero:");
        scanf("%d", &number[indice]);
    }

    for (indice = 0; indice <= 2; indice++)
    {
        printf("             numero %d= %d\n", indice + 1, number[indice]);
    }
}