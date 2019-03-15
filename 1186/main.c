#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[4][4] = {2,2,2,2,
                         2,2,2,1,
                         2,2,1,1,
                         2,1,1,1};
    int i, j;
    float somatorio = 0;
    int aux = 2;
    char tipoOpe[1];

    scanf("%c", tipoOpe);
    //for(i = 0; i < 12; i++)
        //for(j = 0; j < 12; j++){
            //scanf("%f", &vetor[i][j]);
        //}

    for(i = 4; i >= 1; i--){
        for(j = aux; j < 4; j++){
            somatorio += vetor[i][j];
        }
        aux += 1;
    }

    if(tipoOpe[0] == 'S'){
        printf("%.1f\n", somatorio);
    }else{
        printf("%.1f\n", somatorio/66);
    }

    return 0;
}
