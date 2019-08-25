#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    int qtVezes;
    int entrada;

    scanf("%d", &qtVezes);

    for(cont = 0; cont < qtVezes; cont++)
    {
        scanf("%d", &entrada);

        if(entrada % 2 == 0)
            printf("%d\n", 0);
        else
            printf("%d\n", 1);
    }

}