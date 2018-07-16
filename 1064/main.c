#include <stdio.h>
#include <stdlib.h>

int main()
{
    float entradas;
    int i = 0;
    float somatorio = 0;
    int contador = 0;

    while(i < 6){

        scanf("%f", &entradas);
        if(entradas > 0){
            somatorio += entradas;
            contador++;
        }

        i++;
    }
    printf("%d valores positivos\n", contador);
    printf("%.1f\n", (somatorio/contador));

    return 0;
}
