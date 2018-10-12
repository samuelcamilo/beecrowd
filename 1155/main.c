#include <stdio.h>
#include <stdlib.h>

int main()
{
    float S = 0;
    int contador = 0;

    for(contador = 1; contador <= 100; contador++)
        S += (1/(float)contador);
    printf("%.2f\n", S);
    return 0;
}
