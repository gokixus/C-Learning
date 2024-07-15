#include  <stdio.h>

int main() {
	int baslangic;
	printf("Baslangic sayisini giriniz : ");
	scanf("%d", &baslangic);
	int sayi = baslangic;
	
	while(1){
		int onceki_sayi = sayi;
		printf("Bir sayi giriniz(bir önceki sayiyi girerseniz durur) : ");
		scanf("%d", &sayi);
		
		if(sayi == onceki_sayi) {
			printf("\nProgram durduruldu");
			break;
		}
		else if(sayi > onceki_sayi) {
			printf("ARTIYOR\n");
		}
		else {
			printf("AZALIYOR\n");
		}
	}
	return 0;
}
