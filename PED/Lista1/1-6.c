/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float km_por_litro, km_percorrido, valor_combustivel, total, valor_pessoa;
    int num_pessoas;
    
    printf("Quantos quilometros por litro? ");
    scanf("%f", &km_por_litro);
    printf("Quantos quilometros serão percorridos? ");
    scanf("%f", &km_percorrido);
    printf("Qual o valor do litro do combustivel? ");
    scanf("%f", &valor_combustivel);
    printf("Quantas pessoas irão no carro? ");
    scanf("%d", &num_pessoas);
    
    total= (valor_combustivel*(km_percorrido/km_por_litro));
    valor_pessoa = total/num_pessoas;
    
    printf("O valor por pessoa é de R$:%.2f", valor_pessoa);
    
    return 0;
}
