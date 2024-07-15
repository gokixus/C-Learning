#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y, r;
} Circle;

int isSoddy(Circle c1, Circle c2, Circle c3) {
    double sum_radii = c1.r + c2.r + c3.r;
    double sum_reciprocal_radii = 1/c1.r + 1/c2.r + 1/c3.r;
    double product_reciprocal_radii = 1/(c1.r * c2.r) + 1/(c2.r * c3.r) + 1/(c3.r * c1.r);

    if (fabs(sum_radii * sum_reciprocal_radii - 2) < 1e-6 && fabs(sum_radii * product_reciprocal_radii - 1) < 1e-6) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    Circle c1, c2, c3;

    printf("1. �emberin koordinatlar�n� ve yaricapini giriniz: ");
    scanf("%lf %lf %lf", &c1.x, &c1.y, &c1.r);

    printf("2. �emberin koordinatlar�n� ve yaricapini giriniz: ");
    scanf("%lf %lf %lf", &c2.x, &c2.y, &c2.r);

    printf("3. �emberin koordinatlar�n� ve yaricapini giriniz: ");
    scanf("%lf %lf %lf", &c3.x, &c3.y, &c3.r);

    if (isSoddy(c1, c2, c3)) {
        printf("Bu �emberler Soddy �emberleridir.\n");
    } else {
        printf("Bu �emberler Soddy �emberleri de�ildir.\n");
    }

    return 0;
}

