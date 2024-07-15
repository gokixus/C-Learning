#include <stdio.h>

int main() {
	int sayi1, sayi2, sayi3;
	int azalan_adet = 0;
	int karisik_adet = 0;
	int artan_adet = 0;
	
	while(1) {
		printf("Uc sayi giriniz(Durdurmak icin uc sayiyi da ayni sayi giriniz) : ");
		scanf("%d%d%d", &sayi1, &sayi2, &sayi3);
		
		if(sayi1 == sayi2 && sayi2 == sayi3) {
			break;
		}
		else if(sayi1 < sayi2 && sayi2 < sayi3) {
			printf("Girilenler artan sirada dizilmis\n\n");
			artan_adet++;
		}
		else if(sayi3 < sayi2 && sayi2 < sayi1) {
			printf("Girilenler azalan sirada dizilmis\n\n");
			azalan_adet++;
		}
		else {
			printf("Girilenler karisik sirada dizilmis\n\n");
			karisik_adet++;
		}
	}
	printf("-----------------------------------------------\n");
	printf("Program bitti.\n");
	printf("%d tanesi azalan, %d tanesi artan, %d tanesi de karisik siradadir.", azalan_adet, artan_adet, karisik_adet);
	
	return 0;
}
