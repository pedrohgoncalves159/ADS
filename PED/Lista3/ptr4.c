#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char palavra[100];
    printf("palavra na variavel estatica: ");
    scanf("%s", &palavra);
    printf("%d", sizeof(palavra));


    return 0;
}