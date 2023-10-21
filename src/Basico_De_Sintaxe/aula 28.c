#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <locale.h>

    int main () {
    
    int a;
    int b;
    int c;
    int x1,x2,delta;
    
    system("color 90");
    
    printf("\n");
    printf("                         BEM VINDO AO SISTEMA DE CALCULO DE EQUACAO DO SEGUNDO GRAU");
    printf("\n");
    printf("                            indique o valor de cada um dos valores da equação");
    printf("\n\n\n");
    
    printf("                         Apresente o valor de a: ");
    scanf("%d",& a );
    printf("\n");
    
    printf("                         Apresente o valor de b: ");
    scanf("%d",& b);
    printf("\n");
    
    printf("                         Apresente o valor de c: ");
    scanf("%d",& c);
    printf("\n");
    
    delta= b*b - 4*a*c;
    
    printf("                         resultado apresentado vai dar o valor de delta: %i", delta);
    printf("\n");
    
    if (delta <= 0){
    
    printf("\n");
    printf("                                     \"o delta tem raiz negativa\"");
    printf("\n");
}
    else{
    
    x1= -b + delta / 2*a;
    
    printf("\n");
    
    printf("                                             valor x1: %d \a",x1);
    
    x2= -b - delta / 2*a;
    
    printf("\n\n");
    
    printf("                                             valor x2: %d",x2);
    
    printf("\n");
}   
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    
    printf("\n");
    printf("                                ");
    system("pause");
    
}
