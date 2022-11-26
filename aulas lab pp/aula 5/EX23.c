/*24. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a
saída para n = 6 seria:
 *
 ***
 *****
 *******
 *********
************/

#include <stdio.h>

void piramide (int nun)
{
    int i, x, y, z, j;

    for (i = 1; i <= nun; i++)
    {
        j = nun-i;

        for (j > i; j--;)
        {
            printf (" ");
        }
        
        for (x = 1; x <= (i+(i-1)); x++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}

int main ()
{
    int nun;

    printf ("Digite um numero: ");
    scanf ("%d", &nun);

    piramide (nun);

    return 0;
}