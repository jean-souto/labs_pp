/*6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia
32 dos caracteres cujo código ASCII está entre 97 e 122.*/
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
        if (ascii[i] >= 'a' && ascii[i] <= 'z')
        {
            ascii[i] = ascii[i] - 32;
        }
    }

    printf ("Traducao: ");
    fputs (ascii, stdout);

    return 0; 
}