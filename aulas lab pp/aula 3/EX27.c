/*27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
categorias:*/
#include <Stdio.h>
int main () 
{
    int idade;

    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf ("Voce esta na categoria infantil A.");
    }
    else
    {
        if (idade >= 8 && idade <= 10)
        {
            printf ("Voce esta na categoria infantil B.");
        }
        else
        {
            if (idade >= 11 && idade <= 13)
            {
                printf ("Voce esta na categoria juvenil A.");
            }
            else
            {
                if (idade >= 14 && idade <= 17)
                {
                    printf ("Voce esta na categoria juvenil B.");
                }
                else
                {
                    if (idade >= 18)
                    {
                        printf ("Voce esta na categoria senior.");
                    }
                    else
                    {
                        printf ("Voce nao pode competir.");
                    }
                }
            }
        }
    }

    return 0;
}