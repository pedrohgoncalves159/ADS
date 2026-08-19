#include <stdio.h>
#include <ctype.h>

int main(){
    
    int qnt_experimentos, coelhos = 0, sapos = 0, ratos = 0, total_cobaias = 0, entrada_qnt;
    char entrada;
    float porc_coelhos, porc_sapos, porc_ratos;

    printf("Informe a quantidade de experimentos: ");
    scanf("%d", &qnt_experimentos);

    for (int i = 1; i <= qnt_experimentos; i++){
        printf("Informe o numero de cobaias e o tipo, utilize sómente a inicial: ");
        scanf("%d %c" , &entrada_qnt, &entrada);
        entrada = toupper(entrada);
        switch (entrada){
            case 'S':
                sapos += entrada_qnt;
                break;
            case 'C':
                coelhos += entrada_qnt;
                break;
            case 'R':
                ratos +=entrada_qnt;
                break;
            default:
                printf("Entrada invalida, reinicie as entradas");
                return 0;
        }
        total_cobaias +=entrada_qnt;
    }

    porc_coelhos = ((float)coelhos / total_cobaias) * 100;
    porc_ratos = ((float)ratos / total_cobaias) * 100;
    porc_sapos = ((float)sapos / total_cobaias) * 100;

    printf("\nTotal: %d cobaias \n", total_cobaias);
    printf("Total de coelhos: %d \n", coelhos);
    printf("Total de ratos: %d \n", ratos);
    printf("Total de sapos: %d \n", sapos);
    printf("Percentual de coelhos: %.2f%% \n", porc_coelhos);
    printf("Percentual de ratos: %.2f%% \n", porc_ratos);
    printf("Percentual de sapos: %.2f%% \n", porc_sapos);

    return 0;
}