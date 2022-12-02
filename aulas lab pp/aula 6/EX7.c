/*6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que
são primos e suas respectivas posições no vetor*/
#include <stdio.h>

int main ()
{
    int vetor [10];
    int x, n, k, controle = 0;

    for (k = 0; k < 10; k++)
    {
        printf ("Digite um valor: ");
        scanf ("%d", &vetor[k]);

    }

    for (k = 0; k < 10; k++)
    {
        for (x = 1; x < vetor[k]; x+=2)
        {
            for (n = 1; n <= x; n++)
            {
                if (x%n == 0)
                {
                    controle++;
                }
            }

            if (controle == 2)
            {
                printf ("\n%d eh primo e sua posicao eh %d", vetor[k], k);
            }

            controle = 0;

        }
    }

    return 0;
}
