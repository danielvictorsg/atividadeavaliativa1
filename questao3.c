#include <stdio.h>

int main() {
    int senha_cadastrada = 0;
    int senha_digitada;
    int max_tentativas = 3;

    scanf("%d", &senha_cadastrada);

    for (int tentativas = 0; tentativas < max_tentativas; tentativas++) {
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha_cadastrada) {
            printf("Senha valida!\n");
            return 0; // Saída bem-sucedida
        } else {
            printf("Senha invalida!\n");
        }
    }

    return 0; // Saída bem-sucedida
}