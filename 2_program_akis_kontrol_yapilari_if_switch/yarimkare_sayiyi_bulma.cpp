#include <stdio.h>

int main() {
	int sayi;
	printf("4 basamakli bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    int ab, cd;
    ab = (sayi/1000)*10 + (sayi/100)%10;
    cd = (sayi/10)%10*10 + sayi%10;
    int toplam;
    toplam = ab + cd;
    int kare;
    kare = toplam*toplam;
    
    if(sayi == kare)
        printf("Girilen sayi %d Yarimkare bir sayidir", sayi);
    else
        printf("Girilen sayi %d Yarimkare bir sayi degildir", sayi);
    
    return 0;
}
