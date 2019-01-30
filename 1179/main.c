#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    int vetorPar[5];
    int vetorImpar[5];
    int vetorSobra[5];
    int contPar = 0;
    int contImpar = 0;
    int contSobra = 0;
    int cont = 0;

    for(cont = 0; cont < 15; cont++){

        scanf("%d", &entrada);
        if(entrada % 2 == 0){
            if(contPar < 5){
                vetorPar[contPar] = entrada;
                contPar++;
            }
            else{
                vetorSobra[contSobra] = entrada;
                contSobra++;
            }
        }
        else{
            if(contImpar < 5){
                vetorImpar[contImpar] = entrada;
                contImpar++;
            }else{
                vetorSobra[contSobra] = entrada;
                contSobra++;
            }
        }
    }

    for(contPar = 0; contPar < 5; contPar++)
        printf("par[%d] = %d\n", contPar, vetorPar[contPar]);

    for(contImpar = 0; contImpar < 5; contImpar++)
        printf("impar[%d] = %d\n", contImpar, vetorImpar[contImpar]);

    contImpar = 0;
    contPar = 0;

    for(contSobra = 0; contSobra < 5; contSobra++){
        if(vetorSobra[contSobra] % 2 != 0){
            printf("impar[%d] = %d\n", contImpar, vetorSobra[contSobra]);
            contImpar++;
        }
    }

    for(contSobra = 0; contSobra < 5; contSobra++){
        if(vetorSobra[contSobra] % 2 == 0){
            printf("par[%d] = %d\n", contPar, vetorSobra[contSobra]);
            contPar++;
        }
    }

    return 0;
}
