/*11. Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o
segmento S[I..J].*/
#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j;
    char str[1000];

    printf ("Digite um frase: ");
    fgets(str, 1000, stdin);

    printf ("Digite um inicio e um fim para o intervalo: ");
    scanf ("%d%d", &i, &j);

    for (; i <= j; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}