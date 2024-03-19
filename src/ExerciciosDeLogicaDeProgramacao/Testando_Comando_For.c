#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j, count = 0;
    int n;

    printf("escreva uma numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("%d", j);
        printf("\n");
    }

    return;
}

int main(int f , int d, int n){

    printf("insira um valor para as variaveis: ");
    scanf("%i",&f);

    for (n = 1; n <= f; n++)
    {
        printf("nada por nada");
    }
}