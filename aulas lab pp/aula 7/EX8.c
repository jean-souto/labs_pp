/*8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/
#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j;
    char troca [200], antiga, nova;

    printf ("Digite uma frase: ");
    fgets (troca, 200, stdin);

    printf ("Digite a letra a ser encontrada: ");
    scanf (" %c", &antiga);

    printf ("Digite a letra a nova letra: ");
    scanf (" %c", &nova);

    j = strlen (troca);

    for (i = 0; i < j; i++)
    {
        if (troca[i] == antiga)
        {
            troca[i] = nova;
        }
    }

    printf ("Traducao: ");
    fputs (troca, stdout);

    return 0; 
}