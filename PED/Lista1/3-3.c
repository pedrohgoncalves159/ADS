#include <stdio.h>

int main() {

    int i = 1;
    int numero;
    int resultado;
    
    printf("Digite o número: ");
    scanf("%d", &numero);

    while (i < 11){
        resultado = numero * i;
        printf("%d \n", resultado);
        i += 1;
    }

    return 0;
}
