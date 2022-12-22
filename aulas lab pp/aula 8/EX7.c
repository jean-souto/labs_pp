/*7. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.*/
#include <stdio.h>

struct lista
{
    char nome [50];
    char end [50];
    char tel [12];
};
typedef struct lista lista;

int main ()
{
    lista list[5];
    int i, j, k;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o nome: ");
        setbuf (stdin, NULL);
        fgets (list[i].nome, 50, stdin);

        printf ("\nDigite o endereco: ");
        setbuf (stdin, NULL);
        fgets (list[i].end, 50, stdin);

        printf ("Digite o numero de telefone: ");
        setbuf (stdin, NULL);
        fgets (list[i].tel, 12, stdin);
    }

    //TERMINAR 


}