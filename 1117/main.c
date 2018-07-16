#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota01;
    float nota02;
    int ehValidoNota = 0;
    int ehValidoNota1 = 0;
    int ehValidoNota2 = 0;

    scanf("%f", &nota01);
    scanf("%f", &nota02);

    while(ehValidoNota == 0){

        if(ehValidoNota1 == 0){
            if(nota01 >= 0 && nota01 <= 10){
                ehValidoNota1 = 1;
            }else{
                printf("nota invalida\n");
                scanf("%f", &nota01);
            }
        }

        if(ehValidoNota2 == 0){
            if(nota02 >= 0 && nota02 <= 10){
                ehValidoNota2 = 1;
            }else{
                printf("nota invalida\n");
                scanf("%f", &nota02);
            }
        }

        if(ehValidoNota1 == 1 && ehValidoNota2 == 1){
            printf("media = %.2f\n", (nota01+nota02)/2);
            ehValidoNota = 1;
        }

    }

    return 0;
}
