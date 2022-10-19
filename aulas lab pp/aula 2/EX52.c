/*52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do
prêmio com base no valor investido.*/
#include <stdio.h>
int main () {
    float premio, ap1, ap2, ap3, constante, p1, p2, p3;
    printf ("Digite o valor do premio e quanto cada um apostou: \n");
    scanf ("%f %f %f %f", &premio, &ap1, &ap2, &ap3);
    constante = premio/(ap1 + ap2 + ap3);
    p1 = constante*ap1; p2 = constante*ap2; p3 = constante*ap3;
    printf ("Cada um recebera, respectivamente, %.2f, %.2f e %.2f.", p1, p2, p3);

    return 0;
}