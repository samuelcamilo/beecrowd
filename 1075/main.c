#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int i = 0;
    scanf("%d", &entrada);

    while(i <= 10000)
    {
        if(i % entrada == 2){
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
