#include <stdio.h>

int main(){
    int numCasos;
    scanf("%d", &numCasos);
    for (int i = 0; i < numCasos; ++i) {
        int anosTranscorridos;
        scanf("%d", &anosTranscorridos);

        int anoCorrespondente;
        if (anosTranscorridos == 0) {
            anoCorrespondente = 2015;
        } else if (anosTranscorridos > 0) {
            anoCorrespondente = 2015 - anosTranscorridos;
        } else {
            anoCorrespondente = 2016 - anosTranscorridos;
        }

        if (anoCorrespondente <= 0) {
            printf("%d A.C.\n", -anoCorrespondente + 1);
        } else {
            printf("%d D.C.\n", anoCorrespondente);
        }
    }

    return 0;
}