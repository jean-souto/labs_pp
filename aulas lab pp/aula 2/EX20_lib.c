/*20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.*/
#include <stdio.h>
int main () {
    float kil, lib;
    printf ("Digite um peso em kilos: ");
    scanf ("%f", &kil);
    lib = kil/0.45;
    printf ("O peso em libras eh de: %0.2f", lib);


    return 0;
}