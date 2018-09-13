#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int i;
    int j;

    scanf("%d", &entrada);

    for(i = 1; i <= entrada; i++){
        printf("%d %d %d\n", i, i*i, i*i*i);
        for(j = 1; j<=1; j++){
            printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
        }
    }

    return 0;
}
