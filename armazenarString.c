#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nomes[5][25];

    int l;

    for(l=0; l<5;l++){
        printf("Digite o nome da posicao: %d.: ", l);
        scanf("%25[^\n]", nomes[l]);
    }

    for(l=0;l<5;l++){
        printf("Nome %d eh: %s\n", l, nomes[l]);
    }
    return 0;
}