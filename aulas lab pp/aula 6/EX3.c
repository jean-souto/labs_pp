/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.*/
#include <stdio.h>

int main ()
{
    int vetor [6], i, j;

    for (i = 0; i < 6; i++)
    {
        printf ("Digite um valor: ");
        scanf ("%d", &vetor[i]);
    }

    j = i;

    for (j >= 0; j--;)
    {
        printf ("%d ", vetor[j]);
    }

    return 0;
}