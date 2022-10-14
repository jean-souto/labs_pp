/*12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.*/
#include <stdio.h>
int main () {
    float mi, km;
    printf ("Digite uma distancia em milhas: ");
    scanf ("%f", &mi);
    km = 1.61*mi;
    printf ("A distancia em km eh de: %0.2f", km);


    return 0;
}