#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada1;
    int entrada2;
    int aux = 0;

    scanf("%d %d", &entrada1, &entrada2);

    if(entrada1 > entrada2){
        aux = entrada1;
        entrada1 = entrada2;
        entrada2 = aux;
    }

    while(entrada1 < entrada2-1){
        entrada1++;
        if(entrada1 % 5 == 2 || entrada1 % 5 == 3){
            printf("%d\n", entrada1);
        }
    }

    return 0;
}
