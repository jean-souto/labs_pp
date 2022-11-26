/*5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo
que o raio é passado por parâmetro. 4/3pir3*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

float raio (float raio);

int main ()
{
    float r, volume;

    printf ("Digite o raio da esfera: ");
    scanf ("%f", &r);

    printf ("O volume eh %.2f u.v.", raio (r));

    return 0;
}

float raio (float raio)
{
    float volume;

    volume = ((4*PI) * pow(raio, 3) /3);

    return volume;
}