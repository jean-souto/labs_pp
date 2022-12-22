/*5. Considerando a estrutura
struct vetor {
float a;
float b;
float c;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois
vetores.*/
#include <stdio.h>

struct vetor1 
{
    float a, b, c;
};
typedef struct vetor1 vetor1;

int main ()
{
    vetor1 vet1, vet2, vetres;

    printf ("Digite os valores de V1: ");
    scanf ("%f%f%f", &vet1.a, &vet1.b, &vet1.c);

    printf ("Digite os valores de V2: ");
    scanf ("%f%f%f", &vet2.a, &vet2.b, &vet2.c);

    vetres.a = vet1.a + vet2.a;
    vetres.b = vet1.b + vet2.b;
    vetres.c = vet1.c + vet2.c;

    printf ("O resultado da soma eh %.2f, %.2f e %.2f.", vetres.a, vetres.b, vetres.c);

    return 0;
}