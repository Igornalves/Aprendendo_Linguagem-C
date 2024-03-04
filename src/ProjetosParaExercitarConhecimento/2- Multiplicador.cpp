#include <stdio.h>
#include <stdlib.h>

/*Este programa solicita ao usuário que insira um número.
Em seguida, ele calcula o dobro do número e imprime o resultado.*/

int main() {
	
    int numero;
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);
    int dobro = numero * 2;
    printf("O dobro do numero e %d\n", dobro);
    system ("pause");
    
	return 0;
	
}
