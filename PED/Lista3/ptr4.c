#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char palavra[100];
    printf("palavra na variavel estatica: ");
    scanf("%s", &palavra);
    /*criando vetor estatico e recebendo conteudo*/

    char *dinamico = (char *) malloc(strlen(palavra) * sizeof(char));/*criando vetor
    dinamico*/

    for (int i = 0; i < strlen(palavra); i++){
        dinamico[i] = palavra[i];
    }
    
    
    printf("%s", dinamico);



    return 0;
}