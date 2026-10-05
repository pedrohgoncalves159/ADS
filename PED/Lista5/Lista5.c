#include <stdlib.h>
#include <stdio.h>
#include "Lista5.h"

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct Lista {
    struct No *cabeca;
    int tamanho;
} Lista;

void insert (Lista *lista, int pos, int valor){

    if (pos > lista->tamanho || pos < 0){
        printf("posicao invalida");
        return;
    }
    /*^^^^^ trata posiçõs inválidas (posições negativas ou que não existem na lista)*/
    
    No *novo = malloc(sizeof(No));
    
    if (novo==NULL) {
        
        printf("Falha ao criar novo Nó;");

        return;
    }
    
    novo->valor = valor;
    novo->proximo = NULL;
    /*^^^^^^ cria e trata novo Nó ^^^^^^*/
    
    if (pos == 0){
        novo->proximo = lista->cabeca;
        lista->cabeca = novo;
        lista->tamanho ++;
        return;
    }
    /*^^^^^^ aloca o novo nó na primeira posição mesmo que a lista esteja vazia ^^^^^^*/

    No *atual = lista->cabeca;

    if (pos == lista->tamanho){
        while (atual->proximo != NULL){
            atual = atual->proximo;
        }
        atual->proximo = novo;
        lista->tamanho++;
        return;
    }
    /*^^^^^^ aloca novo nó na ultima posição ^^^^^^*/

    for (int i = 0; i < pos-1; i++){
        atual = atual->proximo;
    }
    novo->proximo = atual->proximo;
    atual->proximo = novo;
    lista->tamanho++;
    return;
    /*^^^^^^ aloca o novo nó no meio (posição escolhida) da lista ^^^^^^*/
}

void show(Lista *lista){

    if(lista->cabeca == NULL) printf("lista vazia");

    No *atual = lista->cabeca;
    while (atual != NULL){
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
}

int acessar(Lista *lista, int pos){

    if (lista->cabeca == NULL) exit(1);
    /*retorna NULL se a lista estiver vazia*/

    if (pos > lista->tamanho-1 || pos < 0){
        printf("posicao invalida");
        exit(1);
    }
    /*verifica se a posição acessada existe*/

    No *atual = lista->cabeca;
    for (int i = 0; i < pos; i++){
        atual = atual->proximo;
    }
    return atual->valor;
    /*retorna a posição acessada*/
}

void remover(Lista *lista, int pos){

    if (lista->cabeca == NULL){
        printf("Lista vazia");
        return;
    }
    /*Verifica se a lista está vazia*/

    if (pos > lista->tamanho-1 || pos < 0){
        printf("posicao invalida");
        return;
    }
    /*verifica se a posição existe*/

    No *anterior = lista->cabeca, *atual = anterior->proximo;
    /*define o no atual e o anterior, (atual inicia sendo o segundo da lista)*/

    if (pos == 0) {
        lista->cabeca = atual;
        lista->tamanho--;
        free(anterior);
        return;
    }
    /*remove o primeiro elemento*/

    for (int i = 0; i < pos-1; i++){
        atual = atual->proximo;
        anterior = anterior->proximo;
    }
    anterior->proximo = atual->proximo;
    free(atual);
    lista->tamanho--;
    /*remove qualquer elemento do meio/ultimo*/
}

/*
void liberar(Lista *lista){
    
    if (lista->cabeca == NULL) return;
    
    No *anterior = lista->cabeca;

    lista->cabeca = lista->cabeca->proximo;

    free(anterior);

    lista->tamanho--;

    liberar(lista);  
}
    
versão recursiva */

void liberar(Lista *lista){

    while (lista->cabeca != NULL){

        No *anterior = lista->cabeca;
        
        lista->cabeca = lista->cabeca->proximo;
        
        free(anterior);
        lista->tamanho--;
    }

    return;
    

}