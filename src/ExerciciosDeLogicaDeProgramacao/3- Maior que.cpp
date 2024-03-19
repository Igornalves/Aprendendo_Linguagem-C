#include <stdio.h>
#include <stdlib.h>

/*Este programa solicita ao usuário que insira dois números.
Em seguida, ele compara os dois números e imprime o maior deles.
Se os dois números forem iguais, ele imprimirá uma mensagem informando isso.*/

int main() {

    system("color 30");

    int numero1, numero2;
    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &numero1);
    printf("Digite o segundo numero inteiro:");
    scanf("%d", &numero2);
    
    // if (numero1 > numero2)
    //     printf("O maior numero e %d\n", numero1);
    //  else if (numero2 > numero1)
    //     printf("O maior numero e %d\n", numero2);
    //  else 
    //     printf("Os numeros sao iguais\n");

    system("pause");
    
    return 0;
}