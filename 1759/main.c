#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtHo;
    int cont = 1;

    scanf("%d", &qtHo);
    while(cont <= qtHo){
        if(cont == qtHo){
            printf("Ho!\n");
        }else{
            printf("Ho ");
        }
        cont++;
    }

    return 0;
}
