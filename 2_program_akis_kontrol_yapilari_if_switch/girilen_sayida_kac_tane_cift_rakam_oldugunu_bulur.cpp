#include <stdio.h>

int main() {
	int sayi;
	printf("Sayiyi giriniz(3 basamakli): ");
	scanf("%d", &sayi);
	
	int sayiyuz = (sayi/100)%10;
	int sayion = (sayi/10)%10;
	int sayibir = sayi%10;
	
	if(sayiyuz % 2 == 0 && sayion % 2 == 0 && sayibir % 2 == 0) {
		printf("Sayida 3 tane cift rakam vardir");
	}
	if(sayiyuz % 2 == 0 && sayion % 2 == 0 && sayibir % 2 != 0) {
		printf("Sayida 2 tane cift rakam vardir");
	}
	if(sayiyuz % 2 == 0 && sayion % 2 != 0 && sayibir % 2 == 0) {
		printf("Sayida 2 tane cift rakam vardir");
	}
	if(sayiyuz % 2 != 0 && sayion % 2 == 0 && sayibir % 2 == 0) {
		printf("Sayida 2 tane cift rakam vardir");
	}
	if(sayiyuz % 2 != 0 && sayion % 2 != 0 && sayibir % 2 == 0) {
		printf("Sayida 1 tane cift rakam vardir");
	}
	if(sayiyuz % 2 != 0 && sayion % 2 == 0 && sayibir % 2 != 0) {
		printf("Sayida 1 tane cift rakam vardir");
	}
	if(sayiyuz % 2 == 0 && sayion % 2 != 0 && sayibir % 2 != 0) {
		printf("Sayida 1 tane cift rakam vardir");
	}
	if(sayiyuz % 2 != 0 && sayion % 2 != 0 && sayibir % 2 != 0) {
		printf("Sayida hic cift rakam yoktur");
	}
	return 0;
}
