#include <stdio.h>


int main()
{

    int i, tam, espaco, asterisco, x, y, metade, metadeDaMetade;

    asterisco=tam;
    printf("Insira um numero: ");
    scanf("%d", &tam);
    espaco=0;
    metade=tam/2;
    metadeDaMetade = metade;


    for (x=0; x<metade-1; x++)
    {

        for (i=1; i<=metadeDaMetade; i++)
            printf("*");

        for (y=0; y<espaco; y++)
            printf(" ");

         for (i=1; i<=metadeDaMetade; i++)
            printf("*");


        printf("\n");
        metadeDaMetade--;
        espaco+=2;
    }

    asterisco-=2;

for (i=1; i<=metadeDaMetade; i++)
            printf("*");

        for (y=0; y<espaco; y++)
            printf(" ");

         for (i=1; i<=metadeDaMetade; i++)
            printf("*");
printf("\n");

   for (x=0; x<metade; x++)
    {

        for (i=1; i<=metadeDaMetade; i++)
            printf("*");

        for (y=0; y<espaco; y++)
            printf(" ");

         for (i=1; i<=metadeDaMetade; i++)
            printf("*");


        printf("\n");
        metadeDaMetade++;
        espaco-=2;
    }

    asterisco-=2;
    espaco++;

    return 0;
}
