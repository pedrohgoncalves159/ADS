#include <stdio.h>
#include <stdlib.h>

void maior(int *num1,int *num2){
    int aux;
    if (*num1 < *num2){
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }
}

int main()
{
    int num1, num2;

    printf("Informe os numeros: ");
    scanf("%d %d", &num1, &num2);
    maior(&num1, &num2);
    printf("%d %d", num1, num2);
}