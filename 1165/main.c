#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtVezes;
    int entrada;
    int contadorDiv = 0;
    int cont;
    int i;

    scanf("%d", &qtVezes);
    for(i = 0; i < qtVezes; i++){
        scanf("%d", &entrada);
        for(cont = 1; cont <= entrada; cont++){
            if(entrada % cont == 0)
                contadorDiv++;
        }
        if(contadorDiv == 2){
            printf("%d eh primo\n", entrada);
        }else{
            printf("%d nao eh primo\n", entrada);
        }
        contadorDiv = 0;
    }

    return 0;
}
