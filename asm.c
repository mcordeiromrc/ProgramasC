#include <stdio.h>

int main(void)
{
    int x = 0;
    asm("movl $42, %0" : "=r"(x));
    printf("O valor de x eh: %d\n", x);
    return 0;
}