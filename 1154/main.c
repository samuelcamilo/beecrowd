#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int idadeTotal = 0;
    int contador = 0;

    scanf("%d", &entrada);
    while(entrada >= 0){
        idadeTotal += entrada;
        contador++;
        scanf("%d", &entrada);
    }
    printf("%.2f\n", (idadeTotal/(float)contador));

    return 0;
}
