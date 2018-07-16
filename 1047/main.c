#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hhInicial;
    int miInicial;

    int hhFinal;
    int miFinal;

    scanf("%d %d %d %d", &hhInicial, &miInicial, &hhFinal, &miFinal);

    if(hhInicial < hhFinal && miInicial < miFinal){

        int resHora = hhFinal - hhInicial;
        int resMin = miFinal - miInicial;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resHora, resMin);

    }else if(hhInicial < hhFinal && miInicial > miFinal){

        int resHora = hhFinal - hhInicial;
        int resMin = 60 - (miInicial - miFinal);

        if(resMin >= 60){
            resHora++;
        }else
            resHora--;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resHora, resMin);

    }else if(hhInicial > hhFinal && miInicial < miFinal){

        int resHora = (24-hhInicial) + hhFinal;
        int resMin = miFinal - miInicial;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resHora, resMin);

    }else if(hhInicial > hhFinal && miInicial > miFinal){

        int resHora = (24-hhInicial) + hhFinal;
        int resMin = 60 - (miInicial - miFinal);

        if(resMin >= 60){
            resHora++;
        }else
            resHora--;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resHora, resMin);

    }else if(hhInicial == hhFinal && miInicial == miFinal){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    return 0;
}
