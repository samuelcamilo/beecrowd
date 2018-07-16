#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int entradas;
    int par = 0;
    int impar = 0;
    int positivo = 0;
    int negativo = 0;

    while(i < 5){

        scanf("%d", &entradas);
        if(entradas % 2 == 0){
            par++;
        }
        if(entradas % 2 != 0){
            impar++;
        }
        if(entradas > 0){
            positivo++;
        }
        if(entradas < 0){
            negativo++;
        }

        i++;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}
