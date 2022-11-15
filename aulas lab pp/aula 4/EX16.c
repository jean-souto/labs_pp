/*16. Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
 Adição (opção 1)
 Subtração (opção 2)
 Multiplicação (opção 3)
 Divisão (opção 4).
 Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída
(opção 5).*/
#include <stdio.h>
int main ()
{
    int option;
    float a, b;

    while (option != 5)
    {
        do 
        {
            printf ("\nSelecione uma operacao: \n\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\n");
            scanf ("%d", &option);

            if (option < 1 || option > 5)
            {
                printf ("Operacao invalida!\n");
            }

        }
        while (option < 1 || option > 5);
        
        switch (option)
        {
        case 1 :
            
            printf ("Digite os numeros para operacao de adicao: \n");
            scanf ("%f%f", &a, &b);
            printf ("O resultado eh %.2f!", a+b);

            break;

        case 2 :

            printf ("Digite os numeros para operacao de subtracao: \n");
            scanf ("%f%f", &a, &b);
            printf ("O resultado eh %.2f!", a-b);
            
            break;

        case 3 :

            printf ("Digite os numeros para operacao de multiplicacao: \n");
            scanf ("%f%f", &a, &b);
            printf ("O resultado eh %.2f!", a*b);
            
            break;

        case 4 :

            printf ("Digite os numeros para operacao de divisao: \n");
            scanf ("%f%f", &a, &b);
            printf ("O resultado eh %.2f!", a/b);
            
            break;

        case 5 : 

            printf ("Obrigado, volte sempre!");

            break;

        }

    }

    return 0;
}