#include <stdio.h>

long long int nesimo (int num){
    if (num == 1) return 1;
    else return nesimo(num - 1) * 3;
}

int main(){
    
    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    printf("O %d numero da sequencia é: %lld", num, nesimo(num));

    return 0;
}
/*nesimo(6) -> nesimo(5) -> nesimo(4) -> nesimo(3) -> nesimo(2) -> nesimo(1) ->
retorna 1 -> retorna 3 -> retorna 9 -> retorna 27 -> retorna 81 -> retorna 243*/