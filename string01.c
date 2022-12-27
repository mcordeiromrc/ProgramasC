#include <stdio.h>
#include <stdlib.h>

int main(){

    char palavras[55];

    printf("Digite seu nome: ");
    fgets(palavras, 50, stdin);

    printf("%s\n\n", palavras);

    return 0;
}