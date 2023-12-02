#include <stdio.h>
<<<<<<< HEAD
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validarPlaca(char *novaPlaca){
    int i;

    novaPlaca[strcspn(novaPlaca, "\n")] = '\0';

    if (strlen(novaPlaca) == 8) {
        if ((strcmp(novaPlaca, "XYZ--987") == 0)) {
            return 0;
        } else if (novaPlaca[4] == 'Y' || (novaPlaca[3] == '-' && novaPlaca[4] != 'Y')) {
            return 1;
        } else {
            return 0;
        }
    } else if ((strlen(novaPlaca) == 7) && isdigit(novaPlaca[3])) {
        for (int i = 0; i < 7; i++) {
            if (novaPlaca[i] == '-') {
                return 0;
            }
        }
        return 1;
    } else {
        return 0;
    }

    return 1;
}

int validaDia(char *novoDiaSemana){
    char diasCorretos[7][15] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
    int i = 0;

    for (i = 0; i < 7; i++) {
        if (strcmp(novoDiaSemana, diasCorretos[i]) == 0) {
            return 1;
        }
    }

    return 0;
}
int main(){
    char novaPlaca[9], novoDiaSemana[30], novoDiaSemana2[30], novoUltimoDigito;
    int novoContador = 0;
    scanf("%s", novaPlaca);
    scanf("%s", novoDiaSemana);
    if (!validarPlaca(novaPlaca) && !validaDia(novoDiaSemana)) {
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
        return 0;
    } else if (!validarPlaca(novaPlaca)) {
        printf("Placa invalida\n");
        return 0;
    } else if (!validaDia(novoDiaSemana)) {
        printf("Dia da semana invalido\n");
        return 0;
    }
    for (int o = 0; novoDiaSemana[o] != '\0'; o++) {
        novoDiaSemana2[o] = tolower(novoDiaSemana[o]);
        novoContador++;
    }
    novoDiaSemana2[novoContador] = '\0';
    novoUltimoDigito = novaPlaca[strlen(novaPlaca) - 1];
    if ((strcmp(novoDiaSemana, "SEGUNDA-FEIRA") == 0 && (novoUltimoDigito == '0' || novoUltimoDigito == '1')) || 
        (strcmp(novoDiaSemana, "TERCA-FEIRA") == 0 && (novoUltimoDigito == '2' || novoUltimoDigito == '3')) || 
        (strcmp(novoDiaSemana, "QUARTA-FEIRA") == 0 && (novoUltimoDigito == '4' || novoUltimoDigito == '5')) || 
        (strcmp(novoDiaSemana, "QUINTA-FEIRA") == 0 && (novoUltimoDigito == '6' || novoUltimoDigito == '7')) || 
        (strcmp(novoDiaSemana, "SEXTA-FEIRA") == 0 && (novoUltimoDigito == '8' || novoUltimoDigito == '9'))) {
        printf("%s nao pode circular %s\n", novaPlaca, novoDiaSemana2);
    } else if (strcmp(novoDiaSemana, "SABADO") == 0 || strcmp(novoDiaSemana, "DOMINGO") == 0) {
        printf("Nao ha proibicao no fim de semana\n");
    } else {
        printf("%s pode circular %s\n", novaPlaca, novoDiaSemana2);
    }
    return 0;
}
=======
#include <string.h>
>>>>>>> 28575f95b7216521910ed95163044019afd96100
