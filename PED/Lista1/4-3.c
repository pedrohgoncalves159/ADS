#include <stdio.h>

long fatorial(int num){
    long resultado = 1;
    if (num == 0){
        return 1;
    }
    for (int i = 1; i < num+1; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){
    
    int num;
    
    printf("Informe o numero: ");
    scanf("%d", &num);

    printf("O resultado: %d", fatorial(num));
    return 0;
}