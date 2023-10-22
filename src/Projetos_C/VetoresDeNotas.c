#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    system("color B0");

    float notas[5] = {
        4.5,
        5.5,
        2.3,
        1.8,
        6.1,
    };

    printf("                exibindo os valores do vetor \n\n");

    printf("                nota do aluno 0 = %.1f\n", notas[0]);
    printf("                nota do aluno 1 = %.1f\n", notas[1]);
    printf("                nota do aluno 2 = %.1f\n", notas[2]);
    printf("                nota do aluno 3 = %.1f\n", notas[3]);
    printf("                nota do aluno 4 = %.1f\n", notas[4]);

    printf("\n");
    printf("               ");
    system("pause");
    system("cls");

    int number[3], indice;

    for (indice = 0; indice <= 2; indice++)
    {
        printf("             entre com o numero da posicao %d: ", indice);
        scanf("%d", &number[indice]);
    }

    for (indice = 0; indice <= 2; indice++)
    {
        printf("            numeros digitados foram %d = %d\n", indice, number[indice]);
    }
}
