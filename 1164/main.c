#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qt_teste = 0;
    int i = 0;

    int entrada;
    int contador = 1;
    int somatorio = 0;

    scanf("%d", &qt_teste);
    while(i < qt_teste){

        scanf("%d", &entrada);
        while(contador < entrada){

            if(entrada % contador == 0){
                somatorio = somatorio + contador;
            }
            contador++;
        }


        if(somatorio == entrada){
            printf("%d eh perfeito\n", entrada);
        }else{
            printf("%d nao eh perfeito\n", entrada);
        }

        somatorio = 0;
        contador = 1;
        i++;
    }

    return 0;
}
