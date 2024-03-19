#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
    float peso;
};

void setAltura(float altura, struct Pessoa *pessoa)
{
    pessoa->altura = altura;
}

void olaMundo()
{
    printf("Ola Mundo!");
}

int main()
{
    struct Pessoa pessoa;
    setAltura(1.75, &pessoa);

    olaMundo();
    printf("\nAltura: %.2f", pessoa.altura);

    return 0;
}