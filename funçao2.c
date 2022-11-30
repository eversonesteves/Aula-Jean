#include <stdio.h>

double compNumero (double x, double y){
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main () {
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%lf", compNumero(x,y));
    return 0;
}
