#include <stdio.h>
#include <stdlib.h>

/*Este programa solicita ao usuário que insira um número.
Em seguida, ele usa um loop for para encontrar o maior divisor
do número inserido pelo usuário. O maior divisor é então impresso na tela.*/

int main() {
    int numero, i, maior_divisor = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            maior_divisor = i;
        }
    }

    printf("O maior divisor do numero %d e %d.\n", numero, maior_divisor);
    system ("pause");
    
    return 0;
}
