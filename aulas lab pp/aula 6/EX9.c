/*1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui*/
#include <stdio.h>
int main ()
{
    int matriz[4][4];
    int i, j, maior, total = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf ("Digite um numero: ");
            scanf ("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {   
            maior = matriz[i][j];

            if (maior > 10)
            {
                printf ("%d eh maior que 10\n", matriz[i][j]);
                total++;
            }
        }
    }

    printf ("Ha %d numeros maior que 10 na matriz", total);

}