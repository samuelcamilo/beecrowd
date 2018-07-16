#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int B;

    scanf("%d %d", &A, &B);

    if(A >= B && A % B == 0) {
        printf("Sao Multiplos\n");
    }else if(B >= A && B % A == 0){
        printf("Sao Multiplos\n");
    }else if(A >= B && A % B != 0){
        printf("Nao sao Multiplos\n");
    }else if(B >= A && B % A != 0){
        printf("Nao sao Multiplos\n");
    }


    return 0;
}
