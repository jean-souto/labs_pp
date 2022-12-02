/*7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a
cartela gerada.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    int bingo [5][5];
    int i, j, k, l, constante = 1; 

    srand (time(NULL));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            bingo[i][j] = rand () % 99;
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        { 
            for (k = 0; k < 5; k++)
            {
                for (l = 0; l < 5; l++)
                {
                    do 
                    {    
                        if ((bingo[i][j] == bingo [k][l]) && (i != k) && (j != l))
                        {
                            bingo[i][j] = rand () % 99;
                        }
                        else
                        {
                            constante = 0;
                        }
                    }while (constante == 1);             
                }
            }
        }
    }


    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf ("  %d  ", bingo[i][j]);
        }
        printf ("\n");
    }

    return 0;
}