/*9. Faça um programa que preencha uma matriz de string com os modelos de cinco carros
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para
percorrer uma distância de 1.000 quilômetros.*/

#include <stdio.h>
#include <string.h>

int main ()
{
    int carros[5], i, j, k, maior;
    char nomes [5][50];

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o nome dos modelos: ");
        fgets (nomes[i], 50, stdin);
    }

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o consumo da marca %s em km\\l: ", nomes[i]);
        scanf ("%d", &carros[i]);
    }

    maior = 0;

    for (i = 0; i < 5; i++)
    {
        if (maior < carros[i])
        {
            maior = carros[i];
            j = i;
        }
    }

    printf ("O carro mais economico eh %s", nomes[j]);

    for (i = 0; i < 5; i++)
    {
        k = 1000/carros[i];

        printf ("\nO carro da marca %s gasta %d litros para percorrer 1000km", nomes[i], k);
    }

    return 0;
}