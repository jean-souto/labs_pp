/*35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + b2. Faça um programa que receba os valores de a e b e calcule o valor da
hipotenusa através da equação. Imprima o resultado dessa operação.*/
#include <stdio.h>
#include <math.h>
int main () {
    float A, B, H;
    printf ("Digite o valor dos catetos: \n");
    scanf ("%f%f", &A, &B);
    H = sqrt((A*A) + (B*B));
    printf ("A hipotenusa eh igual a %.1f.", H);

    return 0;
}