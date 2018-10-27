#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[100];
    int cont = 0;

    for(cont = 0; cont < 100; cont++){
        scanf("%f", &vetor[cont]);
    }

    for(cont = 0; cont < 100; cont++){
        if(vetor[cont] <= 10){
            printf("A[%d] = %.1f\n", cont, vetor[cont]);
        }
    }

    return 0;
}
