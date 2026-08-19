/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int i = 2;
   
    printf("Informe o número: ");
    scanf("%d", &numero);
    
    while (i <= numero/2){
        if (numero % i ==0) {
            printf("Não é primo");
            return 0;
        }
        i += 1;
    }
    
    printf("é primo");
    
    return 0;
}
