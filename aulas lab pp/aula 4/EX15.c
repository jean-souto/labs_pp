/*15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada
de dados com um valor negativo ou zero.*/
#include <math.h>
#include <stdio.h>
int main ()
{
    int a = 1, quad; 
    float cubo, raiz;

    while (a > 0)
    {
        printf ("\nDigite um numero: ");
        scanf ("%d", &a);
        
        if (a > 0)
        {
            quad = pow(a, 2);
            raiz = sqrt(a);
            cubo = cbrt (a);

            printf ("A raiz quadrada eh %.2f, a raiz cubica eh %.2f e o quadrado do numero eh %d!", raiz, cubo, quad);
        }
        else
        {
            printf ("numero invalido");
        }
    }

    return 0;
}