/*13. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda como da esquerda para a direita.*/
#include <stdio.h>
#include <string.h>

int main ()
{
    int i = 1, j, k;
    char entrada[150];
    char saida[150];

    printf ("digite um frase: ");
    fgets(entrada, 150, stdin);

    j = strlen (entrada);
    
    for (i = 0; i < j; i++)
    {
        if (entrada[i] == ' ' || entrada[i] == '.' || entrada[i] == ',')
        {
            for (k = i; k < j; k++)
            {
                entrada[k] = entrada[k+1];
                i = 0;
            }
        }
    }

    printf ("\nSua entrada foi: ");
    fputs (entrada, stdout);
    printf ("\nSua saida foi: ");
    fputs (saida, stdout);

    return 0;
}