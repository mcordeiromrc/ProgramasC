#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int l, c, mat[5][5];

    srand(time(NULL));

    // algoritmo de inserção de valores aleatórios nas posições da matriz
    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
            mat[l][c] = rand() % 100;
        }
    }

    // algoritmo de impressão dos valores contidos nas posições da matriz
    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n\n");
    for(l=0;l<5;l++){
        printf("%d ", mat[l][l]);
    }
    system("pause");
    return 0;
}