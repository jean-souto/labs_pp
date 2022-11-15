/*17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce
3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico.*/ 
#include <stdio.h>
int main ()
{
    float chico = 1.5, ze = 1.1;
    int x = 1;

    do
    {
        if (chico > ze)
        {
            chico = chico + 0.02;
            ze = ze + 0.03;
            x++;
        }
    }
    while (ze < chico);

    printf ("Serao necessarios %d anos!", x);

    return 0;
}