#include <stdio.h>
#include <stdlib.h>

/*Este programa solicita ao usuário que insira um número.
Em seguida, ele usa um loop for para somar todos os
números de 1 até o número inserido pelo usuário.
A soma é então impressa na tela.*/

int main() {
    int numero, i, soma = 0;

    printf("Digite um numero:");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        soma += i;
    }

    printf("A soma dos numeros de 1 ate %d e %d\n", numero, soma);
    system ("pause");
    
    return 0;
}
