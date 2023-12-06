#include <stdio.h>
#include <string.h>

#define NUM_QUARTOS 10
#define TAM_NOME 50
int i = 0;
typedef struct {
    char nome[TAM_NOME];
    int quarto;
} Hospede;
 
// Função para inserir um novo hóspede em um quarto vazio
void inserirHospede(char quartos[], int numeroQuarto) {
    if (quartos[numeroQuarto - 1] == 'V') {
        quartos[numeroQuarto - 1] = 'O'; // 'O' representa ocupado
        printf("Hóspede inserido no quarto %d com sucesso.\n", numeroQuarto);
    } else {
        printf("O quarto %d está ocupado. Escolha outro quarto.\n", numeroQuarto);
    }
}

void listarHospedes(Hospede hospedes[]) {
    printf("Lista de Hospedes:\n");
    for (int i = 0; i < NUM_QUARTOS; i++) {
        if (hospedes[i].quarto != 0) {
            printf("Quarto %d: %s\n", hospedes[i].quarto, hospedes[i].nome);
        }
    }
}
// Função principal
int main() {
    char estadoQuartos[NUM_QUARTOS]; // Array para armazenar o estado dos quartos ('V' para vazio, 'O' para ocupado)
    int numeroHospede;
 
    // Inicializar todos os quartos como vazios
    for (i; i < NUM_QUARTOS; i++) {
        estadoQuartos[i] = 'V';
    }
 
    // Solicitar número do hóspede ao usuário
    printf("Digite o número do hóspede: ");
    scanf("%d", &numeroHospede);
 

    return 0;
}