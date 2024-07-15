#include <stdio.h>

int main() {
	int baslangic;
	int bitis;
	
	while(1) {
		printf("Baslangic degerini giriniz: ");
		scanf("%d", &baslangic);
		printf("Bitis degerini giriniz: ");
		scanf("%d", &bitis);
		
		if(bitis <= baslangic) {
			printf("HATA!!! Baslangic degeri bitis degerinden buyuk yada esit olamaz.\n\n");
			continue;
		}
		else{
			break;
		}
	}
	int toplam = 0;
	int t_toplam = 0;
	for(int i = baslangic ; i<=bitis ; i++) {
		if( i % 3 == 0 || i % 11 == 0) {
			printf("%d, ", i);
			toplam++;
	      	t_toplam += i;
		}
	}
	printf("\n\nKurala uyan toplamda %d adet sayi bulunmaktadir.", toplam);
	printf("\nToplamlari = %d ", t_toplam);
	
	return 0;
}
