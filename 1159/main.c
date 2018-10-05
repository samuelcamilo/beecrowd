#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int somatorio = 0;
    int cont = 0;

    scanf("%d", &entrada);
    while(entrada != 0){

        while(cont < 5){
            if(entrada % 2 == 0){
                somatorio = somatorio + entrada;
                entrada = entrada + 2;
            }else if(entrada % 2 != 0){
                entrada = entrada + 1;
                somatorio = somatorio + entrada;
                entrada = entrada + 2;
            }
            cont++;
        }
        printf("%d\n", somatorio);
        scanf("%d", &entrada);

        somatorio = 0;
        cont = 0;
    }

    return 0;
}
