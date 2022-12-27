#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[50] = {"Bom dia simpatia!"};

    printf("\nAntes: %s\n", palavra);

    strupr(palavra);
    printf("\nMaiusculas: %s\n", palavra);

    strlwr(palavra);
    printf("\nMinusculas: %s\n", palavra);

    return 0;
}