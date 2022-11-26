/*16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma
sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos
sinais de igual serão mostrados.*/

#include <stdio.h>

void linha (int nun);

int main ()
{
    int nun;

    printf ("Digite a quantidade de iguais: ");
    scanf ("%d", &nun);

    linha (nun);

    return 0;
}

void linha (int nun)
{
    int i;

    for (i = 1; i <= nun; i++)
    {
        printf ("=");
    }
}