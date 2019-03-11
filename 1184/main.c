#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[12][12];
    char entrada[1];
    int i, j;
    int aux = 1;
    float somatorio = 0.0;

    scanf("%c", entrada);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &vetor[i][j]);
        }
    }

    for(i = 1; i < 12; i++){
        for(j = 0; j < aux; j++){
            somatorio += vetor[i][j];
        }
        aux++;
    }

    if(entrada[0] == 'S')
        printf("%.1f\n", somatorio);
    else
        printf("%.1f\n", somatorio/66);

    return 0;
}
