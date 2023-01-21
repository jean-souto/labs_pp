/*16. Faça um programa que leia dois números N e M:
a) Crie e leia uma matriz N x M de inteiros;
b) Crie e construa uma matriz transposta M x N de inteiros;
c) Mostre as duas matrizes.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int **p, **p2; //2 niveis
    int i, j, N, M;

    printf ("Digite a quantidade de linhas: ");
    scanf ("%d", &N);
    printf ("\nDigite o numero de coluna: ");
    scanf ("%d", &M);

    p = (int**) malloc(N*sizeof(int*));
    p2 = (int**) malloc(M*sizeof(int*));
    
    printf ("\nDigite os numeros da matriz: ");
    
    for (i = 0; i < N; i++)
    {
        //criar um array de int
        p[i] = (int*) malloc(M*sizeof(int));

        for (j= 0; j < M; j++)
        {
            // le a matriz de int
            scanf ("%d", &p[i][j]);
        }    
    }

    printf ("\n\n");

    for (i = 0; i < M; i++)
    {
        //criar um array de int
        p2[i] = (int*) malloc(N*sizeof(int));

        for (j= 0; j < N; j++)
        {
            // le a matriz de int
            p2[i][j] = p[j][i];
        }    
    }

    for (i = 0; i < N; i++)
    {
        for (j= 0; j < M; j++)
        {
            printf (" %d ", p[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n");

    for (i = 0; i < M; i++)
    {
        for (j= 0; j < N; j++)
        {
            printf (" %d ", p2[i][j]);
        }
        printf ("\n");
    }

    for (i = 0; i < N; i++)
    {
        free(p[i]); 
    }

    free(p);

    for (i = 0; i < M; i++)
    {
        free(p2[i]); 
    }

    free(p2);

    return 0;
}