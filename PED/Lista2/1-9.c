#include <stdio.h>

void dec2bin(int num){
    if (num <= 2){
        printf("1");
        return;
    }
    else {
        dec2bin(num/2);
        printf("%d", num % 2);
    }
}

int main() {

    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    dec2bin(num);

    return 0;
}