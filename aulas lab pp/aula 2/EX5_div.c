#include <stdio.h>
int main () {
    float n1, div;
    printf ("Digite um numero real: \n");
    scanf ("%f", &n1);
    div = n1/5;
    printf ("A quinta parte do numero eh: %0.2f", div);

    return 0;
}