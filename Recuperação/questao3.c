#include <stdio.h>

int main(){
    char descricao_inicio[4];
    char descricao_fim[4];
    int dia_inicio, hora_inicio, minuto_inicio, segundo_inicio;
    int dia_fim, hora_fim, minuto_fim, segundo_fim;

    scanf("%s %d", descricao_inicio, &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);

    scanf("%s %d", descricao_fim, &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &minuto_fim, &segundo_fim);

    int duracao_segundos = (dia_fim - dia_inicio) * 24 * 60 * 60 +
                           (hora_fim - hora_inicio) * 60 * 60 +
                           (minuto_fim - minuto_inicio) * 60 +
                           (segundo_fim - segundo_inicio);

    int duracao_dias = duracao_segundos / (24 * 60 * 60);
    duracao_segundos %= (24 * 60 * 60);
    int duracao_horas = duracao_segundos / 3600;
    duracao_segundos %= 3600;
    int duracao_minutos = duracao_segundos / 60;
    duracao_segundos %= 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",
           duracao_dias, duracao_horas, duracao_minutos, duracao_segundos);

    return 0;
}