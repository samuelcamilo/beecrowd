#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtTestes;
    int contador;

    int PA = 0;
    int PB = 0;
    int qtAnos = 0;
    double GA = 0.0;
    double GB = 0.0;

    scanf("%d", &qtTestes);

    contador = 1;
    while(contador <= qtTestes){

        scanf("%d %d %lf %lf", &PA, &PB, &GA, &GB);
        while(PA <= PB){

            PA += ((int)PA * (GA/100));
            PB += ((int)PB * (GB/100));

            qtAnos++;

            if(qtAnos > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if(qtAnos <= 100){
            printf("%d anos.\n", qtAnos);
        }

        qtAnos = 0;
        contador++;
    }

    return 0;
}
