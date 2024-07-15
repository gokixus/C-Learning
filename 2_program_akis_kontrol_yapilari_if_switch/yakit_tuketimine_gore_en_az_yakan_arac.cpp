#include <stdio.h>

int main() {
    float sehirici1, sehirici2, sehirici3;
    float sehirdisi1, sehirdisi2, sehirdisi3;
    printf("Birinci aracin sehir ici ve disi tuketim miktarini giriniz: ");
    scanf("%f%f", &sehirici1, &sehirdisi1);
    printf("Ikinci aracin sehir ici ve disi tuketim miktarini giriniz: ");
    scanf("%f%f", &sehirici2, &sehirdisi2);
    printf("Ucuncu aracin sehir ici ve disi tuketim miktarini giriniz: ");
    scanf("%f%f", &sehirici3, &sehirdisi3);
    
    float arac1 = sehirici1*55/100 + sehirdisi1*45/100;
    float arac2 = sehirici2*55/100 + sehirdisi2*45/100;
    float arac3 = sehirici3*55/100 + sehirdisi3*45/100;
    
    if(arac1>arac2 && arac2>arac3)
        printf("\nEn az yakit harcayan 3. aractir.\n(Ortalama yakit tuketimi = %0.2f)", arac3);
    if(arac2>arac1 && arac1>arac3)
        printf("\nEn az yakit harcayan 3. aractir.\n(Ortalama yakit tuketimi = %0.2f)", arac3);
    if(arac3>arac1 && arac1>arac2)
        printf("\nEn az yakit harcayan 2. aractir.\n(Ortalama yakit tuketimi = %0.2f)", arac2);
    if(arac1>arac3 && arac3>arac2)
        printf("\nEn az yakit harcayan 2. aractir.\n(Ortalama yakit tuketimi = %0.2f)", arac2);
    if(arac2>arac3 && arac3>arac1)
        printf("\nEn az yakit harcayan 1. aractir.\n(Ortalama yakit tuketimi = %0.2f)", arac1);
    if(arac3>arac2 && arac2>arac1)
        printf("\nEn az yakit harcayan 1. aractir.\n(Ortalama yakit tuketimi = %0.2f)", arac1);
        
    return 0;
}
