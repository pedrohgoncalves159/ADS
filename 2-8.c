#include <stdio.h>

int main (){
    
    float num1;
    float num2;
    char sinal;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o sinal: ");
    scanf(" %c", &sinal);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);


    if (sinal == '+'){
        printf("Resultado: %.2f", num1 + num2);
    }
    else if (sinal == '-'){
        printf("Resultado: %.2f", num1 - num2);
    }
    else if (sinal == '*'){
        printf("Resultado: %.2f", num1 * num2);
    }
    else if (sinal == '/'){
        if (num2 == 0){
            printf("Divisão invalida!");
            return 0;
        }
        printf("Resultado: %.2f", num1 / num2);
    }


    return 0;
}