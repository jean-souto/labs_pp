/*53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem
como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.*/
#include <stdio.h>
int main () {
    float ladoA, ladoB, tela, total;
    printf ("Digite o comprimento e a largura do terreno em metros: \n");
    scanf ("%f%f", &ladoA, &ladoB);
    printf ("Digite o preco do metro da tela: \n");
    scanf ("%f", &tela);
    total = (((ladoA*2) + (ladoB*2))*tela);
    printf ("O custo para cercar o terreno sera de %.2f.", total);

    return 0;
}