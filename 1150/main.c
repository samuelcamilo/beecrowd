#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int z;
    int sum = 0;
    int cont = 0;

    scanf("%d", &x);
    scanf("%d", &z);

    while(x >= z){
        scanf("%d", &z);
    }

    while(sum < z){
        sum += x + 1;
        cont++;
    }

    printf("%d\n", cont);

    return 0;
}
