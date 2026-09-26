#include <stdio.h>
#include <stdlib.h>

void adiciona_valor(int *v, int tamanho, int valor, int pos){

    if (pos > tamanho - 1){
        v = (int *) realloc(v, (pos+1) * sizeof(int));
    }
    v[pos] = valor;

    }

int main(){

    int *v = (int *) malloc (sizeof(int));
    int tamanho, valor, pos;
    tamanho = 1;

    printf("Valor e posicao: \n");
    scanf("%d %d", &valor, &pos);

    adiciona_valor(v, tamanho, valor, pos);

    for (int i =0; i <= pos; i++){
        printf("%d ", v[i]);
    }



    return 0;
}