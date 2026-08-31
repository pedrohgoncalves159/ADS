#include <stdio.h>

void intervalo_decrescente (int num1, int num2){
    if (num1 > num2) return;
    else {
        printf("%d ", num2);
        return intervalo_decrescente(num1, num2 - 1);
    }
}

int main(){

    int num1, num2;

    printf("numeros do intervalo: ");
    scanf("%d %d", &num1, &num2);

    intervalo_decrescente(num1, num2);
}

/* intervalo(1, 5) -> print 5 -> intervalo(1, 4) -> print 4 -> intervalo(1, 3) ->
print 3 -> intervalo(1, 2) -> print 2 -> intervalo(1, 1) -> print 1 -> retorna(vazio) ate o inicio*/
