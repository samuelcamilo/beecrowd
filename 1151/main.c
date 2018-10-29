#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int fibonacci = 0;
    int ant = 0;
    int pro = 1;

    int cont = 0;

    scanf("%d", &entrada);

    printf("%d", ant);
    printf(" %d", pro);
    while(cont < (entrada-2)){

        fibonacci = ant + pro;
        ant = pro;
        pro = fibonacci;

        printf(" %d", fibonacci);
        cont++;
    }

    return 0;
}
