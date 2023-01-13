/*2. Escreva um programa que contenha duas variáveisinteiras. Compare seus endereços e exiba
o maior endereço.*/

#include <stdio.h>

int main ()
{
    int x, y;

    if (&x > &y)
    {
        printf ("%d eh maior que %d", &x, &y);
    }
    else
    {
        printf ("%d eh maior que %d", &y, &x);
    }
    return 0;
}