/*7. Crie um programa que contenha uma função que permita passar por parâmetro dois
números inteiros A e B. A função deverá calcular a soma entre estes dois números e
armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.*/

#include <stdio.h>

int dobro (int *a, int *b)
{
    *a = (*a)+(*b);

}

int main ()
{
    int a, b, c;

    printf ("Digite a e b: ");
    scanf ("%d%d", &a, &b);

    dobro (&a, &b);

    printf ("a %d b %d", a, b);

    return 0;
}