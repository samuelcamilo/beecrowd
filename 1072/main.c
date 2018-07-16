#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int cont;
    int in = 0;
    int out = 0;
    int i = 0;

    scanf("%d", &cont);
    while(i < cont){

        scanf("%d", &entrada);
        if(entrada >= 10 && entrada <= 20){
            in++;
        }else{
            out++;
        }

        i++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
