/*4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.*/
#include <stdio.h>

int main ()
{
    int matriz[5][5];
    int i, j, x, teste = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf ("Digite um numero: ");
            scanf ("%d", &matriz[i][j]);
        }
    }

    printf ("Digite um numero para busca: ");
    scanf ("%d", &x);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz [i][j] == x)
            {
                printf ("O numero %d foi encontrado na coordenada %d x %d\n", x, i, j);
                teste++;
            }
        }
    }

    if (teste == 0)
    {
        printf ("O numero nao foi encontrado");
    }

    return 0;
}