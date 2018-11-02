#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtTestes;
    int x, y;
    int sum = 0;

    int cont = 0;
    int i = 0;

    scanf("%d", &qtTestes);
    while(cont < qtTestes){
                        //4   5
        scanf("%d %d", &x, &y);
        while(i < (y*2)){
            if(x % 2 != 0){
                sum += x;
            }
            x++;
            i++;
        }
        printf("%d\n", sum);
        x = 0;
        y = 0;
        i = 0;
        sum = 0;
        cont++;
    }
    return 0;
}
