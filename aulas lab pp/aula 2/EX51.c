/*v51. Escreva um programa que leia as coordenadas x e y de pontos no R
2 e calcule sua distância
da origem (0, 0).*/
#include <stdio.h>
#include <math.h>
int main () {
	int x, y;
	float disto;
	printf("Digite as coordenadas x e y do ponto: \n");
	scanf("%d%d", &x, &y);
	disto = sqrt(pow(x,2) + pow(y,2));
	printf("A distancia do ponto ate a origem eh: %.2f", disto);
	
   return 0;
}