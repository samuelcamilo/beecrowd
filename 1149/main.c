#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int N;
    int validador = 0;
    int cont;
    int result = 0;

    scanf("%d %d", &A, &N);

    while(validador == 0){
        if(N > 0){
            validador = 1;
        }else{
            scanf("%d", &N);
        }
    }

    for(cont = 1; cont < N; cont++){
        result += cont + A;
    }

    printf("%d\n", result + A);

    return 0;
}
