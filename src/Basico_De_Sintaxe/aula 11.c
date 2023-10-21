#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    system("color 80");

    int operacoes;
    float f1, f2;
    float resultado;

    printf("\n");
    printf("                          Calculadora com switch !!!\n");

    printf("                  Escolha uma da operacoes abaixo para realizar o calculo: \n");
    printf("                           1.soma\n", &operacoes);
    printf("                           2.subtracao\n", &operacoes);
    printf("                           3.multiplicacao\n", &operacoes);
    printf("                           4.Divisao\n\n", &operacoes);

    printf("                     Digite aqui a operacao que deseja realizar: ");
    scanf("%d", &operacoes);
    printf("\n");
            
    system("pause");
    system("cls");

    printf("\n");
    printf("                        Digite os numero para a operacao abaixo\n\n");
    printf("                               numero 1: ");
    scanf("%f", &f1);
    printf("");

    printf("                               numero 2: ");
    scanf("%f", &f2);
    printf("\n");

    switch (operacoes)
    {
    case 1:
        resultado = f1 + f2;
        printf("                            resultado e %.f + %.f = %.f \n", f1, f2, resultado);
        break;

    case 2:
        resultado = f1 - f2;
        printf("                            resultado e %.f - %.f = %.f \n", f1, f2, resultado);
        break;

    case 3:
        resultado = f1 * f2;
        printf("                            resultado e %.f * %.f = %.f \n", f1, f2, resultado);
        break;

    case 4:
        resultado = f1 / f2;
        printf("                            resultado e %.f / %.f = %.f \n", f1, f2, resultado);
        break;

    default:
        printf("                                opcao invalida !!!\n");
        break;
    }
}