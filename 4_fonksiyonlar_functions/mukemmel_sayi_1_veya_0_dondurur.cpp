#include <stdio.h>

int mukemmelSayiBul(int mukemmelSayi) {
	int toplam = 0;
	int i;
	for(i = 1 ; i < mukemmelSayi ; i++) {
		if(mukemmelSayi % i == 0) {
			toplam += i;
		}
	}
	if(toplam == mukemmelSayi ) {
		return 1;
		}
	else {
		return 0;
	}
}

int main() {
	int sayi;
	printf("Bir tam sayi giriniz : ");
	scanf("%d", &sayi);
	
	if(mukemmelSayiBul(sayi) == 1) {
		printf("Girilen sayi mukemmel sayidir.");
	}
	else {
		printf("Girilen sayi mukemmel sayi degildir.");
	}
	return 0;
}
