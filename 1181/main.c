#include <stdio.h>
#include <stdlib.h>
#include <String.h>

int main()
{
    float matriz[3][3];
    int linha = 0;
    char opcao[1];
    float sum = 0;
    float med = 0;
    int i, j;

    /// Ler linha de inicio.
    scanf("%f", &linha);

    /// Limpa Buffer e Ler Opcao.
    fflush(stdin);
    gets(opcao);

    for(i = 0; i < 3; i++){

        for(j = 0; j < 3; j++){

            scanf("%f", &matriz[i][j]);

        }
    }

    /// Operacao.
    if(strcmp (opcao, "S") == 0){

        for(j = 0; j < 3; j++){

            //scanf("%d", &matriz[linha][j]);
            sum += matriz[linha][j];
        }

        printf("%.1f\n", sum);

    }else if(strcmp (opcao, "M") == 0){

        for(j = 0; j < 3; j++){

            //scanf("%d", &matriz[linha][j]);
            med += matriz[linha][j];

        }

        med = med / 12;
        printf("%.1f\n", med);

    }

    return 0;
}
