#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaInicial;
    int horaFinal;

    scanf("%d %d", &horaInicial, &horaFinal);

    if(horaInicial == horaFinal){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }else if(horaInicial <= horaFinal){
        printf("O JOGO DUROU %d HORA(S)\n", horaFinal-horaInicial);
    }else
        printf("O JOGO DUROU %d HORA(S)\n", 24-horaInicial+horaFinal);

    return 0;
}
