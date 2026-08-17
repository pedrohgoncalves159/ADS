/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int soma = 0;
    int contador = 0;
    while (true){
        int numero;
        
        printf("Informe o número: ");
        scanf("%d", &numero);
        
        if (numero == -1){
            printf("A media é: %d", soma / contador );
            break;
            
        }
        
        soma += numero;
        contador+=1;
    }

    return 0;
}