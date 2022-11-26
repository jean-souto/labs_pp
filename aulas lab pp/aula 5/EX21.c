/*21. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5):*/
#include <stdio.h>

void pontos (int nun)
{
    int i, j;

    for (i = 1; i <= nun; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf ("!");
        }
        
        printf ("\n");

    }
}

int main ()
{
    int nun;

    printf ("Digite um numero: ");
    scanf ("%d", &nun);

    pontos (nun);

    return 0;
}