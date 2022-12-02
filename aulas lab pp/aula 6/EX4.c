/*4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor.*/

#include <stdio.h>

int main ()
{
    int vetor [5], i, maior, menor;

    for (i = 0; i < 5; i++)
    {
        vetor [i] = 0;
    }

    maior = 0;
    menor = 0;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite um valor ");
        scanf ("%d", &vetor[i]);

        if (vetor[maior] < vetor[i])
        {
            maior = i;
        }

        if (vetor[menor] > vetor[i])
        {
            menor = i;
        }
    }

    printf ("O maior valor esta na posicao %d e o menor da posicao %d", maior, menor);
}