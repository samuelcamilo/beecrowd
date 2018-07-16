#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    float valor1;
    float valor2;
    float valor3;

    int cont = 0;

    scanf("%d", &entrada);
    while(cont < entrada){
        scanf("%f %f %f", &valor1, &valor2, &valor3);

        printf("%.1f\n", (valor1*0.2)+(valor2*0.3)+(valor3*05)/10.0);

        cont++;
    }
    return 0;
}
