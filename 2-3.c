#include <stdio.h>

int main(){
    
    int num;
    int maior;
    int i;

    printf("Informe um numero: ");
    scanf("%d", &num);
    maior = num;
    
    i = 0;
    while (i<2){
        printf("Informe um numero: ");
        scanf("%d", &num);
        if (num > maior){
            maior = num;
        }
        i+=1; 
    }
    printf("%d", maior);
    

    return 0;
}