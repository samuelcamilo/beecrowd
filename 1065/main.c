#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int quantidade = 0;
    int valor;

    while(i < 5){

        scanf("%d", &valor);

        if(valor%2 == 0){
            quantidade++;
        }
        i++;
    }
    printf("%d valores pares\n", quantidade);

    return 0;
}
