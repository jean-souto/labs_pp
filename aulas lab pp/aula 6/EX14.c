/*6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/
#include <stdio.h>

int main ()
{
    int matriz[4][4];
    int i, j, x = 1;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz [i][j] = x;

            printf ("%d ", matriz[i][j]);
        
            x++;
        }
        printf ("\n");
    }

    printf ("\n\n\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i < j)
            {
                matriz[i][j] = 0;
            }

            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
}