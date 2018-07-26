#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int qtGrenais = 0;
    int qtVitInter = 0;
    int qtVitGremio = 0;
    int qtEmpate = 0;

    int golsInter;
    int golsGremio;

    do{
        scanf("%d %d", &golsInter, &golsGremio);

        if(golsInter == golsGremio){
            qtEmpate++;
            qtGrenais++;
        }else if(golsInter > golsGremio){
            qtVitInter++;
            qtGrenais++;
        }else if(golsGremio > golsInter){
            qtVitGremio++;
            qtGrenais++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &entrada);
    }while(entrada == 1);

    printf("%d grenais\n", qtGrenais);
    printf("Inter:%d\n", qtVitInter);
    printf("Gremio:%d\n", qtVitGremio);
    printf("Empates:%d\n", qtEmpate);

    if(qtVitInter > qtVitGremio){
        printf("Inter venceu mais\n");
    }else if(qtVitGremio > qtVitInter){
        printf("Gremio venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }

    return 0;
}
