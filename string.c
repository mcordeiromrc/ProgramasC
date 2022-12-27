#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30],sobrenome[50];

    printf("Digite o Nome: ");
    scanf("%30[^\n]", nome);//Usando o artificio %[^\n] indica que será lido tudo até que a tecla Enter seja digitada.
    printf("Digite o Sobrenome: ");
    scanf(" %[^\n]", sobrenome);

    printf("Ola %s %s\n\n", nome, sobrenome);
}