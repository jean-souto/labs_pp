/*12. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o
segundo menor valor na variável do meio, e o maior valor na última variável. A função deve
retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir
os valores ordenados na tela.*/

#include <stdio.h>

int ordem (int *a, int *b, int *c)
{
    int x;
    
    if ((*a == *b) && (*b == *c))
    {
        return 1;
    }
    else
    {
        if ((*b > *a) && (*b > *c))
        {
            x = *a;
            *a = *b;
            *b = x;
        }
        else if ((*b < *a) && (*b < *c))
        {
            x = *c;
            *c = *b;
            *b = x;
        }

        if ((*c > *a) && (*c > *b))
        {
            x = *a;
            *a = *c;
            *c = x;
        }

        if ((*c > *a) != (*c > *b))
        {
            x = *b;
            *b = *c;
            *c = x;
        }

        return 0;
    }
}

int main ()
{
    int a, b, c;

    printf ("Digite tres numeros: ");
    scanf ("%d%d%d", &a, &b, &c);

    ordem (&a, &b, &c);

    printf (" %d %d %d ", a, b, c);

    return 0;
}