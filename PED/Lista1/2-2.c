#include <stdio.h>

int main(){
    
    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    if (num > 0){
        printf("Numero positivo");
    }
    else if(num == 0){
        printf("Zero");
    }
    else {
        printf("Numero negativo");
    }

    return 0;
}
