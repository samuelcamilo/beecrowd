#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float matriz[12][12];
    int i, j;
    int linha;
    float entrada;
    float somatorio = 0.0;
    char tipoOper[2];

    scanf("%d", &linha);
    getchar();

    gets(tipoOper);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &entrada);
            matriz[i][j] = entrada;
        }
    }

    for(i = linha; i <= linha; i++)
        for(j = 0; j < 12; j++)
            somatorio = somatorio + matriz[i][j];

    if(strcmp(tipoOper, "S") == 0){
        printf("%.1f\n", somatorio);
    }else{
        printf("%.1f\n", (somatorio/12));
    }

    return 0;
}
