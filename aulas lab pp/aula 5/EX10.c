/*Faça uma função que receba dois números e retorne qual deles é o maior*/
#include <stdio.h>

int maior (int nunA, int nunB);

int main ()
{
    int a, b;

    printf ("Digite dois numeros: ");
    scanf ("%d%d", &a, &b);

    printf ("O numero %d eh maior", maior (a, b));

    return 0;
}

int maior (int nunA, int nunB)
{
    int x;

    if (nunA > nunB)
    {
        return nunA;
    }
    else
    {
        return nunB;
    }
}