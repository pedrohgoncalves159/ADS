/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    int B;
    
    printf("Valor de A: ");
    scanf("%d", &A);
    printf("Valor de B: ");
    scanf("%d", &B);
    
    A = (A + B);
    B = (A - B);
    A = (A - B);
    
    
    printf("A virou %d e B virou %d", A, B);
    
    return 0;
}
