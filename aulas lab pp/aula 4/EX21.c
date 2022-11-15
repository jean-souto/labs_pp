/*21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
números informados pelo usuário.*/
#include <stdio.h>
int main ()
{ 
    int x, n, y, z, controle = 0, soma = 1;

    printf ("Digite o inicio: ");
    scanf ("%d", &z);

    printf ("Digite o fim: ");
    scanf ("%d", &y);

    for (x = z; x < y; x++)
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
            soma++;
        }

        controle = 0;

    }

    printf ("\n\nHa %d numeros primos entre o intervalo informado.", soma);

    return 0;
}