#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int iris1_a1=123, iris1_a2=456, iris1_a3=789;
    int iris2_a1=987, iris2_a2=654, iris2_a3=321;
    int iris3_a1=111, iris3_a2=222, iris3_a3=333;
    int iris4_a1=444, iris4_a2=555, iris4_a3=666;
    
    int  entradaA1, entradaA2, entradaA3;

    printf("Informe  a entrada A1: ");
    scanf("%d", &entradaA1);
    printf("Informe  a entrada A2: ");
    scanf("%d", &entradaA2);
    printf("Informe  a entrada A3: ");
    scanf("%d", &entradaA3);
    
    if ((iris1_a1 + 5) >= entradaA1 && entradaA1 >= (iris1_a1 - 5)){
        if ((iris1_a2 + 5) >= entradaA2 && entradaA2 >= (iris1_a2 - 5)){
            if ((iris1_a3 + 5) >= entradaA3 && entradaA3 >= (iris1_a3 - 5)){
                printf("Usuario numero 1 autenticado com sucesso!");
                return 0;
            }
        }
    }
    else if ((iris2_a1 + 5) >= entradaA1 && entradaA1 >= (iris2_a1 - 5)){
        if ((iris2_a2 + 5) >= entradaA2 && entradaA2 >= (iris2_a2 - 5)){
            if ((iris2_a3 + 5) >= entradaA3 && entradaA3 >= (iris2_a3 - 5)){
                printf("Usuario numero 2 autenticado com sucesso!");
                return 0;
            }
        }
    }
    else if ((iris3_a1 + 5) >= entradaA1 && entradaA1 >= (iris3_a1 - 5)){
        if ((iris3_a2 + 5) >= entradaA2 && entradaA2 >= (iris3_a2 - 5)){
            if ((iris3_a3 + 5) >= entradaA3 && entradaA3 >= (iris3_a3 - 5)){
                printf("Usuario numero 3 autenticado com sucesso!");
                return 0;
            }
        }
    }
    else if ((iris4_a1 + 5) >= entradaA1 && entradaA1 >= (iris4_a1 - 5)){
        if ((iris4_a2 + 5) >= entradaA2 && entradaA2 >= (iris4_a2 - 5)){
            if ((iris4_a3 + 5) >= entradaA3 && entradaA3 >= (iris4_a3 - 5)){
                printf("Usuario numero 4 autenticado com sucesso!");
                return 0;
            }
        }
    }
    printf("Nenhum usuário encontrado!");

    return 0;
}