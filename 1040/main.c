#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1; /// Nota 1.
    float N2; /// Nota 2.
    float N3; /// Nota 3.
    float N4; /// Nota 4.
    float Exame = 0;
    float Media = 0;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    N1 = N1*(2);
    N2 = N2*(3);
    N3 = N3*(4);
    N4 = N4*(1);

    Media = (N1 + N2 + N3 + N4)/(2 + 3 + 4 + 1);

    if(Media >= 7.0){
        printf("Aluno aprovado.\n");
        printf("Media: %.2f", Media);
    }else
        if(Media < 5.0){
            printf("Aluno reprovado.\n");
            printf("Media: %.2f", Media);
        }else
            if(Media > 5.0 && Media < 6.9){
                printf("Aluno em Exame.\n");
                scanf("%f", &Exame);
                Media = (Media + Exame)/2;
                printf("Nota do Exame: %f\n", Exame);
                if(Exame >= 5){
                    printf("Aluno aprovado.\n");
                    printf("Media final: %f\n", Media);
                }else{
                    printf("Aluno reprovado.\n");
                    printf("Media final: %f\n", Media);
                }

            }

    return 0;
}
