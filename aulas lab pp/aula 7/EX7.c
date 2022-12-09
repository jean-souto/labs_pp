/*7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/
#include <stdio.h>
#include <string.h>

int main ()
{
    char str[500];
    int i, j, k;

    printf ("Digite um frase: ");
    fgets (str, 500, stdin);

    j = strlen (str);

    for (i = 0; i < j; i++)
    {
        if (str[i] == ' ')
        {
            for (k = i; k < j; k++)
            {
                str[k] = str[k+1];
                i = 0;
            }
        }
    }

    printf ("A traducao eh: ");
    fputs (str, stdout);

    return 0;
}