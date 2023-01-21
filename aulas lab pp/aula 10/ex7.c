/*14. Construa um programa que leia o número de linhas e de colunas de uma matriz de números
reais, aloque espaço dinamicamente para esta e a inicialize com valores fornecidos pelo
usuário. Ao final, o programa deverá retornar a matriz na saída padrão com layout
apropriado.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float **p; //2 niveis
    int i, j, N;

    printf ("Digite o tamanho do da matriz NxN: ");
    scanf ("%d", &N);

    p = (float**) malloc(N*sizeof(float*));
    
    printf ("\nDigite os numeros da matriz: ");
    
    for (i = 0; i < N; i++)
    {
        //criar um array de float
        p[i] = (float*) malloc(N*sizeof(float));

        for (j= 0; j < N; j++)
        {
            // le a matriz de float
            scanf ("%f", &p[i][j]);
        }    
    }

    for (i = 0; i < N; i++)
    {
        for (j= 0; j < N; j++)
        {
            printf (" %.1f ", p[i][j]);
        }
        printf ("\n");
    }

    for (i = 0; i < N; i++)
    {
        free(p[i]); 
    }

    free(p);

    return 0;
}