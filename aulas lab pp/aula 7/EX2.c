/*2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3*/
#include <stdio.h>
#include <string.h>

int main ()
{
    char str [100];
    int i, j, contagem = 0;

    printf ("Digite uma sequencia de 0 e 1: ");
    fgets (str, 100, stdin);

    j = strlen(str);

    for (i = 0; i < j; i++)
    {
        if (str[i] == '1')
        {
            contagem++;
        }
    }

    printf ("Ha %d numeros um na string.", contagem);

    return 0;
}