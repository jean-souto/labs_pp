/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

#include <stdio.h>

int main ()
{
    int vetor [8], i, soma = 0;

    for (i = 0; i < 2; i++)
    {
        printf ("digite um valor: ");
        scanf ("%d", &vetor[i]);
    }

    for (i = 0; i < 2; i++)
    {
        soma += vetor[i];
    }

    printf ("A soma dos numeros eh %d", soma);

    return 0;
}