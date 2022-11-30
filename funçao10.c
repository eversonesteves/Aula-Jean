#include <stdio.h>

int somaParesEntreAeB (int a, int b){
    int pares = 0;
    for (int i = a; i < b; i++){
        if (i % 2 == 0){
            pares += i;
        }
    }
    return pares;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", somaParesEntreAeB(a,b));
    return 0;
}
