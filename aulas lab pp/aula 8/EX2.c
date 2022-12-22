/*2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura.*/
#include <stdio.h>

struct dados 
{
    char nome [50];
    int idade;
    char end [100];
};
typedef struct dados dados;

int main ()
{
    dados x;

    printf ("Digite o nome: ");
    setbuf (stdin, NULL);
    fgets(x.nome, 50, stdin);

    printf ("Digite a idade: ");
    scanf ("%d", &x.idade);

    printf ("Digite o endereco: ");
    setbuf (stdin, NULL);
    fgets(x.end, 100, stdin);

    return 0;
}