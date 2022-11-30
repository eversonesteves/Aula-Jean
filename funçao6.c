#include <stdio.h>

int formaGeometrica (double b, double h){
    if (b == h) {
        return 1;
    } else {
        return 0;
    }
}

int main (){
    double b, h;
    scanf("%lf %lf", &b, &h);
    printf("%d", formaGeometrica(b,h));
    return 0;
}
