#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtLesma;
    int velocidade;
    int aux = 0;
    int cont;

    while(scanf("%d", &qtLesma) != EOF){
        for(cont = 0; cont < qtLesma; cont++){

            scanf("%d", &velocidade);
            //printf("Velocidade: %d\n", velocidade);
            if(velocidade >= aux)
                aux = velocidade;
        }

        if(aux < 10){
            printf("1\n");
        }else if(aux >= 10 && aux < 20){
            printf("2\n");
        }else if(aux >= 20){
            printf("3\n");
        }
        aux = 0;
    }

    return 0;
}
