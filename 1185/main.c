#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[12][12];
    int i, j;
    int totalCont = 11;
    float somatorio = 0;
    char tipoOpe[1];

    scanf("%c", tipoOpe);
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++){
            scanf("%f", &vetor[i][j]);
        }

    for(i = 0; i < 11; i++){
        for(j = 0; j < totalCont; j++){
            somatorio += vetor[i][j];
        }
        totalCont -= 1;
    }

    if(tipoOpe[0] == 'S'){
        printf("%.1f\n", somatorio);
    }else{
        printf("%.1f\n", somatorio/66);
    }

    return 0;
}
