#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int entrada;
    int i = 1;
    int j = 1;
    int aux = 1;
    int resultado = 0;

    scanf("%d", &entrada);

    for(i = 1; i <= entrada; i++){
        aux = i;
        for(j = 1; j <= 3; j++){
            resultado = (float)pow(aux,j);
            printf("%d ", resultado);
        }
        printf("\n");
    }
    return 0;
}
