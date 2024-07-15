#include <stdio.h>
#include <math.h>

void toplamMesafe();

void toplamMesafe(int hiz, int aci, float sure) {
	float toplam_metre = hiz * cos(aci * M_PI/180.0) * sure;
	printf("Cisim %0.2f metre uzaga duser.", toplam_metre);
}

int main() {
	int hiz;
	int aci;
	float sure;
	printf("Ilk hizi giriniz : ");
	scanf("%d", &hiz);
	printf("Aci giriniz : ");
	scanf("%d", &aci);
	printf("Havada kalma suresini giriniz(saniye) : ");
	scanf("%f", &sure);
	toplamMesafe(hiz, aci, sure);
	return 0;
}


