#include <stdio.h>
#include <math.h>

void func2Grau(double a, double b, double c){
    double r1, r2;
    double d = (b * b) - (4 * a * c);
    if (d == 0){
        r1 = (-b + sqrt(d)) / 2 * a;
        printf("%.2lf\n", r1);
    } else if (d > 0){
        r1 = (-b + sqrt(d)) / 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;
        printf("%.2lf %.2lf\n", r1, r2);
    } else {
        printf("a equacao nao possui raizes\n");
    }
}

int main() {
    double a, b, c, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);
    func2Grau(a, b, c);
    return 0;
}
