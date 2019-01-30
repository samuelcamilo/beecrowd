#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int qtTeste;
    int cont = 0;
    int forca;
    char nome[20];

    scanf("%d", &qtTeste);
    while(cont < qtTeste){

        scanf("%s", nome);
        scanf("%d", &forca);

        if(nome[0] == 'T' && nome[1] == 'h' && nome[2] == 'o' && nome[3] == 'r'){
            printf("Y\n");
        }else{
            printf("N\n");
        }

        cont++;
    }
    return 0;
}
