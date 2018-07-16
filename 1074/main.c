#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtTestes;
    int entrada;
    int i = 0;

    scanf("%d", &qtTestes);
    while(i < qtTestes){

        scanf("%d", &entrada);

        if(entrada % 2 == 0 && entrada > 0){
            printf("EVEN POSITIVE\n");
        }else if(entrada % 2 == 0 && entrada < 0){
            printf("EVEN NEGATIVE\n");
        }else if(entrada % 2 != 0 && entrada > 0){
            printf("ODD POSITIVE\n");
        }else if(entrada % 2 != 0 && entrada < 0){
            printf("ODD NEGATIVE\n");
        }else if(entrada == 0){
            printf("NULL\n");
        }

        i++;
    }

    return 0;
}
