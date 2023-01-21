/*6. Faça um programa que simule a memória de um computador: o usuário irá especificar o
tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto, a
memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida, o
usuário terá 2 opções: inserir um valor em uma determinada posição ou consultar o valor
contido em uma determinada posição. A memória deve iniciar com todos os dados zerados*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *mem, i, x, option;

    printf ("Digite o tamanho da memoria: ");
    scanf ("%d", &x);

    mem = (int*) calloc (x, sizeof(int));

    printf ("\nDigite a posição desejada para guardar ou ver: ");
    scanf ("%d", &i);

    printf ("\nDigite 1 para ver e 2 para guardar.");
    scanf ("%d", &option);

    if (option == 1)
    {
        printf (" numero armazenado: %d ", mem[i]);
    } else if (option == 2)
    {
        printf ("\nDigite o numero para armazenar: ");
        scanf ("%d", &mem[i]);
    }

    free (mem);

    return 0;
}