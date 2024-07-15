#include <stdio.h>

int islemYaz(char islem_turu, int basamak_sayisi) {
	int sayi1, sayi2;
	printf("Sorunuz nedir ?\nOrnek: 650/150\n\n");
	scanf("%d %c %d", &sayi1, &islem_turu, &sayi2);
	switch(islem_turu) {
		case '/':
			if(sayi2 == 0) {
				printf("Bolen sifir olamaz!!!\n\n");
				break;
			}
			else if(sayi1 % sayi2 != 0) {
				printf("Girilen bolen sayi bolunene tam bolunmeli!!!\n\n");
				break;
			}
			else if(sayi1 < sayi2) {
				printf("Bolen sayi bolunenden buyuk olamaz!!!\n\n");
				break;
			}
			else {
				return sayi1 / sayi2;
			}
		case '*':
			return sayi1*sayi2;
	}
}

int main() {
	printf("Sonucunuz %d\n\n", islemYaz('/', 3));
	printf("Sonucunuz %d\n\n", islemYaz('*', 2));
}
