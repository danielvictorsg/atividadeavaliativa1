#include <stdio.h>

int main() {
    int codigo;
    int quantidade;
    float valorUnidade;
    float valorTotal;

    scanf("%d %d", &codigo, &quantidade);

    switch(codigo) {
        case 1:
            valorUnidade = 4.00;
            break;
        case 2:
            valorUnidade = 4.50;
            break;
        case 3:
            valorUnidade = 5.00;
            break;
        case 4:
            valorUnidade = 2.00;
            break;
        case 5:
            valorUnidade = 1.50;
            break;
        default:
            return 1;
    }
    valorTotal = valorUnidade * quantidade;
    printf("Total: R$ %.2f\n", valorTotal);

    return 0;
}