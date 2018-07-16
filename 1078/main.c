#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada = 0;
    int i = 0;

    scanf("%d", &entrada);

    if(entrada >= 2 && entrada <= 1000)
    {
        for(i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", i, entrada, (i * entrada));
        }
    }else
    {
        exit(0);
    }

    return 0;
}
