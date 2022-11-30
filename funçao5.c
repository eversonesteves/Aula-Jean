#include <stdio.h>

int somaPA(int termo1, int r, int n){
    int termoN;
    termoN = termo1 + (n - 1) * r;
    return ((termo1 + termoN) * n)/ 2;
}

int main() {
    int termo1,r,n;
    scanf("%d %d %d", &termo1, &r, &n);
    printf("a soma dos %d primeiros termos da PA e: %d", n, somaPA(termo1,r,n));
    return 0;
}
