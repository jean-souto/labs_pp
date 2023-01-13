/*10. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor
lido.*/

#include <stdio.h>

int main ()
{
    int vetor[5], *p, i;

    p = &vetor;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%d", &p[i]);
    }

    printf ("\n");

    for (i = 0; i < 5; i++)
    {
        printf (" %d ", (p[i]*2));
    }    
    
    return 0;
}