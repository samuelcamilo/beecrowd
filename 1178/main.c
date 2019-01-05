#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[100];
    double entrada;
    int cont;

    scanf("%lf", &entrada);
    vetor[0] = entrada;

    for(cont = 1; cont <= 99; cont++){
        entrada /= 2;
        vetor[cont] = entrada;
    }

    for(cont = 0; cont <= 99; cont++){
        printf("N[%d] = %.4lf\n", cont, vetor[cont]);
    }

    return 0;
}
