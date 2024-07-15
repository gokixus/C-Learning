#include <stdio.h>
#include <math.h>

void toplamSure(int hiz);

void toplamSure(int hiz, int aci) {
	float toplam_zaman = 2 * ((hiz*sin(aci * M_PI/180))/9.80); 
	printf("Cisim %0.3f saniye sonra yere duser", toplam_zaman);
}

int main() {
	int hiz, aci;
	printf("Ilk hizi giriniz : ");
	scanf("%d", &hiz);
	printf("Aciyi giriniz : ");
	scanf("%d", &aci);
	toplamSure(hiz, aci);
	return 0;
}


