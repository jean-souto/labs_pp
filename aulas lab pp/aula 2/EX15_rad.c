/*15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
G = R*180/, sendo G o ângulo em graus e R em radianos e  = 3.141592.*/

#include <stdio.h>
int main () {
    float grau, rad;
    printf ("Digite um angulo em rad: ");
    scanf ("%f", &rad);
    grau = rad*(180/3.14);
    printf ("O angulo em graus eh de: %f", grau);

    return 0;
}