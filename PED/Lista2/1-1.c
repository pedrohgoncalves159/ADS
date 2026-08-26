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
/*soma(3) -> soma(2) -> soma(1) -> retorna 1 -> retorna 3 -> retorna 6*/
