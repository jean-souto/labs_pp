/*14. Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do array.
A função deverá preencher os elementos de array com esse valor. Não utilize índices para
percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>

int array (int *vet, int i)
{
    int j, valor;

    printf ("Digite um valor: ");
    scanf ("%d", &valor);

    for (j = 0; j < i; j++)
    {
        *vet = valor;
        vet += 1;
    } 
}

int main ()
{
    int i, vetor[10];

    array (vetor, 10);

    for (i = 0; i < 10; i++)
    {
        printf (" %d ", vetor[i]);
    }

    return 0;
}
