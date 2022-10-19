/*50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual*/
#include <stdio.h>
int main () {
    int anonasc, idade, ano;
    printf ("Digite sua idade e o ano atual: \n");
    scanf ("%d%d", &idade, &ano);
    anonasc = ano - idade;
    printf ("Voce nasceu em %d.", anonasc);


    return 0;
}