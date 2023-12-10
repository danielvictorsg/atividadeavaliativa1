#include <stdio.h>

int main(){
    int tempoViagem, velocidadeMedia;
    double distanciaPercorrida, litrosNecessarios;

    scanf("%d", &tempoViagem);
    scanf("%d", &velocidadeMedia);
    distanciaPercorrida = tempoViagem * velocidadeMedia;
    litrosNecessarios = distanciaPercorrida / 12.0;

    printf("%.3lf\n", litrosNecessarios);

    return 0;
}