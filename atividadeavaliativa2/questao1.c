#include <stdio.h>

int main() {
    int valores[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }
    for (i = 0; i < 10; i++) {
        printf("%d", valores[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");
    while (i > 1) {
        for (int j = 0; j < i - 1; j++) {
            valores[j] = valores[j] + valores[j + 1];
        }
        i--;
        for (int j = 0; j < i; j++) {
            printf("%d", valores[j]);
            if (j < i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}