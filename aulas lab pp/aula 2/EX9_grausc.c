/*09. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula
de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/
#include <stdio.h> 
int main () {
float K, C;
    printf ("Digite uma temperatura em graus celsius: \n");
    scanf ("%f", &C);
    K = C + 273.15;
    printf ("A temperatura em kelvin eh de: %f", K);

    return 0;
}