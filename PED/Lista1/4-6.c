#include <stdio.h>

int isCapicua(int num){

    int inverso = 0;
    int numOriginal = num;
    while (num > 0){
        inverso = inverso * 10 + (num %10);
        num = num / 10;
    }

    if (numOriginal == inverso){
        return 1;
    }
    else {
        return 0;
    }
    

}

int main(){

    int num;
    int capicua;    
    
    printf("Informe o numero: ");
    scanf("%d", &num);
    capicua = isCapicua(num);

    if (capicua == 1){
        printf("É capicua.");
    }

    else{
        printf("Não é capicua");
    }
    return 0;
}