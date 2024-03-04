#include <stdio.h>
#include <stdlib.h>

/*Este programa solicita ao usuário que insira um número.
Em seguida, ele imprime a sequência de Fibonacci até o número
inserido pelo usuário ou até que a sequência alcance
ou ultrapasse esse número.*/

int main() {
    int numero, primeiro = 0, segundo = 1, proximo;

    printf("Digite um numero:");
    scanf("%d", &numero);

    printf("%d\n", primeiro);
    if (numero > 0) {
        printf("%d\n", segundo);
    }

    proximo = primeiro + segundo;
    while(proximo <= numero) {
        printf("%d\n", proximo);
        primeiro = segundo;
        segundo = proximo;
        proximo = primeiro + segundo;
    }
    
    system("pause");
	    return 0;
}
