#include <stdio.h>
#include <math.h>

int gunuBul(float []);
	
int main() {
	float altin[30];
	printf("Altin son 30 gunluk degerlerini giriniz: ");
	for(int i = 0 ; i < 30 ; i++) {
		scanf("%f", &altin[i]);
	}
	printf("Altinin degeri ortalama degerden en cok ayin %d. gununde farklilik gostermistir.", gunuBul(altin));
}

int gunuBul(float altin[]) {
	float ortalama;
	float toplam = 0;
	for(int i = 0 ; i < 30 ; i++) {
		toplam += altin[i];
	}
	ortalama = toplam / 30;
	
	int max_fark_degeri = 0;
	float max_fark = fabs(altin[0] - ortalama);
	for(int j = 1 ; j < 30 ; j++) {
		float fark = fabs(altin[j] - ortalama);
		if(fark > max_fark) {
			max_fark_degeri = j;
			max_fark = fark;
		}
	}
	return max_fark_degeri;
}
