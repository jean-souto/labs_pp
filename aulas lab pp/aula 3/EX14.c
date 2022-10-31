/*14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.*/ 
#include <stdio.h>
int main ()
{
    float n1, n2, n3, med;
    
    printf ("Digite, em sequencia, as notas 1, 2 e 3: \n");
    scanf ("%f%f%f", &n1, &n2, &n3);

    med = ( (n1*2)+(n2*3)+(n3*5) ) / 10;

    if (med >= 0 && med <= 2.9) 
    {
        printf ("Voce esta reprovado.");
    }
    else
    {
        if (med >= 3 && med <= 4.9) 
        {
            printf ("Voce esta de recuperacao.");
        }
        else
        {
            if (med > 4.9 && med <= 10.0) 
            {
                printf ("Voce foi aprovado!");
            }
            else
            {
                printf ("VALORES INVALIDOS");
            }
        }
    }

    return 0;
}