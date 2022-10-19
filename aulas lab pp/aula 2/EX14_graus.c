/*14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
R = G*/180, sendo G o ângulo em graus e R em radianos e  = 3.141592.*/
#include <stdio.h>
int main () {
    float grau, rad;
    printf ("Digite um angulo em graus: ");
    scanf ("%f", &grau);
    rad = grau * (3.14/180);
    printf ("O angulo em radianos eh de: %f", rad);

    return 0;
}