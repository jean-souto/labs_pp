/*36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um
cilindro circular é calculado por meio da seguinte fórmula: V =  * raio2 * altura, onde  =
3.141592.*/
#include <stdio.h>
#define PI 3.141592
int main () {
    float h, V, R;
    printf ("Digite o valor da altura e do raio, respectivamente: \n");
    scanf ("%f%f", &h, &R);
    V = PI * (R*R) * h;
    printf ("O volume eh igual a %.1f.", V);

    return 0;
}