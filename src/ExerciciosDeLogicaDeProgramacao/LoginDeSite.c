#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int nome;
    int dia;
    int mes;
    int idade;
    int ano;
    int ano_atual = 2023;

    printf("\n");

    printf("                                     Sistema de login do site \n");

    printf("                                            Nome: ");
    scanf("%s", &nome);

    printf("\n");

    printf("                                        Data de nascimento \n");

    printf("                                             dia: ");
    scanf("%d", &dia);

    printf("\b");

    printf("                                             mes: ");
    scanf("%d", &mes);

    printf("\b");

    printf("                                             ano: ");
    scanf("%d", &ano);

    printf("\n");

    printf("                                ");

    system("pause");
    system("cls");

    printf("\n");

    idade = 2023 - ano;

    if (idade < 18)
    {
        printf("\a");
        printf("                             vc nao tem idade suficiente para continua com procedimento\n");
        printf("                                      infelizmente lametamos nao poder lhe ajuda\n\n");
        printf("                                      ");
        system("pause");
    }
    else
    {
        printf("\a");
        printf("                                  Vc foi aprovado !!! meus parabens !!!");
        printf("\n\n");
        printf("                                         Seu nome: %s", &nome);
        printf("\n");
        printf("                                  sua data de nascimento: %d/%d/%d", dia, mes, ano);
        printf("\n\n");
        printf("                                       Bem vindo ao sistema !!!");
        printf("\n\n");
        printf("                                  ");
        system("pause");
    }
}