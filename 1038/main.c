#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float quantidade;

    scanf("%d", &opcao);
    scanf("%f", &quantidade);

    switch(opcao){

        case 1:
            printf("Total: R$ %.2f\n", (quantidade*4.0));
            break;

        case 2:
            printf("Total: R$ %.2f\n", (quantidade*4.5));
            break;

        case 3:
            printf("Total: R$ %.2f\n", (quantidade*5.0));
            break;

        case 4:
            printf("Total: R$ %.2f\n", (quantidade*2.0));
            break;

        case 5:
            printf("Total: R$ %.2f\n", (quantidade*1.5));

        default:
            break;

    }

    return 0;
}
