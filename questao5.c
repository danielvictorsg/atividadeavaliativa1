#include <stdio.h>

int main(){
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 == num2){
        printf("Os valores lidos sao iguais\n");
    } else {
        if (num1 > num2){
            printf("%d eh maior que %d\n", num1, num2);
            if (num1 % num2 == 0){
                printf("%d eh multiplo de %d\n", num1, num2);
            } else {
                printf("%d nao eh multiplo de %d\n", num1, num2);
            }
        } else {
            printf("%d eh maior que %d\n", num2, num1);
            if (num2 % num1 == 0){
                printf("%d eh multiplo de %d\n", num2, num1);
            } else {
                printf("%d nao eh multiplo de %d\n", num2, num1);
            }
        }
    }
    
    return 0;
}