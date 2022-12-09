/*3. Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/
#include <stdio.h>
#include <string.h>

int main ()
{
    char str [100];
    int i, j;

    printf ("Digite uma frase: ");
    fgets (str, 100, stdin);

    j = strlen(str);

    for (; j >= 0; j--)
    {
        printf ("%c", str[j]);
    }


    return 0;
}