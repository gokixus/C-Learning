#include <stdio.h>

void sekizlikYap(int, int []);

int main() {
	int onluk, dizi[10] = {0}, i;
	printf("Onluk sayiyi giriniz: ");
	scanf("%d", &onluk);
	
	sekizlikYap(onluk, dizi);
	printf("Sekizlik karsiligi: ");
	for(i = 9 ; i >= 0 ; i--) {
		printf("%d ", dizi[i]);
	}
	
	return 0;
}

void sekizlikYap(int sayi, int a[]) {
	int i = 0;
	
	while(sayi > 0) {
		a[i] = sayi % 8;
		sayi = sayi / 8;
		i++;
	}
}
