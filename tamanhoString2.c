#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavras[55];

    printf("Divite qualquer coisa: ");
    fgets(palavras, 55, stdin);

    printf("Tamanho da palavra: %d\n", strlen(palavras));
    return 0;
}