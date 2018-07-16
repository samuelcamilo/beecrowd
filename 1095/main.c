#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contJ = 60;
    int contI = 1;

    while(contJ >= 0){
        printf("I=%d J=%d\n", contI,contJ);
        contI = contI + 3;
        contJ = contJ - 5;
    }

    return 0;
}
