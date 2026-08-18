#include <stdio.h>
#include <math.h>

int main() {
    int valor;
    int valor_restante, cedula_100, cedula_50, cedula_20, cedula_10, cedula_5, cedula_2, cedula_1;
    
    printf("Informe o valor: ");
    scanf("%d", &valor);
    
    cedula_100 = valor / 100;
    valor_restante = valor % 100;
    cedula_50 = valor_restante / 50;
    valor_restante = valor_restante % 50;
    cedula_20 = valor_restante / 20;
    valor_restante = valor_restante % 20;
    cedula_10 = valor_restante / 10;
    valor_restante = valor_restante % 10;
    cedula_5 = valor_restante / 5;
    valor_restante = valor_restante % 5;
    cedula_2 = valor_restante / 2;
    valor_restante = valor_restante % 2;
    cedula_1 = valor_restante / 1;

    printf("%d notas de 100 \n", cedula_100);
    printf("%d notas de 50 \n", cedula_50);
    printf("%d notas de 20 \n", cedula_20);
    printf("%d notas de 10 \n", cedula_10);
    printf("%d notas de 5 \n", cedula_5);
    printf("%d notas de 2 \n", cedula_2);
    printf("%d notas de 1 \n", cedula_1);

    return 0;
}
