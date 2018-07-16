#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int cont = 0;
    float entrada = 0;

    while(i < 6){
        scanf("%f", &entrada);
        if(entrada > 0){
            cont++;
        }
        i++;
    }
    printf("%d valores positivos\n", cont);
    return 0;
}
