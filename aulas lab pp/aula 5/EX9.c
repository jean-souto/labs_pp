/*Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do
cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 𝑉 =
 ∗ 𝑟𝑎𝑖𝑜2
∗ 𝑎𝑙𝑡𝑢𝑟𝑎, onde  = 3.141592.*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592

float volume (float alt, float raio);

int main ()
{
    float raio, alt;

    printf ("Digite o raio e a altura do cilindro: ");
    scanf ("%f%f", &raio, &alt);

    printf ("O volume eh %.2f", volume (raio, alt));
    
    return 0;
}

float volume (float raio, float alt)
{
    float vol;

    vol = (PI * pow(raio, 2)) * alt; 

    return vol;
}