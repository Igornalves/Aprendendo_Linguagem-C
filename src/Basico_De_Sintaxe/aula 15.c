#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

    printf("\n \n");

    for (int d = 1; d <= 100; d++)
    {
        printf("%i ",d);
    }

    printf("\n \n");

    for (int d = 1; d <= 100; d++)
    {
        if (d%2 != 0)
        {
            printf("%i ",d);
        }
        
    }

    printf("\n \n");
    
    for (int d = 1; d <= 100; d++)
    {
        if (d%2 == 0)
        {
            printf("%i ",d);
        }
        
    }

    printf("\n \n");

    return 0;
}