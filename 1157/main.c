#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int cont = 1;

    scanf("%d", &entrada);
    while(cont <= entrada){
        if(entrada % cont == 0)
            printf("%d\n", cont);

        cont++;
    }

    return 0;
}
