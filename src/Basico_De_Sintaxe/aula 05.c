#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    float notas[5] = {
        4,
        5,
        2,
        1,
        6,
    };

    printf("                exibindo os valores do vetor \n\n");

    printf("                   notas[0]=%.1f\n", notas[0]);
    printf("                   notas[1]=%.1f\n", notas[1]);
    printf("                   notas[2]=%.1f\n", notas[2]);
    printf("                   notas[3]=%.1f\n", notas[3]);
    printf("                   notas[4]=%.1f\n", notas[4]);

    printf("\n");
    printf("               ");
    system("pause");

    int number[3], indice;
    for (indice = 0; indice <= 2; indice++)
    {

        printf("             entre com o numero %d:", indice + 1);
        scanf("%d", &number[indice]);
    }

    for (indice = 0; indice <= 2; indice++)
    {
        printf("             numero %d= %d\n", indice + 1, number[indice]);
    }

    printf("                 ");
    system("pause");
}
