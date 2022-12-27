#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //int tam = 7;
    int l, c, mat[7][7];

    srand(time(NULL));

    for(l=0;l<7;l++){
        for(c=0;c<7;c++){
            mat[l][c] = rand() % 100;
        }
    }

    for(l=0;l<7;l++){
        for(c=0;c<7;c++){
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Diagonal principal\n");
    for(l=0;l<7;l++){
        printf("%2d ", mat[l][l]);
    }

    printf("\n\n");

    printf("Diagonal secundaria\n");
    for(l=0;l<7;l++){
        printf("%d ", mat[l][7 - 1 - l]);
    }

    printf("\n");
    system("pause");
    return 0;
}