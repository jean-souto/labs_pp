/*15. Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para
percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>

void print (int *vet, int i)
{
    int j;

    for (j = 0; j < i; j++)
    {
        printf (" %d ", *vet);
        vet += 1;
    }
}

int main ()
{
    int vet[5], i;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
    }

    print (vet, 5);

    return 0;
}