#include <stdio.h>

int main(){

    int linhas = 0;
    int colunas = 0;
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);
    getchar();

    while(linhas <= n){
        colunas = 0;
        while(colunas < n){
            printf("*");
            colunas++;
        }
        n--;
        printf("\n");
    }
    return(0);
}
