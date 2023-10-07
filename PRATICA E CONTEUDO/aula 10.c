#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    system("color 80");

    int m4;

    printf("\n");
    printf("                os dia da semana sao representado em numeros pelo sistema\n");
    printf("                            os dia sao: 1 domingo\n");
    printf("                                        2 segunda-feira\n");
    printf("                                        3 terca-feira\n");
    printf("                                        4 quarta-feira\n");
    printf("                                        5 quinta-feira\n");
    printf("                                        6 sexta-feira\n");
    printf("                                        7 sabado\n\n");
    printf("                            escolha um valor de um 1 a 7: ");
    scanf("%d", &m4);
    printf("\n");

    switch (m4)
    {

    case 1:
        printf("                                      domingo \n");
        break;

    case 2:
        printf("                                   segunda-feira \n");
        break;

    case 3:
        printf("                                     terca-feira \n");
        break;

    case 4:
        printf("                                     quarta-feira \n");
        break;

    case 5:
        printf("                                     quinta-feira \n");
        main();
        system("pause");
        break;

    case 6:
        printf("                                      sexta-feira \n");
        break;

    case 7:
        printf("                                        sabado \n");
        break;

    default:
        printf("                                     valor invalido \n");
        break;
    }
    system("cls");
}