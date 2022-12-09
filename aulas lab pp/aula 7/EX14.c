/*14. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N.
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.*/
#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j, k;
    char str1[400], str2[200];

    printf ("Digite a primeira frase: ");
    fgets (str1, 200, stdin);

    printf ("Digite a segunda frase: ");
    fgets (str2, 200, stdin);

    printf ("\nDigite a quantidade desejada de termos da segunda frase: ");
    scanf ("%d", &k);

    str2[k] = '\0';

    strcat (str1, str2);

    printf ("O resultado eh:\n");
    fputs (str1, stdout);

    return 0;
}