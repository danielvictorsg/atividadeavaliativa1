#include <stdio.h>

int main() {
    int senha_cadastrada;
    int senha_digitada;
    int tentativas = 0;
    int max_tentativas = 3;

    scanf("%d", &senha_cadastrada);

    while (tentativas < max_tentativas) {
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha_cadastrada) {
            printf("Senha valida!\n");
            break;
        } else {
            printf("Senha invalida!\n");
            tentativas++;
        }
    }

    if (tentativas == max_tentativas) {
        printf("Acesso negado.\n");
    }

    return 0;
}