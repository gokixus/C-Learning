#include <stdio.h>

int main() {
	int baslangic;
	int bitis;
	int ciftsayiAdet = 0;
	printf("Bir pozitif tam sayi olarak baslangic ve bitis degerlerini giriniz: ");
	scanf("%d%d", &baslangic, &bitis);
	
	while(baslangic<0 || bitis<0) {
		printf("YANLIS!!! Lutfen pozitif tam sayi giriniz: ");
		scanf("%d%d", &baslangic, &bitis);
	}
	if(baslangic % 2 != 0) {
		baslangic++;
	}
	
	printf("\nSayilar sunlardir: ");
	
	for(int i = baslangic ; i<=bitis ; i+=2) {
		printf("\n%d", i);
		ciftsayiAdet++;
	}
	printf("\n(Toplam %d adet)", ciftsayiAdet);
	
	return 0;
}
