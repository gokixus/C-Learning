#include <stdio.h>

int main() {
	int sayi;
	int yeniSayi;
	int adet = 0;
	
	printf("Sayiyi giriniz: ");
	scanf("%d", &sayi);
	while(sayi <= 0) {
		if(sayi < 0) {
			printf("YANLIS !!! LUTFEN POZITIF BIR SAYI GIRINIZ.\n\n");
			printf("Sayiyi giriniz: ");
			scanf("%d", &sayi);
		}
		else if(sayi == 0) {
			printf("SIFIR DEGER GIRDINIZ !!! GIRECEGINIZ DEGER EN AZ DEGER 1 OLMALIDIR\n\n");
			printf("Sayiyi giriniz: ");
			scanf("%d", &sayi);
		}
	} 
	
	printf("\nCollatz serisi : ");
	while(sayi > 0) {
		if(sayi%2 == 0) {
			yeniSayi = sayi/2;
		}
		else{
			yeniSayi = sayi*3 + 1;
		}
		adet++;
		printf("%d, ", sayi);
		if(sayi == 1) {
			break;
		}
		else {
			sayi = yeniSayi;
		}
	}
	printf("\n\nSeri %d adet sayidan olusur.", adet);
}
