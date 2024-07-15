#include <stdio.h>

double f(double x) {
    return 3 * x * x * x * x * x + 5 * x;
}

double integral(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += f(a + (i + 0.5) * h);
    }
    return h * sum;
}

int main() {
    double a, b;
    printf("a degerini giriniz: ");
    scanf("%lf", &a);
    printf("b degerini giriniz: ");
    scanf("%lf", &b);
    printf("Integral degeri: %lf\n", integral(a, b, 1000));
    return 0;
}

