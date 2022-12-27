#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Encontrar uma substring com a função strstr()
*/
int main(){
    char palavra[50] = {"Bom dia simpatia!"};
    char str[] = {"dia"};
    char *ponteiro;

    //procura pela substring str dentro da string palavra
    ponteiro = strstr(palavra, str);

    if(ponteiro)
        printf("\n%c%c%c\n", *ponteiro, *(ponteiro+1), *(ponteiro+2));
    else
        printf("\nPonteiro nulo.\n");
    
}