#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int min = 100, max = 999;
    int numero_secreto = rand() % (max - min +1) + min;
    char secreto[4];

    sprintf(secreto, "%d",numero_secreto);

    for (int i = 0; i < 10; i++){
        char tentativa[4], resposta[4];
        int entrada;
        
        printf("Informe um numero de 3 digitos: ");
        scanf("%d", &entrada);
        sprintf(tentativa, "%d", entrada);

        for (int i = 0; i < 3; i++){
            if (tentativa[i] == secreto[i]){
                resposta[i] = '+';
            }
            else {
                int achou = 0;
                for (int j = 0; j < 3; j++){
                    if (tentativa[i] == secreto[j]){
                        achou = 1;
                    }
                }
                if (achou == 1){
                    resposta[i] = '!';
                }
                else{
                    resposta[i] = '-';
                }
            }
        }

        resposta[3] = '\0';

        printf("Resultado: %s\n", resposta);
        if (resposta[0] == '+' && resposta[1] == '+' && resposta[2] == '+'){
            printf("Você acertou!!");
            return 0;
        }
    }

    
    return 0;
}