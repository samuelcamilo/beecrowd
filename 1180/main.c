#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    int menor;
    int posicao;
    int j;
    int i;

    scanf("%d", &tamanho);
    int vetor[tamanho];

    for(i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);

    for(i = 0; i < 1; i++){
        menor = vetor[i];
        for(j = 0; j < tamanho; j++){
            if(menor >= vetor[j]){
                menor = vetor[j];
                posicao = j;
            }
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
