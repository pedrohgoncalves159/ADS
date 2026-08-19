#include <stdio.h>

int somaDigitos(int num) {
    int soma = 0;
    while (num > 0){
        soma += (num % 10);
        num = num / 10;
    }
    return soma;
}

int main(){
    
    int num;
    
    printf("Informe o numero: ");
    scanf("%d", &num);

    printf("O resultado: %d", somaDigitos(num));
    
    return 0;
}