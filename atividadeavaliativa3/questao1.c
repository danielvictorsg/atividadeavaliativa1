#include <stdio.h>
#include <string.h>

// Função para converter um caractere romano em seu valor decimal
int valorRomano(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1; // Caractere romano inválido
    }
}

// Função para converter um número romano para decimal
int romanoParaDecimal(char *numeroRomano) {
    int resultado = 0;

    for (int i = 0; i < strlen(numeroRomano); i++) {
        int valorAtual = valorRomano(numeroRomano[i]);
        int valorProximo = (i + 1 < strlen(numeroRomano)) ? valorRomano(numeroRomano[i + 1]) : 0;

        resultado += (valorAtual >= valorProximo) ? valorAtual : -valorAtual;
    }

    return resultado;
}

int main() {
    char numeroRomano[13];
    int decimal;

    // Entrada do usuário
    printf("Digite um número romano (até 12 caracteres): ");
    scanf("%12s", numeroRomano);

    // Validar a entrada
    if (romanoParaDecimal(numeroRomano) < 1 || romanoParaDecimal(numeroRomano) > 1000) {
        printf("Entrada inválida. Certifique-se de inserir um número romano entre 1 e 1000.\n");
        return 1;
    }
    decimal = romanoParaDecimal(numeroRomano);

    printf("%s na base 2: ", numeroRomano);
    for (int i = 11; i >= 0; i--) {
        printf("%d", (decimal >> i) & 1);
    }
    printf("\n");
    printf("%s na base 10: %d\n", numeroRomano, decimal);
    printf("%s na base 16: %X\n", numeroRomano, decimal);

    return 0;
}