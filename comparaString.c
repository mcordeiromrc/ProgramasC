#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Como comparar duas Strings com a função strcmp()
    0 -> as strings são iguais
    -1 -> a string1 for menor que a string2
    1 - quando a str1 for maior que a str2
*/
//Alterado no GitHub
int main(){

    char palavra1[50] = {"bola"};
    char palavra2[50] = {"abacate"};

    printf("\n\nResultado: %d\n\n", strcmp(palavra1, palavra2));

    return 0;
}
