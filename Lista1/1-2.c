/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int temperatura;
    float temp_Convertida;
    
    printf("Informe a temperatura: ");
    scanf("%d", &temperatura);
    temp_Convertida = (temperatura * 9/5 + 32);
    printf(" convertido fica: %f", temp_Convertida);
    
    return 0;
}
