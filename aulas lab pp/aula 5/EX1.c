/*1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro*/
#include <stdio.h>

int dobro (int a)
{
    return a*2;
}

int main () 
{
    int a;

    printf ("Digite um numero: ");
    scanf ("%d", &a);

    printf ("O dobro do numero eh: %d", dobro (a));

    return 0;
}