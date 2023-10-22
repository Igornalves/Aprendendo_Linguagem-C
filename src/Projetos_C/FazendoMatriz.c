#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int matriz[3][3], i, j;

    printf("\n Digite o valor para os elementos da matriz \n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n Elemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf(" matriz !!!");

    for (i = 0; i < 3; i++)
    {

        printf("\n");

        for (j = 0; j < 3; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        
    printf("\n \n");

    }
system("pause");
}