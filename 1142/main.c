#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int PUM = 4;
    int FIM = 1;
    int aux = 1;
    int i = 0;
    int j = 0;

    scanf("%d", &entrada);

    for(i = 1; i <= entrada; i++){
        for(j = aux; j <= (PUM*i); j++){
            aux = j;
            if(j == (PUM*i)){
                printf("PUM");
            }else{
                printf("%d ", j);
            }
        }
        aux++;
        printf("\n");
    }

    return 0;
}
