// colocando bibliotecas padroes de entrada e saida da linguagem C
#include <stdio.h>
// colocando tambem uma biblioteca que ela possui funções envolvendo alocação de memória, controle de processos, conversões e outras.
#include <stdlib.h>
// adcionando uma biblioteca estão contidas diversas funções matemáticas básicas, com ela podemos trabalhar com funções trigonométricas, funções para cálculo de raiz quadrada, valor absoluto, entre outras.
#include <math.h>

void main()
{
    //desenvolvemos um array (vetores de memoria) que possui 3 espacos reservados de forma que possamos acessar ele atraveez do print deee forma que indicaremos a posição dele

    int numero [3] = {10, 20 ,30};

    printf("%d \n",numero[0]);
    printf("%d \n",numero[1]);
    printf("%d \n",numero[2]);

    if(numero[1]<numero[2]){
        printf("\no numero %d e maior do que o numero %d \n",numero[1],numero[2]);
    }else{
        printf("o numero %d e menor do que o numero %d \n",numero[1],numero[2]);
    }

    if(numero[0]<numero[1]){
        printf("\no numero %d e maior do que o numero %d \n",numero[0],numero[1]);
    }else{
        printf("o numero %d e menor do que o numero %d \n",numero[0],numero[1]);
    }

}