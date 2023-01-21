/*4. Faça um programa que receba do usuário o tamanho de uma string e chame uma função
para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo
dessa string. O programa imprime a string sem suas vogais.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* alocar (int tam)
{   
    char *str;
    str = (char*) malloc (tam*sizeof(char));
    return (str);
}

int main ()
{
    int i, tam, tamstr;
    char *str;

    printf ("Digite o tamanho da string: ");
    scanf ("%d", &tam);

    str = alocar (tam);

    printf ("\nDigite a string: ");
    setbuf (stdin, NULL);
    fgets (str, tam, stdin);

    tamstr = strlen(str);

    for (i = 0; i < tamstr; i++)
    {   
        if ((str[i] == 'a') || (str[i] == 'A') || (str[i] == 'e') || (str[i] == 'E') || (str[i] == 'i') || (str[i] == 'I') || (str[i] == 'o') || (str[i] == 'O') || (str[i] == 'u') || (str[i] == 'U'))
        {
            str[i] = 127;
        }
    }

    fputs (str, stdout);

    return 0;
}