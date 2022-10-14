/*16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A
fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas.*/
#include <stdio.h>
int main () {
    float pol, cent;
    printf ("Digite um valor em polegadas: ");
    scanf ("%f", &pol);
    cent = pol*2.54;
    printf ("O comprimento em cm eh de %0.2f.", cent);


    return 0;
}