#include <stdio.h>
#include <stdlib.h>
#include "Vetor.h"

int main() {
    
    Vetor v, v2;
    v.dados =(int *) malloc(sizeof(int));
    v.tamanho_alocado = 1;
    v.tamanho_ocupado = 0;

    append(&v, 5);
    append(&v, 7);
    append(&v, 9);
    append(&v, 1);
    append(&v, 2);
    append(&v, 3);

    show(&v);

    pop(&v);

    printf("\n");
    show(&v);

    v2=slice(&v, 1, 3);

    printf("\n");
    show(&v2);

    /*printf("%d", v.dados[0]);
    printf("%d", v.dados[1]);
    printf("%d", v.dados[2]);
    printf("\n %d, %d", v.tamanho_alocado, v.tamanho_ocupado);*/

    return 0;
}