/*17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas.*/
#include <stdio.h>
int main () {
    float pol, cent;
    printf ("Digite um valor em cm: ");
    scanf ("%f", &cent);
    pol = cent/2.54;
    printf ("O comprimento em polegadas eh de %0.2f.", pol);

    return 0;
}