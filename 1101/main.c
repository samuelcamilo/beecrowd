    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int entrada01;
        int entrada02;
        int somatorio = 0;
        int cont;

        scanf("%d %d", &entrada01, &entrada02);

        while(entrada01 > 0 && entrada02 > 0)
        {
            if(entrada01 < entrada02)
            {
                for(cont = entrada01; cont<=entrada02; cont++)
                {
                    somatorio += cont;
                    printf("%d ", cont);
                }
                printf("Sum=%d\n", somatorio);
                somatorio = 0;

            }
            else if(entrada01 > entrada02)
            {
                for(cont = entrada02; cont<=entrada01; cont++)
                {
                    somatorio += cont;
                    printf("%d ", cont);
                }
                printf("Sum=%d\n", somatorio);
                somatorio = 0;
            }

            scanf("%d %d", &entrada01, &entrada02);
        }

        return 0;
    }
