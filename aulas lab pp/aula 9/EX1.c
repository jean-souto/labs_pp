/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável
usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/

#include <stdio.h>

int main ()
{
    int i = 1, *p1;
    float f = 0.5, *p2;
    char c = 'h', *p3;

    p1 = &i;
    p2 = &f;
    p3 = &c;

    printf ("Digite dois numeros e uma letra: ");
    scanf ("%d%f", p1, p2);
    scanf (" %c", p3);

    printf ("inteiro: %d, real: %.2f, caracter: %c", *p1, *p2, *p3);

    return 0;
}