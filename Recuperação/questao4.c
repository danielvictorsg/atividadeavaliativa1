#include <stdio.h>

int main() {
    int golsInter;
    int golsGremio;
    int totalGrenais = 0, vitoriasInter = 0, vitoriasGremio = 0, empates = 0;
    int continuar;

    do {
        scanf("%d %d", &golsInter, &golsGremio);
        totalGrenais++;
        if (golsInter > golsGremio) {
            vitoriasInter++;
        } else if (golsGremio > golsInter) {
            vitoriasGremio++;
        } else {
            empates++;
        }
        printf("Novo grenal (1-sim 2-nao): \n");
        scanf("%d", &continuar);

    } while (continuar == 1);
    printf("%d grenais\n", totalGrenais);
    printf("Inter: %d\n", vitoriasInter);
    printf("Gremio: %d\n", vitoriasGremio);
    printf("Empates: %d\n", empates);
    return 0;
}