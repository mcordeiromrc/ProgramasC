#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //int tamL = 5, tamC = 4;
    int l, c, mat[5][4], trans[4][5];

    srand(time(NULL));
    //algoritmo que irá preencher as 5 linhas e 4 colunas da matriz mat[l][c]
    for(l = 0; l < 5; l++){//Loop será executado 5 vezes para percorrer as 5 linhas da matriz, só sendo executada após a finalização do loop interno
        //Loop será executado 4 vezes para percorrer as 4 colunas da matriz com números aleatórios gerados por rand().
        //ao final deste loop o programa irá retornar ao loop exterior para saltar para a próxima posição de linha da matriz.
        //processo este que será executado até todas as linhas e todas as colunas serem preenchidas.
        for(c = 0; c < 4; c++){
            mat[l][c] = rand() % 500;//preenche a matriz em sua linha e coluna atual com um valor aleatório gerado por rand()
        }
    }

    printf("\nMatriz original:\n");// Imprime esta mensagem ao usuário e pula uma linha
    //O algoritmo abaixo é basicamente parecido com o algorítmo de cima, só que este lê o conteúdo de cada posição da matriz e imprime na tela.
    for(l = 0; l < 5; l++){
        for(c = 0; c < 4; c++){
            printf("%3d ", mat[l][c]);
        }
        printf("\n");
    }

    //Objetivo é fazer o valor contido na primeira linha passar para a primeira coluna, e o valor da primeira coluna passar para a primeira linha
    //isso vale para cada linha e coluna da matriz
    //para isso será utilizado o mesmo algoritmo que percorre linhas e colunas, com a diferenca que será feita uma inversão
    for(l = 0; l < 5; l++){
        for(c = 0; c < 4; c++){
            trans[c][l] = mat[l][c];
        }
    }

    printf("\nMatriz transposta:\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            printf("%3d ", trans[l][c]);
        }
        printf("\n");
    }
    return 0;
}