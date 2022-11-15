/*7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média*/
#include <stdio.h>
int main ()
{
    int soma = 0, b, a;

    for (a = 1; a <= 10; a++)
    {
        printf ("Digite um numero: \n");
        scanf ("%d", &b);

        if (b < 0)
        {
            printf ("Numero ignorado!\n");
            a--;
        }
        else
        {
            soma += b;
        }
    }

    printf ("A media dos numeros eh: %d", soma/10);

    return 0;
}