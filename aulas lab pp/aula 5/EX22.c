/*23. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo,
a saída para n = 4 seria:*/
#include <stdio.h>

void piramide (int nun)
{
    int i, j = 0, k, x;
    
    for (i = 1; i <= ((2*nun)-1); i++)
    {
        if (j < nun)
        {
            for (j = 0; j < i; j++)
            {
                printf ("*");
            }
            x = j;
        }
        else
        {
            k = x-1;
            for (k > 0; k--;)
            {
                printf ("*");
            }
            x--;
        }
           
        printf ("\n");
        
    }       
}

int main ()
{
    int nun;

    printf ("Digite um numero: ");
    scanf ("%d", &nun);

    piramide (nun);

    return 0;
}