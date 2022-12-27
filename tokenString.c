#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[60] = {"Bom dia simpatia meu nome eh Marcio Roberto Cordeiro"};
    char *pt;

    pt = strtok(palavra, " ");
    while (pt)
    {
        printf(": %s", pt);
        pt = strtok(NULL, " ");
    }
    
    return 0;
}