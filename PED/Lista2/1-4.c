#include <stdio.h>

int contaDigitos (int num){
    if (num < 10) return 1;
    else return contaDigitos(num / 10) + 1;
}

int main() {

    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    printf("Numero de digitos: %d", contaDigitos(num));

    return 0;
}