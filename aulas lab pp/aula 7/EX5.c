/*5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/
#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j;
    char ascii [200];

    printf ("Digite uma frase: ");
    fgets (ascii, 200, stdin);

    j = strlen (ascii);

    for (i = 0; i < j; i++)
    {
        if (ascii[i] >= 'A' && ascii[i] <= 'Z')
        {
            ascii[i] = ascii[i] + 32;
        }
    }

    printf ("Traducao: ");
    fputs (ascii, stdout);

    return 0; 
}