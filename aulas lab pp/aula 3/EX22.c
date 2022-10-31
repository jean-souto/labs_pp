/*22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
 Ter pelo menos 65 anos;
 Ou ter trabalhado pelo menos 30 anos;
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos*/
#include <stdio.h>
int main () 
{
    int ser, ida;
    
    printf ("Digite sua idade: \n");
    scanf ("%d", &ida);
    
    printf ("Digite seu tempo de servico: \n");
    scanf ("%d", &ser);
    
    if (ida >= 65) 
    {
        printf ("Parabens, voce pode se aposentar por idade!");
    }
    else
    { 
        if (ser >= 30) 
        {
            printf ("Parabens, voce pode se aposentar por tempo de servico!");
        }
        else
        {
            if (ida >= 60 && ser >= 25) 
            { 
                printf ("Parabens, voce atingiu os requisitos para se aposentar!");
            }
            else
            { 
                printf ("Que pena. Voce ainda nao pode se aposentar.");
            }
        }
    }

    return 0;
}