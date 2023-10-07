#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float m;

    printf("                             digite sua nota: ");
    scanf("%f", &m);

    printf("\n");

    if (m >= 7 && m >= 10)
    {
        printf("                  vc foi aprovado meus parabens !!!\n\n");
    }

    if (m >= 4 && m < 7)
    {
        printf("                      tem direito a fazer o exame !!! \n\n");
    }

    if (m >= 0 && m <= 3)
    {
        printf("                  vc foi reprovado lamentamos por isso esforca-te na proxima \n\n");
    }
}