#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada1;
    int entrada2;
    int cont = 0;
    int i;

    scanf("%d %d", &entrada1, &entrada2);

    for(i = 1; i <= entrada2; i++){
        if(cont == entrada1){
            printf("\n");
            cont = 0;
        }
        printf("%d ", i);
        cont++;
    }

    return 0;
}
