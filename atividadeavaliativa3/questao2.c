#include <stdio.h>
#include <math.h>

void calcular_montante(double aporte_mensal, double taxa_juros, int tempo_meses) {
    double montante = 0;
    for (int t = 1; t <= tempo_meses; t++) {
        montante = montante * (1 + taxa_juros) + aporte_mensal;
        printf("Montante ao fim do mes %d: R$ %.2lf\n", t, montante);
    }
}

int main() {
    int tempo_meses;
    double aporte_mensal, taxa_juros;
    scanf("%d", &tempo_meses);
    scanf("%lf", &aporte_mensal);
    scanf("%lf", &taxa_juros);
    calcular_montante(aporte_mensal, taxa_juros, tempo_meses);

    return 0;
}