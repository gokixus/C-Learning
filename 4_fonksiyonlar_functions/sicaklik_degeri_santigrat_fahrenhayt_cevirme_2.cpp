#include <stdio.h>

float cdenfye(float santigrat) {
    return (santigrat * 9 / 5) + 32;
}

float fdencye(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float santigrat, fahrenheit;
    printf("Santigrat degerini giriniz : ");
    scanf("%f", &santigrat);
    printf("Fahrenheit degerini giriniz : ");
    scanf("%f", &fahrenheit);

    printf("\n%0.1f C = %0.1f F\n", santigrat, cdenfye(santigrat));
    printf("%0.1f F = %0.1f C\n", fahrenheit, fdencye(fahrenheit));

    return 0;
}

