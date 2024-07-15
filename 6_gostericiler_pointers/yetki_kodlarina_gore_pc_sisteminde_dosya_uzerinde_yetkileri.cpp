#include <stdio.h>

int izinCoz(int, int *, int *, int *, int *);

int main() {
	int yetkiKodu;
	
	printf("Yetki kodunuzu giriniz(0-15): ");
	scanf("%d", &yetkiKodu);
	
	if(yetkiKodu < 0 || 15 < yetkiKodu) {
		printf("Gecersiz yetki kodu!");
		printf("\n\nYetki kodunuzu giriniz(0-15): ");
		scanf("%d", &yetkiKodu);
	}
	
	int sonuc, sayiBinlik, sayiYuzluk, sayiOnluk, sayiBirlik;
	sonuc = izinCoz(yetkiKodu, &sayiBinlik, &sayiYuzluk, &sayiOnluk, &sayiBirlik);
	
	printf("\n");
	printf("r-okuma \t =  %d\n", sayiBinlik);
	printf("w-yazma \t =  %d\n", sayiYuzluk);
	printf("x-calistirma \t =  %d\n", sayiOnluk);
	printf("p-yazdirma \t =  %d\n", sayiBirlik);
	
}

int izinCoz(int kod, int *a, int *b, int *c, int *d ) {
	int kalan, i = 1;
	int ikiliSayi = 0;
	while(kod != 0) {
		kalan = kod % 2;
		kod /= 2;
		ikiliSayi += kalan * i;
		i *= 10;
	}
	
	*a = ikiliSayi/1000;
	*b = (ikiliSayi/100) % 10;
	*c = (ikiliSayi/10) % 10;
	*d = ikiliSayi % 10;
}
