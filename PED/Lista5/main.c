#include <stdio.h>
#include <stdlib.h>
#include "Lista5.h"

int main() {
    
    Lista lista;
    lista.cabeca=NULL;
    lista.tamanho=0;

    insert(&lista, 0, 1);
    insert(&lista, 1, 2);
    insert(&lista, 2, 3);
    insert(&lista, 3, 4);

    show(&lista);

    printf("\n");
    insert(&lista, 5, 99);
    insert(&lista, 0, 10);
    insert(&lista, 2, 3);

    printf("\n");
    show(&lista);

    insert(&lista, 0, 1);

    printf("\n");
    show(&lista);

    printf("\nelemento na posicao 3: %d", acessar(&lista, 3));

    remover(&lista, 1);

    printf("\n");
    show(&lista);

    remover(&lista, 0);

    printf("\n");
    show(&lista);

    remover(&lista, 1);
    remover(&lista, 3);

    printf("\n");
    show(&lista);

    printf("\n");
    remover(&lista, 5);

    liberar(&lista);

    printf("\n");
    show(&lista);

    return 0;
}