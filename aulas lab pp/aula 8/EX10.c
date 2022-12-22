/*10. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
deseja buscar. Mostre os dados de todos os livros encontrados.*/
#include <stdio.h>

typedef struct
{
    char nome[30];
    char autor[15];
    int ano;
}books;

int main ()
{
    char pesquisa[30];
    books biblioteca[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o titulo: ");
        setbuf (stdin, NULL);
        fgets (biblioteca[i].nome, 30, stdin);

        printf ("Digite o autor: ");
        setbuf (stdin, NULL);
        fgets (biblioteca[i].autor, 15, stdin);

        printf ("Digite o ano: ");
        scanf ("%d", &biblioteca[i].ano);
    }

    printf ("Digite o titulo para pesquisa: ");
    setbuf (stdin, NULL);
    fgets (pesquisa, 30, stdin);

    for (i = 0; i < 5; i++)
    {
        if (strcmp (biblioteca[i].nome, pesquisa) == 0)
        {
            fputs (biblioteca[i].nome, stdout);
            fputs (biblioteca[i].autor, stdout);
            printf ("ano de lancamento: %d\n", biblioteca[i].ano);
        }
    }


    return 0;
}
