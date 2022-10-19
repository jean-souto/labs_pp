/*26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em
hectares.*/
#include <stdio.h>
int main () {
    float m2, hectare;
    printf ("Digite uma area em metros quadrados: ");
    scanf ("%f", &m2);
    hectare = m2*0.0001;
    printf ("A area em hectares eh de: %.2f", hectare);


    return 0;
}