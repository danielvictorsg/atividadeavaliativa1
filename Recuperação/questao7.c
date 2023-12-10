#include <stdio.h>
#include <string.h>

int main(){
    char palavraJuquinha[21];

    while (scanf("%s", palavraJuquinha) != EOF) {
        if (strlen(palavraJuquinha) >= 10) {
            printf("palavrao\n");
        } else {
            printf("palavrinha\n");
        }
    }

    return 0;
}