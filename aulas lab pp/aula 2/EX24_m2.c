/*24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em
acres.*/

#include <stdio.h>
int main () {
    float m2, acres;
    printf ("Digite uma area em metros quadrados: ");
    scanf ("%f", &m2);
    acres = m2*0.000247;
    printf ("A area em acres eh de: %0.2f", acres);


    return 0;
}