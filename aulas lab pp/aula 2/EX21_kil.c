/*21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.*/
#include <stdio.h>
int main () {
    float kil, lib;
    printf ("Digite um peso em libras: ");
    scanf ("%f", &lib);
    kil = lib*0.45;
    printf ("O peso em kilos eh de: %0.2f", kil);


    return 0;
}