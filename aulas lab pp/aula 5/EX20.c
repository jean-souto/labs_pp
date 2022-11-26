/*20. Escreva uma função para determinar a quantidade de números primos abaixo de N.*/
#include <stdio.h>

int primos (int nun);

int main ()
{
    int nume;

    printf ("Digite um numero: ");
    scanf ("%d", &nume);

    printf ("A quantidade de numeros primos abaixo de %d eh %d", nume, primos (nume));

    return 0;
}

int primos (int nun) 
{
    int i, j, controle = 0, numeros = 0;

    if (nun >= 2)
    {
        numeros = 1;
    }

    for (i = 3; i <= nun; i+=2)
    {

        for (j = 1; j <= i; j++)
        {
            if (i%j == 0)
            {
                controle++;
            }
        }
        
        if (controle == 2)
        {
            numeros++;
        }
        
        controle = 0;
    
    }

    return numeros;
}