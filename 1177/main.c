#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[1000];
    int T;
    int i = 0;
    scanf("%d", &T);

    for(i = 0; i < 1000; i++){
        vetor[i] = i%T;
    }

    for(i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }


    return 0;
}
