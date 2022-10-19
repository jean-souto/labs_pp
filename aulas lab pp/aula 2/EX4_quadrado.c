#include <stdio.h>
int main () {
    float n1, quad;
    printf ("Digite um numero real: \n");
    scanf ("%f", &n1);
    quad = n1 * n1;
    printf ("O quadrado do numero digitado eh: %.2f", quad);

    return 0;
}