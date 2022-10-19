#include <stdio.h>
int main () {
    float F, C;
    printf ("Quantos graus (F) esta fazendo hoje? \n");
    scanf ("%f", &F);
    C = 5 * ((F - 32)/9);
    printf ("A temperatura hoje, em graus celsius, eh de: %.2f graus.", C);

    return 0;
}