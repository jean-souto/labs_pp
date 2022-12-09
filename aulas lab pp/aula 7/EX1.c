/*1. Faça um programa que leia uma string e a imprima.*/
#include <stdio.h>

int main ()
{
    char str [1000];

    printf ("Digite uma frase: ");
    fgets (str, 1000, stdin);

    printf ("A frase digitada foi: %s", str);

    return 0;
}