/*15. Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o
resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse
ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os
caracteres C1 e C2 serão lidos pelo usuário;
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo
usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual
posição deve ser criada a substring e qual é o tamanho da substring.*/

#include <stdio.h>
#include <string.h>

int main ()
{

    int i, j, soma = 0, l, x, k, controle = 0;
    char s1[20], s2[20], option, carac, carac2;

    while (controle == 0)
    {

        do 
        {
            printf ("\nEscolha uma opcao: \n(a) Ler uma string S1 (tamanho máximo 20 caracteres)\n(b) Imprimir o tamanho da string S1\n(c) Comparar a string S1 com uma nova string S2 e imprimir o resultado da comparação\n(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação\n(e) Imprimir a string S1 de forma reversa\n(f) Contar quantas vezes um dado caractere aparece na string S1\n(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2\n(h) Verificar se uma string S2 é substring de S1\n(i) Retornar uma substring da string S1\n(j) Sair\n");
            scanf (" %c", &option);

        }while(!((option >= 'a' && option <= 'j') || (option >= 'A' && option <= 'J')));

        if (option == 'j' || option == 'J')
        {
            controle = 1;
        }

        switch (option)
        {
            case 'a' :
            case 'A' :
                printf ("Digite a frase: ");
                setbuf (stdin, NULL);
                fgets (s1, 20, stdin);
            break;

            case 'b' :
            case 'B' :
                i = strlen(s1);
                printf ("O tamanho da frase eh %d", i);
            break;

            case 'c' :
            case 'C' :
                printf ("Digite a frase para comparacao: ");
                setbuf (stdin, NULL);
                fgets (s2, 20, stdin);

                if (strcmp (s1, s2) == 0)
                {
                    printf ("As strings sao iguais");
                }
                else
                {
                    printf ("As strings sao diferentes");
                }
            break;

            case 'd' :
            case 'D' :
                printf ("Digite a frase para juncao: ");
                setbuf (stdin, NULL);
                fgets (s2, 20, stdin);

                strcat (s1, s2);

                fputs (s1, stdout);
            break;

            case 'e' :
            case 'E' :

                i = strlen (s1);

                for (; i >= 0; i--)
                {
                    printf ("%c", s1[i]);
                }
            break;

            case 'f' :
            case 'F' :
                printf ("Digite o caractere a ser contado: ");
                scanf (" %c", &carac);

                j = strlen (s1);

                for (i = 0; i < j; i++)
                {
                    if (s1[i] == carac)
                    {
                        soma++;
                    }
                }

                printf ("Ha %d caracteres %c na string", soma, carac);
            break;

            case 'g' :
            case 'G' :
                printf ("Digite o caractere a ser buscado: ");
                scanf (" %c", &carac);

                j = strlen (s1);
                soma = 0;

                for (i = 0; i < j; i++)
                {
                    if (s1[i] == carac && soma == 0)
                    {
                        printf ("Digite um caractere para substituicao: ");
                        scanf (" %c", &carac2);
                        s1[i] = carac2;
                        soma++;
                    }
                }

                fputs (s1, stdout);
            break;

            case 'h' :
            case 'H' :
                
                printf ("Digite a substring: ");
                setbuf (stdin, NULL);
                fgets (s2, 20, stdin);

                j = strlen (s1);
                k = strlen (s2);
                x = 0;

                // printf ("%d", k);

                for (i = 0; ((i < j) || (l != k-1)); i++)
                {
                    if (s2[x] == s1[i])
                    {
                        l++;
                        x++;
                        // printf ("opa");
                    }
                    else
                    {
                        l = 0;
                        x = 0;
                    }
                    if (l == k-1)
                    {
                        printf ("A substring esta inserida na string");
                        i = j;
                    }
                }

                if ((i != j) && (l != k-1))
                {
                    printf ("Nao esta inserida");
                }
            break;

            case 'i' :
            case 'I' :
                printf ("Digite um inicio e um fim para o intervalo: ");
                scanf ("%d%d", &i, &j);

                for (; i <= j; i++)
                {
                    printf("%c", s1[i]);
                }
            break;

            case 'j' :
            case 'J' :
                printf ("Obrigado!");
            break;

        }
    }

    return 0;
}