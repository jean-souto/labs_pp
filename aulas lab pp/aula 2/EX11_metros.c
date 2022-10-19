/*11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e
M em m/s.*/

#include <stdio.h>
int main () {
    float M, K;
    printf ("Digite uma velocidade em m/s: \n");
    scanf ("%f", &M);
    K = M*3.6;
    printf ("A mesma velocidade em km/h eh de: %0.2f", K);

    return 0;
}
