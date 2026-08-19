#include <stdio.h>

int isPrimo(int num){
    for (int i = 2; i <= num/2; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {

    for (int i = 2; i < 100; i++){
        int primo = isPrimo(i);
        if (primo == 1){
            printf("%d ", i);
        }
    }

    return 0;
}