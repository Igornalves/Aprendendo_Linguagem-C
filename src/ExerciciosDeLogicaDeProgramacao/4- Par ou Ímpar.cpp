#include <stdio.h>
#include <stdlib.h>

/*Este programa primeiro pede ao usuário para digitar um número inteiro.Em seguida,
usa o operador de módulo (%) para encontrar o resto da divisão desse número por 2.
Se o resto for 0, o número é par. Caso contrário, o número é ímpar. Por fim,
o programa imprime se o número é par ou ímpar.*/

int main() {
    int numero;
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    if(numero % 2 == 0)
        printf("%d E par.\n", numero);
    else
        printf("%d E impar.\n", numero);
        
		system ("pause");
        
    return 0;
}
