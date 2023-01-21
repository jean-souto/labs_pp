/*2. Faça um programa que leia do usuario o tamanho de um vetor a ser lido e faça a alocação
dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, *vet, i;

    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &x);

    vet = (int*) calloc (x, sizeof(int));

    for (i = 0; i < x; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
    }

    for (i = 0; i < x; i++)
    {
        printf (" %d ", vet[i]);
    }

    free (vet);

    return 0;
}