/*8. Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação:
hipotenusa = √𝑎
2 + 𝑏
2. Faça uma função que receba os valores de a e b e calcule o valor
da hipotenusa através da equação.*/
#include <stdio.h>
#include <math.h>

float hipotenusa (float catA, float catB);

int main ()
{
    float cAt, cBt;

    printf ("Digite o cateto A e o cateto B: ");
    scanf ("%f%f", &cAt, &cBt);

    printf ("A hipotenusa eh %.2f", hipotenusa (cAt, cBt));

    return 0;
}

float hipotenusa (float catA, float catB)
{
    float hip;

    hip = sqrt ( (pow(catA, 2) + pow(catB, 2)) );

    return hip;
}