#include <stdio.h>

int main() {
    int matrixA[4][4], matrixB[4][4], resultMatrix[4][4];
    char operation[10];
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    scanf("%s", operation);
    if (strcmp(operation, "soma") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            }
        }
    } else if (strcmp(operation, "sub") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
            }
        }
    } else if (strcmp(operation, "mult") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultMatrix[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }
    }
    printf("%s:\n", operation);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}