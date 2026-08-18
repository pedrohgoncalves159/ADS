#include <stdio.h>

int main(){
    
    int idade;
    
    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (0 <= idade && idade <= 11){
        printf("Crianca");
    }
    else if (12 <= idade && idade <= 17){
        printf("Adolescente");
    }
    else if (18 <= idade && idade <=59){
        printf("Adulto");
    }
    else if (idade > 60){
        printf("Idoso");
    }

    return 0;
}
