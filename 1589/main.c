#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtCasos;
    int circ1, circ2;
    int cont = 1;

    scanf("%d", &qtCasos);

    while(cont <= qtCasos){
        scanf("%d %d", &circ1, &circ2);
        printf("%d\n", (circ1 + circ2));
        cont++;
    }

    return 0;
}
