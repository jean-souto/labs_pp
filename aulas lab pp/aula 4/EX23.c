/*23. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas
do chamado Triangulo de Floyd. Para n = 6, temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/
#include <stdio.h>
int main ()
{
    int n, nun = 1, x, y;

    printf ("Digite o numero de linhas: ");
    scanf ("%d", &nun);

    for (x = 0; x <= nun; x++)
    {
        for (y = 1; y <= x; y++)
        {
            printf ("%d ", y);
        }
        printf ("\n"); 
    }

    return 0;
}