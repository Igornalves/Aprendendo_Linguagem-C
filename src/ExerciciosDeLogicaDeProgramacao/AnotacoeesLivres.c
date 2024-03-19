#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (void){
    
    int matricula;
    int senha;
    
    system("color B0");
    setlocale(LC_ALL,"Portuguese");
    
    printf("                                            Olá tudo bem !!! \n");
    printf("                                      BEM VINDO A ANOTAÇÕES LIVRES \n");
    
    printf("                                  ANTES INSIRA AS INFORMAÇÃO DE LOGIN \n\n");
    
    printf("                                    MATRICULA: ");
    scanf("%d",& matricula);
    printf("\n");
    
    printf("                                     SENHA: ");
    scanf("%d",& senha);
    printf("\n");
    
    printf("                                ");
    system("pause"); 
    system("cls");
    
    printf("\n");
    printf("                                    FAÇA SUAS ANOTAÇÕES AQUI EM BAIXO !!!"); 
    printf("\n                                       "); 
    scanf("%s");

}
