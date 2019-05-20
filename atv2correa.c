#include <stdio.h>

int main(){

    int n;
    int linha = 0;
    int coluna = 0;

    printf("Insira o tamanho maximo da linha: ");
    scanf("%d", &n);
    getchar();

    n = n/2;
    linha = n;

     while(linha > 0){
           coluna = 0;
           while(coluna < linha){
                printf("*");
                coluna++;
           }
           linha--;
           printf("\n");
    }

    linha = 0;
    coluna = 0;

    while(linha < n){
           coluna = 0;
           while(coluna < linha+1){
                printf("*");
                coluna++;
           }
           linha++;
           printf("\n");
    }
    return(0);
}
