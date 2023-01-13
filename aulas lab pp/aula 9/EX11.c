/*11. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>

int main ()
{
    int vetor[5], i;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (vetor[i]%2 == 0)
        {
            printf (" %d ", vetor[i]);
        }
    }

    return 0;
}