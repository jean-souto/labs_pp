/*3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/
#include <stdio.h>

int main ()
{
    int x, y;

    printf ("Digite dois numeros: ");
    scanf ("%d%d", &x, &y);

    if (&x > &y)
    {
        printf ("%d", x);
    }
    else
    {
        printf ("%d", y);
    }
    return 0;
}