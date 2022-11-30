#include <stdio.h>

double juros(double c, int m, double t){
    return c * m * (t/100);
}

int main() {
    double c, t;
    int m;
    scanf("%lf %d %lf", &c, &m, &t);
    printf("R$%.2lf de juros\n", juros(c,m,t));
    return 0;
}
