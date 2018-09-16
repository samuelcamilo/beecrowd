#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int cont;

    scanf("%d", &entrada);
    while(entrada != 0){
        for(cont = 1; cont <= entrada; cont++)
        {
            if(cont == entrada){
                printf("%d", cont);
            }else{
                printf("%d ", cont);
            }
        }

        printf("\n");
        scanf("%d", &entrada);
    }

    return 0;
}
