#include <stdio.h>

float precos[] = {1.50, 2.50, 3.50, 4.50, 5.50};

int main() {
    int quantidadeProdutos;
    scanf("%d", &quantidadeProdutos);

    float totalCompra = 0.0;

    for (int i = 0; i < quantidadeProdutos; ++i) {
        int codigoProduto, quantidade;
        scanf("%d %d", &codigoProduto, &quantidade);

        if (codigoProduto >= 1001 && codigoProduto <= 1005) {
            totalCompra += precos[codigoProduto - 1001] * quantidade;
        } else {
            return 1;
        }
    }
    printf("%.2f\n", totalCompra);

    return 0;
}