#include <stdio.h>

int main() {

    int i = 1;
    int numero;
    
    printf("Digite o número: ");
    scanf("%d", &numero);

    while (i < numero + 1){
        printf("%d \n", i);
        i += 1;
    }

    return 0;
}