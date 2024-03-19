#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    int i = 1;

    printf("\n\n");

    while (i <= 100)
    {
        printf("%i ", i);
        i++;
    }

    printf("\n\n");

    i = 1;

    while (i <= 100)
    {
        if (i % 2 != 0)
        {
            printf("%i ", i);
        }
        i++;
    }

    printf("\n\n");

    i = 1;

    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("%i ", i);
        }
        i++;
    }

    printf("\n");

    return 0;
}