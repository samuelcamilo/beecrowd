#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorOriginal[20];
    int vetorInverso[20];
    int cont = 0;
    int i = 0;

    for(cont = 0; cont < 20; cont++){
        scanf("%d", &vetorOriginal[cont]);
    }

    for(cont = 19; cont >= 0; cont--){
        vetorInverso[i] = vetorOriginal[cont];
        i++;
    }

    for(cont = 0; cont < 20; cont++){
        printf("N[%d] = %d\n", cont,vetorInverso[cont]);
    }

    return 0;
}
