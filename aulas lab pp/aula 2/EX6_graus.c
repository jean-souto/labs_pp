#include <stdio.h>
int main () {
    float F, C;
    printf ("Quantos graus (C) esta fazendo hoje? \n");
    scanf ("%f", &C);
    F = C * (9.0/5.0) + 32.0;
    printf ("A temperatura hoje, em graus fahrenheit, eh de: %.2f graus.", F);

    return 0;
}