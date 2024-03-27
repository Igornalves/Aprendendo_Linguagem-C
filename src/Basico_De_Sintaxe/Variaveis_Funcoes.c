#include <stdio.h> // biblioteca padrao para usar metodos de entrada e saida

int num1 = 10; // variavel do tipo inteiro global do arquivo raiz

float dev = 23.4; // variavel do tipo float para guarda numero quebrados

char ny ="des"; // variavel do tipo char para guarda uma caracter

// metodo ou funcao principal que vai roda o programa em C
int main()
{
    int num2 = 13; // variavel local

    // chamando a funcao e passando os valores nos parametros para ela e imprimindo no console
    printf("o valor da soma dos valorees sao de: %d", somaDeVariaveis(num1, num2));
}

// funcao com parametros de tipo inteiro
int somaDeVariaveis(int n, int n1)
{
    int soma; // variavel local (ou seja) que existe so na funcao

    soma = n + n1; // fazendo uma atribuicao na variavel soma que vai receber o resultado da operacao logica

    // retornando o valor guardado na variavel soma
    return soma;
}
