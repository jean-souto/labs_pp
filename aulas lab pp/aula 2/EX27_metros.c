/*27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2
. A fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em
hectares.*/
#include <stdio.h>
int main () {
    float m2, hectare;
    printf ("Digite uma area em hectares: ");
    scanf ("%f", &hectare);
    m2 = hectare*10000;
    printf ("A area em metros quadrados eh de: %.2f", m2);


    return 0;
}