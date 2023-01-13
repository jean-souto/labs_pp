/*8. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.*/

#include <stdio.h>

int main ()
{
    int array[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf (" %d ", &array[i]);
    }

    return 0;
}