#ifndef VETOR_H
#define VETOR_H

typedef struct {
    int *dados;
    int tamanho_alocado;
    int tamanho_ocupado;
} Vetor;

void append(Vetor *v, int valor); /*Adiciona ao final*/

Vetor slice(Vetor *v, int inicio, int fim); /*retorna um novo vetor com os elementos do intervalo escolhido*/

void show(Vetor *v); /*imprime os todos os elementos do vetor*/

void pop(Vetor *v); /*Remove o ultimo elemento do vetor*/

#endif