#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[12][12];
    int i, j;
    int aux = 1;
    int aux2 = 1;
    float soma = 0.0;
    char oper[1];

    scanf("%c", oper);

    for(i = 0; i < 11; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &vetor[i][j]);
        }
    }

    for(i = 0; i < 11; i++){
        for(j = aux; j < 12; j++){
            soma = soma + vetor[i][j];
            aux++;
        }
        aux2++;
        aux = aux2;
    }

    if(oper[0] == 'S'){
        printf("%.1f\n", soma);
    }else{
        printf("%.1f\n", (soma/66));
    }

    return 0;
}
