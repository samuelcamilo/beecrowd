#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int entrada;
    int cont = 1;

    scanf("%d", &entrada);
    vetor[0] = entrada;

    while(cont < 10){
        vetor[cont] = entrada *= 2;
        cont++;
    }

    cont = 0;
    while(cont < 10){
        printf("N[%d] = %d\n", cont, vetor[cont]);
        cont++;
    }


    return 0;
}
