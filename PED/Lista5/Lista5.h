#ifndef LISTA5_H
#define LISTA5_H

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct Lista {
    struct No *cabeca;
    int tamanho;
} Lista;

void insert (Lista *lista, int pos, int valor);/*insere um novo */

void show(Lista *lista);/*mostra todos os elementos da lista*/

int acessar(Lista *lista, int pos);/*acessa uma posição da lista*/

void remover(Lista *lista, int pos);/*remove um elemento da lista*/

void liberar(Lista *lista);/*libera todos os nós da lista*/

#endif