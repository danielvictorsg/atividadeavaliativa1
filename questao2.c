#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Digite um numero inteiro positivo\n");
    scanf("%d\n", &numero);

    switch(numero%2){
        case 0:
            printf("Numero par!\n");
            break;
        default:
            printf("Numero impar!\n");

    }

    return 0;
}