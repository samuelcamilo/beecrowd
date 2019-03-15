#include <stdio.h>
#include <stdlib.h>

int main()
{
    double matriz[12][12];
    int i, j;
    int auxI = 1;
    int auxJ = 11;
    double somatorio = 0.0;
    char tipoOper[1];

    scanf("%c", &tipoOper[0]);
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        }

    for(i = 0; i < 5; i++){
        for(j = auxI; j < auxJ; j++){
            somatorio += matriz[i][j];
        }
        auxI++; auxJ--;
    }

    if(tipoOper[0] == 'S')
        printf("%.1lf\n", somatorio);
    else
        printf("%.1lf\n", (somatorio/30));

    return 0;
}
