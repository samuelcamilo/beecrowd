#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtAlcool = 0;
    int qtGasolina = 0;
    int qtDiesel = 0;
    int entrada;

    scanf("%d", &entrada);

    while(entrada != 4){
        if(entrada == 1){
            qtAlcool++;
        }else if(entrada == 2){
            qtGasolina++;
        }else if(entrada == 3){
            qtDiesel++;
        }
        scanf("%d", &entrada);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", qtAlcool);
    printf("Gasolina: %d\n", qtGasolina);
    printf("Diesel: %d\n", qtDiesel);

    return 0;
}
