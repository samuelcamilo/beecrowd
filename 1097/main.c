#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int j = 7;

    int valorI = 1;
    int valorJ = 1;

    while(i <= 5){
        while(j <= 3){
            printf("I=%d J=%d\n", valorI, valorJ++);
            j++;
        }
        i++;
        j=1;
        valorI = valorI + 2;
    }

    return 0;
}
