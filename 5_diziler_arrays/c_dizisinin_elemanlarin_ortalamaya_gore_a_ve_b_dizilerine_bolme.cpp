#include <stdio.h>

int main() {
    int i;
    float c[10];
    float a[10];
    float b[10];
    int size_a = 0;
    int size_b = 0;
    float toplam = 0;
    float ortalama;
    
    printf("C dizisinin elemanlarini giriniz (10 adet): ");
    for(i = 0 ; i < 10 ; i++) {
        scanf("%f", &c[i]);
	}
	for(i = 0 ; i < 10 ; i++) {
        toplam += c[i];
	}
	ortalama = toplam / 10;
    printf("Dizinin aritmetrik ortalamasi = %0.2f\n", ortalama);
    
    for(i = 0 ; i < 10 ; i++) {
        if(ortalama <= c[i]) {
            a[size_a] = c[i];
            size_a++;
        }
        else{
            b[size_b] = c[i];
            size_b++;
        }
    }
    
    printf("A dizisinin elemanlari: ");
    for(i= 0 ; i < size_a ; i++) {
        printf("%0.2f ", a[i]);
    }
    printf("\nB dizisinin elemanlari: ");
    for(i= 0 ; i < size_b ; i++) {
        printf("%0.2f ", b[i]);
    }
}

