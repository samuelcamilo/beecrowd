#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[5] = {1,2,7,3,8};
    int cont = 0;

    for(cont = 0; cont < 5; cont++){
        printf("Vetor[%d] = %d\n", cont, vetor1[cont]);
    }

    printf("------------\n");

    return 0;
}
