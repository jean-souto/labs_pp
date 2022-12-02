/*6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que
são primos e suas respectivas posições no vetor*/
#include <stdio.h>

int main()
{
    int vetor[10];
    int x, n, k, controle;


    for(k = 0; k < 10; k++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor[k]);
    }

    for(k = 0; k < 10; k++)
    {
        for(n = 1, controle = 0; n <= vetor[k]; n++)
        {
            if(vetor[k]%n == 0)
            {
                controle++;
            }
        }

        if(controle == 2)
        {
            printf("\n%d eh primo e sua posicao eh %d", vetor[k], k);
        }
    }

    return 0;
}
