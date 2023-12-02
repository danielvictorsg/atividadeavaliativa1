#include <stdio.h>
#include <string.h>

<<<<<<< HEAD

=======
>>>>>>> 28575f95b7216521910ed95163044019afd96100
int valorRomano(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;
    }
}

int romanoParaDecimal(char *numeroRomano) {
    int resultado = 0;

    for (int i = 0; i < strlen(numeroRomano); i++) {
        int valorAtual = valorRomano(numeroRomano[i]);
        int valorProximo = (i + 1 < strlen(numeroRomano)) ? valorRomano(numeroRomano[i + 1]) : 0;

        resultado += (valorAtual >= valorProximo) ? valorAtual : -valorAtual;
    }

    return resultado;
}

void imprimirBinario(int numero) {
    int mascara = 1 << 11;
    int flag = 0;

    printf("na base 2: ");
    while (mascara > 0) {
        int bit = (numero & mascara) ? 1 : 0;
        if (bit == 1 || flag == 1) {
            printf("%d", bit);
            flag = 1;
        }
        mascara >>= 1;
<<<<<<< HEAD
    }
    if (flag == 0) {
        printf("0");
    }
    printf("\n");
}

int main() {
    char numeroRomano[13];
    
    scanf("%12s", numeroRomano);

    int decimal = romanoParaDecimal(numeroRomano);
    if (decimal < 1 || decimal > 1000) {
        printf("Entrada inválida. Certifique-se de inserir um número romano entre 1 e 1000.\n");
        return 1;
    }

    printf("%s ", numeroRomano);
    imprimirBinario(decimal);

    printf("%s na base 10: %d\n", numeroRomano, decimal);

=======
    }
    if (flag == 0) {
        printf("0");
    }
    printf("\n");
}

int main() {
    char numeroRomano[13];
    
    scanf("%12s", numeroRomano);

    int decimal = romanoParaDecimal(numeroRomano);
    if (decimal < 1 || decimal > 1000) {
        return 1;
    }
    printf("%s ", numeroRomano);
    imprimirBinario(decimal);
    printf("%s na base 10: %d\n", numeroRomano, decimal);
>>>>>>> 28575f95b7216521910ed95163044019afd96100
    printf("%s na base 16: %x\n", numeroRomano, decimal);

    return 0;
}