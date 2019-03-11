#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtRec;

    while(scanf("%d", &qtRec) != EOF){

        if(qtRec > 0){
            printf("vai ter duas!\n");
        }else{
            printf("vai ter copa!\n");
        }
    }

    return 0;
}
