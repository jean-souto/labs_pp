/*10. Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um
vetor de double, depois use a função MALLOC para reservar (alocar) o espaço de memória
de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho maior ou igual
a 10 elementos. Use este vetor dinâmico como um vetor comum, atribuindo aos 10
primeiros elementos do vetor valores aleatórios (usando a função rand) entre 0 e 100. Exiba
na tela os valores armazenados nos 10 primeiros elementos do vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main ()
{
    srand (time (NULL));

    double *vet;
    int x, i;

    printf ("Digite o espaco que devera ser alocado: ");
    scanf ("%d", &x);

    if (x < 10)
    {
        vet = (double*) malloc (10*sizeof(double));
    }
    else
    {
        vet = (double*) malloc (x*sizeof(double));
    }

    for (i = 0; i < 10; i++)
    {
        Sleep (50);
        vet[i] = rand() % 100;
        printf (" %.2lf ", vet[i]);
    }
    return 0;
}