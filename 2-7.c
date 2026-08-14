#include <stdio.h>

int main(){
    
    int lado_A;
    int lado_B;
    int lado_C;

    printf("Informe o lado A: ");
    scanf("%d", &lado_A);
    printf("Informe o lado B: ");
    scanf("%d", &lado_B);
    printf("Informe o lado C: ");
    scanf("%d", &lado_C);

    if ((lado_A + lado_B < lado_C) || (lado_C + lado_B < lado_A) || (lado_C + lado_A < lado_B)){
        printf("Triangulo invalido.");
        return 0;
    }

    if (lado_A != lado_B && lado_B != lado_C){
        printf("Triangulo escaleno!");
    }

    else if (lado_A == lado_B && lado_B == lado_C){
        printf("Triangulo equilatero!");
    }

    else{
        printf("Triangulo isosceles!");
    }

    return 0;
}