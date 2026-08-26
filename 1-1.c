#include <stdio.h>

int soma(int num){
    if (num == 1) return 1;
    else return soma(num-1) + num;
}

int main(){
    int num;
    
    printf("Informe o número: ");
    scanf("%d", &num);

    printf("A somatória é: %d", soma(num));
    return 0;
}