
#include <stdio.h>

int main()
{

    int i, tam, espaco, asterisco, x, y, metade;

    asterisco=1;
    printf("Insira um numero: ");
    scanf("%d", &tam);

    espaco=tam;
    metade=tam/2;



    for (x=0; x<metade; x++){
        for (i=1; i<=espaco; i++)
        printf(" ");
        espaco--;
        for (y=0; y<asterisco; y++)
            printf("*");

        printf("\n");
        asterisco+=2;
    }

    asterisco-=2;
    espaco++;


    for (x=0; x<metade; x++){
        asterisco-=2;
        espaco++;
        for (i=0; i<espaco; i++)
            printf(" ");
                for (y=0; y<asterisco; y++)
                    printf("*");

        printf("\n");

    }
    return 0;
}
