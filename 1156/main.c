#include <stdio.h>
#include <stdlib.h>

int main() /// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39
{
    /// par: 19
    /// impar: 19

    int vetorP[19];
    int vetorI[19];
    int cont = 2;
    int result = 1;
    float s = 1.0;

    int i = 0;
    while(cont <= 39){

        if(cont % 2 != 0){
            vetorI[i] = cont; /// Vetor Impar...
            result *= 2;
            vetorP[i] = result;
            i++;
        }
        cont++;
    }

    for(i = 0; i < 19; i++){
        s += (vetorI[i] / (float)vetorP[i]);
    }

    printf("%.2f\n", s);
    return 0;
}
