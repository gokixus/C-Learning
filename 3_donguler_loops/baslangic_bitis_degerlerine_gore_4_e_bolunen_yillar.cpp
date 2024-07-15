#include <stdio.h> 

int main() {
	int baslangic;
	int bitis;
	printf("Baslangic yilini giriniz: ");
	scanf("%d", &baslangic);
	printf("Bitis yilini giriniz: ");
	scanf("%d", &bitis);
	printf("------------------------------\n");
	int toplamadet = 0;
	
	if(baslangic % 4 != 0) {
		baslangic+=(4-(baslangic%4));
	}
	for(int i = baslangic ; i <= bitis ; i+=4) {
		printf("%d, ", i);
		toplamadet++;
	}
	printf("\nToplam %d adet", toplamadet);
	return 0;
}
