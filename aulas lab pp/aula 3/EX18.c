/*18. Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/
// + = 43 - = 45 x = 120 / = 47 ^ = 94 r = 114
#include <stdio.h>
#include <math.h>
int main () 
{
    float A, B;
    char SINAL;
    
    printf ("Digite qual operacao voce deseja realizar (+, -, x, /, ^, r): ");
    scanf (" %c", &SINAL);
    
    switch (SINAL)
        {
        case 43 :
            printf ("Voce escolheu SOMA. Digite dois numeros para operacao: \n");
            scanf ("%f%f", &A, &B);
            printf ("A soma dos numeros eh %.1f.", A+B);
            break;

        case 45 :
            printf ("Voce escolheu SUBTRACAO. Digite dois numeros para operacao: \n");
            scanf ("%f%f", &A, &B);
            printf ("A subtracao dos numeros eh %.1f.", A-B);
            break;

        case 120 :
            printf ("Voce escolheu MULTIPLICACAO. Digite dois numeros para operacao: \n");
            scanf ("%f%f", &A, &B);
            printf ("A multiplicacao dos numeros eh %.1f.", A*B);
            break;

        case 47 :
            printf ("Voce escolheu DIVISAO. Digite dois numeros para operacao: \n");
            scanf ("%f%f", &A, &B);
            
            if (B == 0)
            {
                printf ("Nao ha divisao por 0.");
            }
            else
            {
                printf ("A divisao dos numeros eh %.1f.", A/B);
            }
            break;

        case 94 :
            printf ("Voce escolheu POTENCIACAO. Digite um numero e sua potencia: \n");
            scanf ("%f%f", &A, &B);
            printf ("A potenciacao dos numeros eh %.1f.", pow(A, B));
            break;

        case 114 :
            printf ("Voce escolheu RADICIACAO. Digite um numero para operacao (raiz quadrada): \n");
            scanf ("%f", &A);
            printf ("A raiz quadrada do numero eh %.1f.", sqrt(A));
            break;

        default :
            printf ("Operacao invalida!");
            break;
        }    

    return 0;
}