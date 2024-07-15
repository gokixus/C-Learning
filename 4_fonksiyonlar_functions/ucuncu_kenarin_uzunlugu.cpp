#include <stdio.h>
#include <math.h>

float kenar3(int, int, int);

int main() {
	int kenar1, kenar2, aci;
	printf("Ucgenin birinci kenarinin uzunlugunu giriniz: ");
	scanf("%d", &kenar1);
	printf("Ucgenin ikinci kenarinin uzunlugunu giriniz: ");
	scanf("%d", &kenar2);
	printf("Ucgenin ucuncu kenarinin uzunlugunu alacak aciyi giriniz: ");
	scanf("%d", &aci);
	printf("Ucgenin ucuncu kenarinin uzunlugu = %0.2f", kenar3(kenar1, kenar2, aci));
}

float kenar3(int kenar1, int kenar2, int aci) {
	float sonuc = sqrt(pow(kenar1, 2) + pow(kenar2, 2) - 2*kenar1*kenar2*cos(aci* M_PI/180));
	return sonuc;
}
