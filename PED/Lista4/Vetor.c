#include <stdio.h>
#include <stdlib.h>
#include "Vetor.h"

void append(Vetor *v, int valor){
    if (v->tamanho_alocado == v->tamanho_ocupado){
        v->dados =(int *) realloc(v->dados, 2*sizeof(int));
        v->tamanho_alocado+=2;
    }
    
    v->dados[v->tamanho_ocupado]=valor;

    v->tamanho_ocupado++;
}

Vetor slice(Vetor *v, int inicio, int fim){
    
    Vetor v2;
    v2.dados= (int *) malloc(sizeof(int));
    v2.tamanho_alocado = fim - inicio +1;
    v2.tamanho_ocupado = v2.tamanho_alocado;

    for (int i = 0; i < v2.tamanho_alocado; i++){
        v2.dados[i] = v->dados[i+inicio];
    }

    return v2;
}

void show(Vetor *v){
    for (int i = 0; i < v->tamanho_ocupado; i++){
        printf("%d ", v->dados[i]);
    }
}

void pop(Vetor *v){
    if(v->tamanho_ocupado == 0){
        exit(1);
    }
    v->tamanho_ocupado--;
}