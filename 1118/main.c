#include <stdio.h>
#include <stdlib.h>

int main()
{
    int controle;
    float primeiraNota;
    float segundaNota;

    do{
        scanf("%f", &primeiraNota);
        if(!(primeiraNota >= 0 && primeiraNota <= 10)){
            printf("nota invalida\n");
            scanf("%f", &primeiraNota);
        }

        scanf("%f", &segundaNota);
        if(!(segundaNota >= 0 && segundaNota <= 10)){
            printf("nota invalida\n");
            scanf("%f", &segundaNota);
        }

        printf("media = %.2f\n", (primeiraNota + segundaNota)/2);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &controle);

        if(controle < 1 && controle > 2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &controle);
        }

    }while(controle == 1);

    return 0;
}
