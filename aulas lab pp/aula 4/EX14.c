/*14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int x, n, dado1, dado2;

    printf ("Digite quantas vezes voce quer jogar os dados: ");
    scanf ("%d", &n);

    for (x = 0; x < n; x++)
    {
        srand (time(NULL));
        dado1 = rand () % 6;
        dado2 = rand () % 6;

        if (dado1 > dado2)
        {
            printf ("OS numeros sorteados foram %d e %d. Dado 1 maior que dado 2.\n", dado1, dado2);
        }
        else
        {
            if (dado2 > dado1) 
            {
                printf ("OS numeros sorteados foram %d e %d. Dado 2 maior que dado 1.\n", dado2, dado1);
            }
            else
            {
                printf ("OS numeros sorteados foram %d e %d. Dado 1 igual ao dado 2.\n", dado1, dado2);
            }
        }
    }


    return 0;
}