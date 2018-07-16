#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada = 0;
    int valor01;
    int valor02;
    int cont = 0;

    scanf("%d", &entrada);

    while(cont < entrada)
    {
        scanf("%d %d", &valor01, &valor02);

        if(valor01 > 0 && valor02 > 0)
        {
            printf("%.1f\n", (valor01/(float)valor02));

        }
        else if(valor01 >= 0 && valor02 < 0)
        {
            printf("%.1f\n", (valor01/(float)valor02));

        }
        else if(valor01 <= 0 && valor02 > 0)
        {
            printf("%.1f\n", (valor01/(float)valor02));
        }
        else if(valor01 <= 0 && valor02 < 0)
        {
            printf("%.1f\n", (valor01/(float)valor02));

        }else if(valor01 < 0 && valor02 == 0)
        {
            printf("divisao impossivel\n");
        }
        else if(valor01 > 0 && valor02 == 0)
        {
            printf("divisao impossivel\n");
        }
        else if(valor01 == 0 && valor02 == 0)
        {
            printf("divisao impossivel\n");
        }

        cont++;
    }

    return 0;
}
