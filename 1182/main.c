#include <stdio.h>
#include <stdlib.h>
#include <String.h>

int main()
{
    int coluna;
    float somatorio = 0.0;
    float multi = 1.0;
    float entrada;
    int i,j;

    char tipoOperacao[1];
    float matriz[12][12];

    scanf("%d", &coluna);
    fflush(stdin);
    gets(tipoOperacao);

    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++){
            scanf("%f", &entrada);
            matriz[i][j] = entrada;
        }

    if(strcmp(tipoOperacao, "S") == 0){
        for(i = 0; i < 12; i++)
            somatorio += matriz[i][coluna];
        printf("%.1f\n", somatorio);
    }
    else if(strcmp(tipoOperacao, "M") == 0){
        for(i = 0; i < 12; i++)
            multi *= matriz[i][coluna];
        printf("%.1f\n", (multi/12));
    }

    return 0;
}
