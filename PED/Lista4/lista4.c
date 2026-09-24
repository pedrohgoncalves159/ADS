#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *dados;
    int tamanho_alocado;
    int tamanho_ocupado;
} Vetor;

void append(Vetor *v, int valor){
    if (v->tamanho_alocado == v->tamanho_ocupado){
        v->dados =(int *) realloc(v->dados, 2*sizeof(int));
        v->tamanho_alocado+=2;
    }
    
    v->dados[v->tamanho_ocupado]=valor;

    v->tamanho_ocupado++;
}

int main() {
    
    return 0;
}