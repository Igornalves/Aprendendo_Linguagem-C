#include <stdio.h>
#include <stdlib.h>

/*Este programa solicita ao usuário que insira um número.
Em seguida, ele usa um loop for para contar todos os divisores
do número inserido pelo usuário. O número de divisores
é então impresso na tela.*/

int main() {
    int numero, i, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            cont++;
        }
    }

    printf("O numero %d tem %d divisores.\n", numero, cont);
    system("pause");
    
    return 0;
}
