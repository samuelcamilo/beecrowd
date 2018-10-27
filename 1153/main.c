#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int fatorial = 1;
    int cont = 0;

    scanf("%d", &entrada);

    for(cont = entrada; cont >= 1; cont--){
        fatorial *= cont;
    }

    printf("%d\n", fatorial);

    return 0;
}
