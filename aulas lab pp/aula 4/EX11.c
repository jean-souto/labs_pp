/*11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/
#include <stdio.h>
int main ()
{
    int a, b;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &a);

    for (b = 0; b <= a; b++)
    {
        printf ("%d ", b);
    }

    return 0;
}