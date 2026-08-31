#include <stdio.h>

int Josefo (int n, int k){
    if (n == 0) return 0;
    else return (Josefo(n - 1, k) + k) % n;
}

int main()
{
    printf("%d", Josefo(8, 2));
    
    return 0;
}