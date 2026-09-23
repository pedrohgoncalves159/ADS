#include <stdio.h>
#include <stdlib.h>

void adiciona_valor(int *v, int *tamanho, int valor, int pos){
    if (pos > *tamanho - 1){
        *tamanho = pos+1;    
        v = (int *) realloc(v, *tamanho * sizeof(int));
    }
    else {
        v[pos] = valor;
    }
}

int main() {

    int valor, pos, tamanho = 3;
    int *v = (int *) calloc(3, sizeof(int));
    
    printf("Informe o valor e a posicao:");
    scanf("%d", &valor);
    scanf("%d", &pos);

    adiciona_valor(v, &tamanho, valor, pos);

    for(int i = 0; i <= tamanho; i++){
        printf ("%d", v[i]);
    }

    return 0;
}