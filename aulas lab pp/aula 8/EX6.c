/*6. Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
e exibidos na tela.*/

#include <stdio.h>
#include <string.h>

struct banco_dados
{
    int idade;
    int sector;
    char nome [50];
    char sexo;
    char document_just_numbers [12];
    char nasc_com_barras [11];
    char cargo [30];
    float salario;
};
typedef banco_dados banco_dados;

int main ()
{
    banco_dados trab;

    printf ("Bem vindo! Vamos fazer o seu cadastro.\n\n");
    
    printf ("Digite o seu nome completo: ");
    setbuf (stdin, NULL);
    fgets (trab.nome, 50, stdin);

    printf ("\nOtimo! Agora digite sua idade: ");
    scanf ("%d", &trab.idade);

    printf ("\nEsta quase acabando. Agora digite seu sexo (M ou F): ");
    setbuf (stdin, NULL);
    scanf (" %c", &trab.sexo);

    printf ("\nDigite seu CPF (somente os numeros): ");
    setbuf (stdin, NULL);
    fgets (trab.document_just_numbers, 12, stdin);

    printf ("\nDigite sua data de nascimento (colocando barras): ");
    setbuf (stdin, NULL);
    fgets (trab.nasc_com_barras, 11, stdin);

    do
    {
        printf ("\nPerfeito! Agora digite o codigo do seu setor: ");
        scanf ("%d", &trab.sector);
    } while (trab.sector < 0 || trab.sector > 99);

    printf ("\nDigite seu cargo no setor: ");
    setbuf (stdin, NULL);
    fgets (trab.cargo, 30, stdin);

    printf ("\nPor ultimo, digite seu salario: ");
    scanf ("%f", &trab.salario);

    printf ("As informacoes digitadas foram:\n\nNome: %s", trab.nome);
    printf ("Idade: %d\nSexo: %c", trab.idade, trab.sexo);   
    printf ("\nCPF: %s\nData de nascimento: %s", trab.document_just_numbers, trab.nasc_com_barras);   
    printf ("\nSetor: %d\nCargo: %s", trab.sector, trab.cargo);
    printf ("Salario: %.2f", trab.salario);

    return 0;
}