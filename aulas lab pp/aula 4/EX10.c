/*10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
#include <stdio.h>
#define a1 2
#define n 50
#define r 2
int main ()
{
    int a50 = 0, soma = 0;

    a50 = a1 + ((n-1)*r);
    soma = (n * (a1 + a50))/2;

    printf ("A soma dos numeros eh %d!", soma);

    return 0;
}