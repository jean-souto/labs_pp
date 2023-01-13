/*5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2
valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda
variável. Escreva o conteúdo das 2 variáveis na tela.*/

#include <stdio.h>

void maior (int *a, int *b)
{
    int c;

    if (*a > *b)
    {
        printf ("A: %d eh maior que B: %d", *a, *b);
    }
    else
    {
        printf ("B: %d eh maior que A: %d", *b, *a);
    }
}

int main ()
{
    int a, b;

    printf ("Digite dois valores: ");
    scanf ("%d%d", &a, &b);
     
    maior (&a, &b);

    return 0;
}