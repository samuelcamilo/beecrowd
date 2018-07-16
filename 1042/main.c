#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorSort[3];
    int vetorNormal[3];
    int aux;
    int i;
    int j;


    for(i = 0; i < 3; i++){ /// Inserindo dados no vetor.

        scanf("%d", &vetorSort[i]);
        vetorNormal[i] = vetorSort[i];

    }

    for(i = 1; i < 3; i++){

        for(j = 0; j < 3-1; j++){

            if(vetorSort[j] > vetorSort[j + 1]){

                aux = vetorSort[j];
                vetorSort[j] = vetorSort[j + 1];
                vetorSort[j + 1] = aux;

            }

        }

    }

    for(i = 0; i < 3; i++){

        printf("%d\n", vetorSort[i]);

    }

    printf("\n");
    for(i = 0; i < 3; i++){

        printf("%d\n", vetorNormal[i]);

    }

    return 0;
}
