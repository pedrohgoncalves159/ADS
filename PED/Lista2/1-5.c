#include <stdio.h>

int soma_digitos (int num){
    if (num < 10) return num;
    else return soma_digitos(num / 10) + num % 10;
}

int main() {
    
    int num;

    printf("informe o numero: ");
    scanf("%d", &num);

    printf("Soma dos algarismos: %d", soma_digitos(num));
    
    return 0;
}

/*soma_digitos(123) -> soma_digitos(12) -> soma(1) -> retorna 1 -> retorna 3 -> retorna 6*/