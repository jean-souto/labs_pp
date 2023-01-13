/*17. Escreva uma função que dado um número real passado como parâmetro, retorne a parte
inteira e a parte fracionária deste número. Escreva um programa que chama esta função.
Protótipo:
void frac(float num, int *inteiro, float *frac);*/

#include <stdio.h>

void fraci(float num, int *inteiro, float *frac)
{
    int j;
    float k;

    *inteiro = (int)num/1;
    *frac = num-(1*(*inteiro));

}

int main ()
{
    float nun, frac;
    int inter;

    printf ("Digite um numero real: ");
    scanf ("%f", &nun);

    fraci (nun, &inter, &frac);

    printf ("%d %.2f", inter, frac);

    return 0;
}