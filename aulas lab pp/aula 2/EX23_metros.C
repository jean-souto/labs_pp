/*23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.*/

#include <stdio.h>
int main () {
    float jard, m;
    printf ("Digite um comprimento em metros: ");
    scanf ("%f", &m);
    jard = m/0.91;
    printf ("O comprimento em jardas eh de: %0.2f", jard);


    return 0;
}