#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somatorio  = 0;
    int aux;
    int X, Y;

    scanf("%d %d", &X, &Y);

    if(X < Y){

        X++;
        while(X < Y){

            if(X % 2 != 0){
                somatorio += X;
            }
            X++;
        }
    }else if(X > Y){

        aux = Y;
        Y = X;
        X = aux;

        X++;
        while(X < Y){

            if(X % 2 != 0){
                somatorio += X;
            }
            X++;
        }
    }

    printf("%d\n", somatorio);

    return 0;
}
