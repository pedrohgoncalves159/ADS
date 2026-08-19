#include <stdio.h>

void maior(int num1, int num2, int num3){
    if (num1 > num2 && num1 > num3){
        printf("O maior é %d", num1);
    }
    else if (num2 > num1 && num2 > num3){
        printf("O maior é %d", num2);
    }
    else {
        printf("O maior é %d", num3);
    }
}

int main(){

    int num1, num2, num3;

    printf("Informe os 3 valores para comparar: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    maior(num1, num2, num3);

    return 0;
}