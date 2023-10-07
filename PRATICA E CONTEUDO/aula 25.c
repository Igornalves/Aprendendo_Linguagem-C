#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <locale.h>

#define texto "ENTRADA E SAIDA DE DADOS" 

int main (){

    setlocale(LC_ALL, "Portuguese");
    system("color B0");
    
    printf("\n\n");
    
    printf("                              %s\n",texto);
    
    int idade;
    float altura;
    char nome [50];
    
    printf("                          digite a idade: ");
    scanf("%d",& idade);
    
    printf("                          digite sua altura : ");
    scanf("%f",& altura);
    
    printf("                          digite seu nome: ");
    scanf("%s",& nome);
    
    printf("\n");
    printf("                              ");
    system("pause");
    system("cls");

    printf("\n");
    
    printf("                         a idade do usuario e %i, ja a altura e %f, seu nome e %c \n",idade,altura,nome);

}
