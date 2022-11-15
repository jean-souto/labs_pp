/*6. Faça um programa que leia 10 inteiros e imprima sua média.*/
#include <stdio.h>
int main ()
{
    int soma = 0, b, a;

    for (a = 1; a <= 10; a++)
    {
        printf ("Digite um numero: \n");
        scanf ("%d", &b);

        soma += b;

    }

    printf ("A media dos numeros eh: %d", soma/10);

    return 0;
}