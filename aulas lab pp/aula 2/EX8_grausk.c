/*08. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula
de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/
#include <stdio.h>
int main () {
    float K, C;
    printf ("Digite uma temperatura em kelvin: \n");
    scanf ("%f", &K);
    C = K - 273.15;
    printf ("A temperatura em graus celsius eh de: %f", C);

    return 0;
}