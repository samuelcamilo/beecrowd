#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// 0 1 1 2 3 5 8 13
    int qtTestes;
    int entrada;
    unsigned long int vetorFib[60];
    unsigned long int pri = 0, seg = 1, atu = 0;
    int i = 2;

    vetorFib[0] = 0;
    vetorFib[1] = 1;

    while(i < 60){
        atu = pri + seg;
        pri = seg;
        seg = atu;
        vetorFib[i] = atu;
        i++;
    }

    scanf("%d", &qtTestes);
    for(i = 0; i < qtTestes; i++){
        scanf("%d", &entrada);
        printf("Fib(%d) = %lu\n", entrada, vetorFib[entrada]);
    }

    return 0;
}
