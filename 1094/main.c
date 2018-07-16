#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    char tipo;
    int quantCobaias;
    int quantCoelhos = 0;
    int quantRatos = 0;
    int quantSapos = 0;
    int cont = 0;

    scanf("%d", &entrada);

    while(cont < entrada){
        scanf("%d %c", &quantCobaias, &tipo);

        if(tipo == 'C'){
            quantCoelhos += quantCobaias;
        }else if(tipo == 'R'){
            quantRatos += quantCobaias;
        }else if(tipo == 'S'){
            quantSapos += quantCobaias;
        }

        cont++;
    }

    printf("Total: %d cobaias\n", (quantCoelhos + quantRatos + quantSapos));
    printf("Total de coelhos: %d\n", quantCoelhos);
    printf("Total de ratos: %d\n", quantRatos);
    printf("Total de sapos: %d\n", quantSapos);
    printf("Percentual de coelhos: %.2f %%\n", (quantCoelhos/(float)(quantCoelhos + quantRatos + quantSapos)*100));
    printf("Percentual de ratos: %.2f %%\n", (quantRatos/(float)(quantCoelhos + quantRatos + quantSapos)*100));
    printf("Percentual de sapos: %.2f %%\n", (quantSapos/(float)(quantCoelhos + quantRatos + quantSapos)*100));

    return 0;
}
