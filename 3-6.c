/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int fatorial = 1;
    
    printf("Informe o número: ");
    scanf("%d", &numero);
    
    for (int i = 1; i < (numero + 1); i++){
        fatorial *= i;
    }
    
    printf("fatorial de %d é : %d", numero, fatorial);
    
    return 0;
}