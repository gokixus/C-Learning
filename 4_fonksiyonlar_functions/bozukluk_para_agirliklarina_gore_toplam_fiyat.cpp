#include <stdio.h>

void cevirTL();

void cevirTL(float yuz_kr, float elli_kr, float yirmiBes_kr, float on_kr) {
	float toplam = yuz_kr*1000/8.2 + (elli_kr*1000/6.8)*0.5 + (yirmiBes_kr*1000/4.0)*0.25 + (on_kr*1000/3.15)*0.10; 
	printf("Bozukluklarin toplam ederi = %0.2f TL", toplam);
}

int main() {
	float yuz_kr, elli_kr, yirmiBes_kr, on_kr;
	printf("Bozukluklarin agirliklarini sirasiyla kg cinsinden giriniz\n(Sirasiyla 1 TL, 50 kurus, 25 kurus, 10 kurus) : \n");
	scanf("%f%f%f%f", &yuz_kr, &elli_kr, &yirmiBes_kr, &on_kr);
	printf("\n--------------------------------------------------\n");
	cevirTL(yuz_kr, elli_kr, yirmiBes_kr, on_kr);
	return 0;
}
