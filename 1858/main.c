#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qt_entrada;
    int entrada;
    int menor = 0;
    int pos = 0;
    int i = 0;
    int j = 0;

    scanf("%d", &qt_entrada);
    int vetor[qt_entrada];

    while(i < qt_entrada)
    {
        scanf("%d", &entrada);
        vetor[i] = entrada;
        i++;
    }

    menor = vetor[0];
    for(i = 0; i < qt_entrada; i++)
    {
        if(vetor[i] <= menor)
        {
            menor = vetor[i];
        }
    }

    for(i = 0; i < qt_entrada; i++)
    {
        if(vetor[i] == menor)
        {
            pos = i;
            break;
        }

    }

    printf("%d\n", pos+1);

    return 0;
}
