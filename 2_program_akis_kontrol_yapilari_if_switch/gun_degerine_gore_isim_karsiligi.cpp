#include <stdio.h>

int main() {
	int sayi;
	printf("Gun degerini giriniz(1-7): ");
	scanf("%d", &sayi);
	
	switch(sayi) {
		case 1:
			printf("Girdiginiz deger Pazartesi gunudur");
			break;
		case 2:
			printf("Girdiginiz deger Sali gunudur");
			break;
		case 3:
			printf("Girdiginiz deger Carsamba gunudur");
			break;
		case 4:
			printf("Girdiginiz deger Persembe gunudur");
			break;
		case 5:
			printf("Girdiginiz deger Cuma gunudur");
			break;
		case 6:
			printf("Girdiginiz deger Cumartesi gunudur");
			break;
		case 7:
			printf("Girdiginiz deger Pazar gunudur");
			break;
		default:
			printf("INANAMIYORUM SIZE !!! YANLIS DEGER GIRDINIZ");
	}
	return 0;
}
