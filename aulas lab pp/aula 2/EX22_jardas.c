/*22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.*/
#include <stdio.h>
int main () {
    float jard, m;
    printf ("Digite um comprimento em jardas: ");
    scanf ("%f", &jard);
    m = jard*0.91;
    printf ("O comprimento em metros eh de: %0.2f", m);


    return 0;
}