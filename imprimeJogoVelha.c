#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c;
    char jogo[3][3];

    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            jogo[l][c] = ' ';
        }
    }

    printf("\n\n\t 0   1   2\n\n");
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            if(c==0)
                printf("\t");
            printf(" %c ", jogo[l][c]);
            if(c<2)
                printf("|");
            if(c == 2)
                printf("%d", l);
        }
        if(c < 2)
            printf("\n\t-----------");
        printf("\n");
    }
    return 0;
}