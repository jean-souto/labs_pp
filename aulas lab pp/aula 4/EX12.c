/*12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
6 + 11 + 22 + 33 = 78*/

#include <stdio.h>
int main ()
{
    int nun, a, b, soma = 0;

    printf ("Digite um numero: ");
    scanf ("%d", &nun);

    for (a = 1; a < nun; a++)
    {
        b = nun%a;

        if (b == 0) 
        {
            soma += a;
        }
    }

    printf ("A soma dos divisores de %d eh %d.", nun, soma);

    return 0;
}