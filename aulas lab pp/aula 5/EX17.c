/*17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a
soma dos N números inteiros existentes entre eles.*/
#include <stdio.h>

int soma (int nunI, int nunF);

int main ()
{
    int nun1, nun2;

    printf ("digite o inicio e o fim: ");
    scanf ("%d%d", &nun1, &nun2);

    printf ("A soma dos numeros entre eles eh %d", soma (nun1, nun2));

    return 0;
}

int soma (int nunI, int nunF)
{
    int soma = 0; 

    for (; nunI <= nunF; nunI++)
    {
        soma += nunI;
    }

    return soma;
}