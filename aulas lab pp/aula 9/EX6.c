/*6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
de A na própria variável A e o dobro de B na própria variável B.*/

#include <stdio.h>

int dobro (int *a, int *b)
{
    *a = ((*a)*2);
    *b = ((*b)*2);

    return *a+*b;
}

int main ()
{
    int a, b, c;

    printf ("Digite a e b: ");
    scanf ("%d%d", &a, &b);

    c = dobro (&a, &b);

    printf ("%d", c);

    return 0;
}