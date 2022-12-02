/*3. Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior
valor.*/
#include <stdio.h>

int main ()
{
    int matriz[4][4];
    int i, j, maior = 0, C1 = 0, C2 = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf ("Digite um numero ");
            scanf ("%d", &matriz[i][j]);

            if (maior < matriz[i][j])
            {
                maior = matriz[i][j];
                C1 = i;
                C2 = j;
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf ("%d ", matriz[i][j]);
        }

        printf ("\n");

    }

    printf ("O maior numero da matriz eh %d e suas coordenadas sao %d x %d", maior, C1, C2);

    return 0;
}