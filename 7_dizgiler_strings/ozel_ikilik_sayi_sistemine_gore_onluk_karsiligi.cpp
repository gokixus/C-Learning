#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char kod[100];
	int i, toplam = 0;
	
	printf("Morse kodu giriniz: ");
	scanf("%s", kod);
	
	char sayi[100] = "";
	for(i = 0 ; i < strlen(kod) ; i++) {
		if(kod[i] == '.') {
			strcat(sayi, "1");
			toplam += pow(2, strlen(kod) - i-1);
		}
		else if(kod[i] == '-') {
			strcat(sayi, "0");
		}
	}
	printf("%s sayisina esittir(Onluk karsiligi %d dir.)\n", sayi, toplam);
	return 0;
}
