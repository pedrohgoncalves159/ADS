#include <stdio.h>
#include <string.h>

int isPalindromo(char palavra[], int inicio, int fim){
    if (inicio >= fim) return 1;
    else if (palavra[inicio] == palavra[fim]) return isPalindromo(palavra, inicio + 1, fim -1);
    else return 0;
}

int main() {
    char palavra [50];

    printf("Informe a palavra: ");
    scanf("%s", &palavra);

    printf(" Esta palavra é um palindromo? %d\n (1 verdade, 0 falso)", isPalindromo(palavra, 0, strlen(palavra) - 1));
    
    return 0;
}