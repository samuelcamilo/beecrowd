#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota01;
    float nota02;

    scanf("%f", &nota01);
    scanf("%f", &nota02);

    //while((nota01 >= 0 && nota01 <= 10) && (nota02 >= 0 && nota02 <= 10)){
        //printf("teste!");
    //}

    if((nota01 >= 0 && nota01 <= 10) && (nota02 >= 0 && nota02 <= 10)){
        printf("nota valida!");
    }else{
        printf("nota invalida!");
    }

    return 0;
}
