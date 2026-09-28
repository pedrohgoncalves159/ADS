#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * aloca(int n, const int preenche){
    if (preenche){
        return (int *)calloc(n, sizeof(int));
    }
    else {
        return (int *)malloc(n*sizeof(int));
    }
}

void imprime (int *v, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%d ", *(v+i));
    }
}

void preenche(int *v, int tamanho, int valor, const int is_aleatorio){

    if (is_aleatorio){
        for (int i = 0; i < tamanho; i++){
            *(v+i) = rand() % 101;
        }
    }
    else {
        for (int i = 0; i < tamanho; i++){
            *(v+i) = valor;
        }
    }
}

int main() {

    srand(time(NULL));
    const int FALSE = 0, TRUE = 1;

    int *v1, *v2;

    v1 = aloca(3, FALSE);
    v2 = aloca(3, TRUE);

    imprime(v1, 3);
    printf("\n");
    imprime(v2, 3);

    preenche(v1, 3, 4, TRUE);
    preenche(v2, 3, 4, FALSE);

    printf("\n");
    imprime(v1, 3);
    printf("\n");
    imprime(v2, 3);
    return 0;
}