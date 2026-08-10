/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int nota1;
    int nota2;
    int nota3;
    float media;
    
    printf("Digite as três notas em sequência:");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);
    media = ((nota1 + nota2 + nota3) / 3);
    printf(" A média é: %.2f", media);
    
    return 0;
}