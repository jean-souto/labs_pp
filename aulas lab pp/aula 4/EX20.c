/*20. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões*/
#include <stdio.h>
int main ()
{ 
    int x, soma = 2, n, controle;

    printf ("2 eh primo");

    for (x = 1; x < 2000000; x+=2)
    {
        for (n = 1; n <= x; n++)
        {
            if (x%n == 0)
            {
                controle++;
            }
        }

        if (controle == 2)
        {
            printf ("\n%d eh primo", x);
            soma += x;
        }

        controle = 0;

    }

    printf ("\nA soma de todos os numeros primos abaixo de dois milhoes eh %d!", soma);

    return 0;
}