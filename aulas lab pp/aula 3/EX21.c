/*21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção*/

#include <stdio.h>
int main () 
{
    float A, B;
    int SINAL;
    
    printf ("Escolha a opcao:\n1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    scanf ("%d", &SINAL);
    
    switch (SINAL)
        {
        case 1 :
            printf ("Voce escolheu SOMA. Digite dois numeros para operacao: \n");
            scanf ("%f%f", &A, &B);
            printf ("A soma dos numeros eh %.1f.", A+B);
            break;

        case 2 :
            printf ("Voce escolheu SUBTRACAO. Digite dois numeros para operacao: \n");
            scanf ("%f%f", &A, &B);

            if (A > B)
            {
                printf ("A subtracao dos numeros eh %.1f.", A-B);    
            }
            else
            {
                printf ("A subtracao dos numeros eh %.1f.", B-A);
            }

            break;

        case 3 :
            printf ("Voce escolheu MULTIPLICACAO. Digite dois numeros para operacao: \n");
            scanf ("%f%f", &A, &B);
            printf ("A multiplicacao dos numeros eh %.1f.", A*B);
            break;

        case 4 :
            printf ("Voce escolheu DIVISAO. Digite dois numeros para operacao: \n");
            scanf ("%f%f", &A, &B);
            
            if (B == 0)
            {
                printf ("Nao ha divisao por 0.");
            }
            else
            {
                printf ("A divisao dos numeros eh %.2f.", (float) A/B);
            }

            break;

        default :
            printf ("Operacao invalida!");
            break;
        }    

    return 0;
}