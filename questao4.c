#include <stdio.h>

int main() {
    char nivel;
    double salario, aumento, novo_salario;

    scanf(" %c", &nivel);
    scanf("%lf", &salario);

    switch (nivel) {
        case 'a':
            aumento = salario * 0.05;
            break;
        case 'b':
            aumento = salario * 0.07;
            break;
        case 'c':
            aumento = salario * 0.08;
            break;
        default:
            printf("Nível de experiência inválido.\n");
            return 1;
    }

    novo_salario = salario + aumento;

    printf("O novo salário do funcionário é: %.2lf\n", novo_salario);

    return 0;
}