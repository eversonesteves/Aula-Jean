#include <stdio.h>

double organizarNumeros(double a, double b, double c){
    double maior, menor;
    if (a > b) {
        if (a > c){
            maior = a;
            if (b > c){
                menor = c;
            } else {
                menor = b;
            }
        } else {
            maior = c;
            menor = b;
        }
    } else {
        if (b > c) {
            maior = b;
            if (a > c){
                menor = c;
            } else {
                menor = a;
            }
        } else {
            maior = c;
            menor = a;
        }
    }
    return maior + menor;
}

int main() {
    double a, b, c, menor , maior ;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%lf", organizarNumeros(a,b,c));
    return 0;
}
