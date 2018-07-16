#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;
    int interador = 1;
    int valorI = 1;
    int valorJ = 7;

    while(contador <= 5){
        for(interador = 1; interador <= 3; interador++){
            printf("I=%d J=%d\n", valorI, (valorJ--));
        }
        valorI = valorI + 2;
        contador++;
        valorJ = 7;
    }

    return 0;
}
