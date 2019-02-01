#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIFE IS NOT A PROBLEM TO BE SOLVED
    char msg[35] = {' ','L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    int entrada;
    int cont = 1;

    scanf("%d", &entrada);
    while(cont <= entrada){
        printf("%c", msg[cont]);
        if(cont == entrada)
            printf("\n");
        cont++;
    }
    return 0;
}
