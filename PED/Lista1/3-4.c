#include <stdio.h>

int main() {

    int i = 1;
    int numero;
    int num_pares = 0;
    
    printf("Digite o número: ");
    scanf("%d", &numero);

    while (i < numero){
        if (i % 2 == 0){
            num_pares += 1;
        }
        i += 1;
    }

    printf("Numeros pares: %d", num_pares);

    return 0;
}
