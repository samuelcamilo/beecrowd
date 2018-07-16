#include <stdio.h>
#include <stdlib.h>

void Ordenar(float A, float B, float C){

    float aux = 0;

    if(A < B && B > C){

        aux = A;
        A = B;
        B = aux;

        if(B < C){
           aux = B;
           B = C;
           C = aux;
        }

    }else if(A < B && B < C){
        aux = A;
        A = C;
        C = aux;
    }

    //printf("%.2f %.2f %.2f\n", A, B, C);

}

int main()
{
    float A, B, C, aux;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);


    if(A >= B && A >= C){

        if(A == B || A == C || B == C){

            /// Realiza as Operacoes de boa.
            if(A >= (B+C)){
                printf("NAO FORMA TRIANGULO\n");
            }else if((A*A) == ((B*B)+(C*C))){
                printf("TRIANGULO RETANGULO\n");
            }else if((A*A) > ((B*B)+(C*C))){
                printf("TRIANGULO OBTUSANGULO\n");
            }else if((A*A) < ((B*B)+(C*C))){
                printf("TRIANGULO ACUTANGULO\n");
            }

            printf("TRIANGULO ISOSCELES\n");

        }

    }else{

        Ordenar(A, B, C);

        if(A == B || A == C || B == C){

            /// Realiza as Operacoes de boa.
            if(A >= (B+C)){
                printf("NAO FORMA TRIANGULO\n");
            }else if((A*A) == ((B*B)+(C*C))){
                printf("TRIANGULO RETANGULO\n");
            }else if((A*A) > ((B*B)+(C*C))){
                printf("TRIANGULO OBTUSANGULO\n");
            }else if((A*A) < ((B*B)+(C*C))){
                printf("TRIANGULO ACUTANGULO\n");
            }

            printf("TRIANGULO ISOSCELES\n");

        }

    }



    return 0;
}
