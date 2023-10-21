#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){ 

    float altura; 

    printf("digite sua altura: ");
    scanf("%f", & altura);

    if ((altura >= 1.65) && (altura <= 1.85)){
          printf("vc pode entra aqui na festa ok \n");
    
     }
     else{
        printf(" vc nao pode entra na festa ok \n ");
     }

    system("pause");
    system("cls");

    int a = 10;

    int b = a / 2;

    int c = b % 2;

    printf(" o valor da divisao e igual a %.i \n", b);

    printf(" o valor do resto da divisao e %.i \n", c);

    system("pause");
}