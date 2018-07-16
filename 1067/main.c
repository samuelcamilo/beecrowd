#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int i;

    scanf("%d", &entrada);

    for(i = 1; i <= entrada; i++)
        if(i % 2 != 0) printf("%d\n", i);

    return 0;
}
