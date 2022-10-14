/*13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.*/
#include <stdio.h> 
int main () {
    float mi, km;
    printf ("Digite uma distancia em km: ");
    scanf ("%f", &km);
    mi = km/1.61;
    printf ("A distancia em milhas eh de: %0.2f", mi);


    return 0;
}