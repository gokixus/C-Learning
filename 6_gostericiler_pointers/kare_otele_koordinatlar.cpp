#include <stdio.h>

void otele(float *aX1, float *aY1, float *aX2, float *aY2, float bX1, float bY1, float bX2, float bY2) {
    float aCenterX = (*aX1 + *aX2) / 2;
    float aCenterY = (*aY1 + *aY2) / 2;
    float bCenterX = (bX1 + bX2) / 2;
    float bCenterY = (bY1 + bY2) / 2;

    float translateX = bCenterX - aCenterX;
    float translateY = bCenterY - aCenterY;

    *aX1 += translateX;
    *aY1 += translateY;
    *aX2 += translateX;
    *aY2 += translateY;
}

int main() {
    float aX1 = 2.0, aY1 = 4.0, aX2 = 4.0, aY2 = 2.0;
    float bX1 = 6.0, bY1 = 10.0, bX2 = 10.0, bY2 = 6.0;
    otele(&aX1, &aY1, &aX2, &aY2, bX1, bY1, bX2, bY2);
    printf("aX1 = %.2f, aY1 = %.2f, aX2 = %.2f, aY2 = %.2f\n", aX1, aY1, aX2, aY2);
    return 0;
}

