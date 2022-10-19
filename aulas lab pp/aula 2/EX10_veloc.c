/*10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M
em m/s.*/
#include <stdio.h>
int main () {
    float M, K;
    printf ("Digite uma velocidade em km/h: \n");
    scanf ("%f", &K);
    M = K/3.6;
    printf ("A mesma velocidade em m/s eh de: %f", M);

    return 0;
}