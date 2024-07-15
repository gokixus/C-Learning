#include <stdio.h>

int main() {
	int yas;
	float kilo;
	float boy;
	
	printf("Yasinizi giriniz: ");
	scanf("%d", &yas);
	printf("Kilonuzu giriniz(kg): ");
	scanf("%f", &kilo);
	printf("Boyunuzu giriniz(m): ");
	scanf("%f", &boy);
	
	printf("\nYasiniz: %d", yas);
	float vucut_kitle_endeksi = kilo / (boy*boy);
    printf("\nVucut kitle endeksiniz: %f", vucut_kitle_endeksi);
	
	if(17>=yas && 13<=yas && 24.99>=vucut_kitle_endeksi && 18.50<=vucut_kitle_endeksi)
	    printf("\n\nTebrikler! askeri liseye girebilirsiniz.");
	else
	    printf("\n\nUzgunuz! askeri liseye giremiyorsunuz!");
	return 0;
}
