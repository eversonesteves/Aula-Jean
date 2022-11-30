#include <stdio.h>

void divisores(int n){
    int cont;
    for (int i = 0; i <= n; i++){
        cont = i + 1;
        if (n % cont == 0){
            printf("%d\n", cont);
        }
    }
}

int main () {
    int n, i;
    scanf("%d", &n);
    divisores(n);
    return 0;
}
