/*4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
dada por esse caractere.*/
#include <stdio.h>
#include <string.h>

int main ()
{
    char vogais [150], subs;
    int i, j, soma = 0;

    printf ("Digite uma frase: ");
    fgets (vogais, 150, stdin);

    j = strlen (vogais);

    for (i = 0; i < j; i++)
    {
        if (vogais[i] == 'a' || vogais[i] == 'e' || vogais[i] == 'i' || vogais[i] == 'o' || vogais[i] == 'u')
        {
            soma++;
        }
    }

    printf ("Ha %d vogais na frase digitada.", soma);

    printf ("\nDigite um caractere para substituicao: ");
    scanf ("%c", &subs);

    for (i = 0; i < j; i++)
    {
        if (vogais[i] == 'a' || vogais[i] == 'e' || vogais[i] == 'i' || vogais[i] == 'o' || vogais[i] == 'u')
        {
            vogais [i] = subs;
        }
    }

    printf ("Nova frase: \n");
    fputs (vogais, stdout);

    return 0;
}