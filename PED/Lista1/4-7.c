#include <stdio.h>

char tamanhoSequenciaCollatz (int num, int *maior_sq, int *maior_num){
    long atual;
    int maior_sequencia = 0, numero_maior_seq;
    char retorno[3];
    for (int i = 1; i <= num; i++) {
        atual = i;
        int sequencia_atual = 0;
        while (atual > 1){
            if (atual % 2 == 0){
                atual /= 2;
                sequencia_atual +=1;
            }
            else{
                atual = (atual*3)+1;
                sequencia_atual +=1;
            }
        }
        if (sequencia_atual > maior_sequencia){
            maior_sequencia = sequencia_atual;
            numero_maior_seq = i;
        }
    }
    *maior_sq = maior_sequencia;
    *maior_num = numero_maior_seq;
}

int main(){

    int num, maior_sq, maior_num;

    printf("Informe o numero: ");
    scanf("%d", &num);
    
    tamanhoSequenciaCollatz(num, &maior_sq, &maior_num);

    printf("O numero com a maior sequencia entre 1 e %d, é %d com %d elementos.",num, maior_num, maior_sq);
    
}