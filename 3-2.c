#include <stdio.h>

int main() {

    int i = 1;
    int numero;
    int soma = 0;
    
    printf("Digite o número: ");
    scanf("%d", &numero);

    while (i < numero + 1){
        soma += i;
        i += 1;
    }

    printf("%d", soma);

    return 0;
}