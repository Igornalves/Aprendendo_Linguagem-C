#include <stdio.h>
#include <stdlib.h>

/*Este programa solicita ao usuário que insira um número.
Em seguida, ele usa um loop for para contar todos os divisores
do número inserido pelo usuário. Se o número de divisores for
igual a 2 (ou seja, 1 e o próprio número), o programa imprime
que o número é primo. Caso contrário, ele imprime que
o número não é primo.*/

int main() {
    int numero, i, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            cont++;
        }
    }

    if(cont == 2) {
        printf("O numero %d e primo.\n", numero);
    } else {
        printf("O numero %d nao e primo.\n", numero);
    }
    system("pause");
    
    return 0;
}
