/*14. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:
menor que 8 Venda o carro!
entre 8 e 14 Econômico!
maior que 14 Super econômico!*/

#include <stdio.h>

void kml (float dist, float litros);

int main ()
{
    float km, lit;

    printf ("Digite a distancia e os litros gastos: \n");
    scanf ("%f%f", &km, &lit);

    kml (km, lit); 

    return 0;
}

void kml (float dist, float litros)
{
    float kmporl;

    kmporl = dist/litros;

    if (kmporl < 8)
    {
        printf ("Venda o carro!!!");
    }
    else if (kmporl >= 8 && kmporl <= 14)
         {
            printf ("Economico!");
         }
         else
         {
            printf ("Super economico!!");
         }
}