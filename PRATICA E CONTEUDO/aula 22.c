#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <math.h>

int main()
{

  // Verifica a idade
  int ano_atual = 2023;
  int idade;
  int ano;

  char nome[50], profissao[100], resposta[5], nome_arquivo[100];

  setlocale(LC_ALL, "Portuguese");

  // Tela de inicializa��o
  printf("\n");
  printf("                                 Bem-vindo ao sistema!\n\n");

  // Painel de login
  printf("                     Por favor, entre com suas informações de login\n\n");

  printf("                                       Nome: ");
  scanf("%s", &nome);
  printf("                                  Profissão: ");
  scanf("%s", &profissao);
  printf("                          Ano de nascimento: ");
  scanf("%d", &ano);

  idade = 2023 - ano;

  printf("                                sua idade é: %d", idade);

  printf("\n\n");

  if (idade < 18)
  {

    printf("                        Voçé não tem idade suficiente para continuar.\n");
  }

  else
  {

    printf("                                    login autorizado !!!!");
    printf("\n\n");
  }

  printf("                       ");
  system("pause");

  int num1;
  int num2;
  int soma, subtra;
  int multipli, divi;

  printf("\n");
  printf("                                     CALCULADORA 1.0v \n\n");
  printf("                        só será possivel colocar duas variaveis de números");

  printf("\n\n");
  printf("                                    INSIRA AS VARIAVEIS !!!");

  printf("\n\n");
  printf("                                        variavel 1: ");
  scanf("%d", &num1);

  printf("\n");
  printf("                                        variavel 2: ");
  scanf("%d", &num2);

  printf("\n\n");

  soma = num1 + num2;
  subtra = num1 - num2;
  multipli = num1 * num2;
  divi = num1 / num2;

  printf("                              sua soma foi de: %i\n\n", soma);
  printf("                         sua subtração foi de: %i\n\n", subtra);
  printf("                     sua multiplicação foi de: %i\n\n", multipli);
  printf("                           sua divisão foi de: %i\n", divi);

  printf("\n");
  printf("                          ");
  system("pause");
}
