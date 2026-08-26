#include <stdio.h>

int fatorial(int num){
    if (num == 1) return 1;
    else return fatorial(num-1) * num;
}

int main(){
    int num;
    
    printf("Informe o número: ");
    scanf("%d", &num);

    printf("o fatorial é: %d", fatorial(num));
    return 0;
}