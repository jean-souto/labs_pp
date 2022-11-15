/*13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
de 3 ou 5.*/
#include <stdio.h>
int main ()
{
    int x, a, b, soma = 0;

    for (x = 0; x <= 1000; x++)
    {
        a = x%3;
        b = x%5;

        if (a == 0 && b == 0)
        {
            soma += x;
        }
    }

    printf ("A soma eh: %d", soma);

    return 0;
}