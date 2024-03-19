#include <stdio.h>
#include <stdlib.h>

/*Este programa solicita ao usuário que insira um número.
Em seguida, ele usa um loop for para imprimir todos
os números de 1 até o número inserido pelo usuário.
Cada número é impresso em uma nova linha.*/

int main() {
    int numero, i;

    printf("Digite um numero:");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) 
        printf("%d\n", i);
        system("pause");
        	
    return 0;
}
