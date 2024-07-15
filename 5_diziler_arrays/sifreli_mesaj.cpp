#include <stdio.h>

int main() {
	char harf[6][5] = {
		{'A', 'J', 'K', 'P', 'Ü'}, 
		{'B', 'Ý', 'L', 'R', 'V'}, 
		{'C', 'I', 'M', 'S', 'Y'}, 
		{'Ç', 'H', 'N', 'Þ', 'Z'}, 
		{'D', 'G', 'O', 'T', '.'}, 
		{'E', 'F', 'Ö', 'U', '?'}
	};
	
	int i;
	int sayi[10];
	
	printf("Sifreli mesajin iki basamakli sayilarini giriniz(10 adet): ");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%d", &sayi[i]);	
	}
	
	printf("Gercek mesaj : ");
	for(i = 0 ; i < 10 ; i++) {
		printf("%c", harf[sayi[i]/10-1][sayi[i]%10-1]);
	}
	
	return 0;
}
