/*9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.*/
#include <stdio.h>
int main ()
{
    int nun, a, b;

    printf ("Digite um numero: ");
    scanf ("%d", &nun);

    for (a = 1; a <= nun; a++)
    {
        b = a%2;
        if (b == 1)
        {
            printf ("%d ", a);
        }
    }

    return 0;
}