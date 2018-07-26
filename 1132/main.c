#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada01;
    int entrada02;
    int somatorio = 0;
    int aux;
    int cont;

    scanf("%d %d", &entrada01, &entrada02);

    if(entrada01 > entrada02){
        aux = entrada01;
        entrada01 = entrada02;
        entrada02 = aux;
    }

    for(cont = entrada01; cont <= entrada02; cont++){
        if(cont % 13 != 0)
            somatorio += cont;
    }

    printf("%d\n", somatorio);

    return 0;
}
