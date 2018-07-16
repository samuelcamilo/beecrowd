#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int x, y;
    int cont = 0;
    int somatorio = 0;

    scanf("%d", &entrada);

    while(cont < entrada){

        scanf("%d %d", &x, &y);

        if(x < y){

            x++;
            while(x < y){
                if(x % 2 != 0)
                    somatorio += x;
                x++;
            }

        }else if(x > y){

            y++;
            while(y < x){
                if(y % 2 != 0)
                    somatorio += y;
                y++;
            }
        }
        printf("%d\n", somatorio);
        cont++;
        somatorio = 0;
    }



    return 0;
}
