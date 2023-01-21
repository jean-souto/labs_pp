/*8. Faça um programa para armazenar em memória um vetor de dados contendo 1500 valores
do tipo int, usando a função de alocação dinâmica de memória CALLOC:
a) Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com
zero (conte os 1500 zeros do vetor);
b) Atribua para cada elemento do vetor o valor do seu índice junto a este vetor;
c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *vet1500, i, count = 0;

    vet1500 = (int*) calloc (1500, sizeof(int));

    for (i = 0; i < 1500; i++)
    {
        if (vet1500[i] == 0)
        {
            count++;
        }
        
        vet1500[i] = i;

        if (i < 10 || i >= 1490)
        {
            printf (" %d ", vet1500[i]);
        }
    }

    printf ("\n ha %d zeros", count);

    free (vet1500);

    return 0;
}