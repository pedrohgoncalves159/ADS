/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int segundos;
    int minutos;
    int horas;
    
    printf("Informe os segundos: ");
    
    scanf("%d", &segundos);
    
    horas = segundos / 3600;
    minutos = (segundos % 3600) /60; 
    segundos = segundos % 60;
    
    printf("tempo: %d:%d:%.2d", horas, segundos, minutos);

    return 0;
}
