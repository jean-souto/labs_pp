/*17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 =
(basemaior + basemenor) ∗ altura
2*/
#include <stdio.h> 
int main ()
{
    float baseM, basem, h, area;
    printf ("Digite o valor da base maior, da base menor e da altura, respectivamente: \n");
    scanf ("%f%f%f", &baseM, &basem, &h);
    area = ((baseM + basem) * h)/2;
    printf ("A area do trapezio eh %.1f.", area);

    return 0;
}