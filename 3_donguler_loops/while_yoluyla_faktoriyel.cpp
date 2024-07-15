#include <stdio.h>

int main() {
	int sayi;
	int sayac=2;
	long sonuc=1;
	
	printf("Bir pozitif tamsayi giriniz: ");
	scanf("%d", &sayi);
	while( sayi < 0 ) {
		printf("\nYanlis!!! lutfen bir pozitif tamsayi giriniz: ");
		scanf("%d", &sayi);
	}
	while(sayac <= sayi) {
		sonuc*=sayac;
		sayac++;
	}
	printf("\n\nGirilen tamsayi: %d", sayi);
	printf("\nGirilen tamsayinin faktoriyeli: %d", sonuc);
	return 0;
}
