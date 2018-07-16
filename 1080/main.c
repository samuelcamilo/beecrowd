#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100];
    int cont;
    int aux;
    int indice = 0;

    for(cont = 0; cont < 100; cont++){

        scanf("%d", &vetor[cont]);

    }

    aux = vetor[0];
    indice = cont;
    for(cont = 0; cont < 100; cont++){

        if(aux <= vetor[cont]){
            aux = vetor[cont];
            indice = cont;
        }

    }

    printf("%d\n", aux);
    printf("%d\n", indice+1);

    return 0;
}
