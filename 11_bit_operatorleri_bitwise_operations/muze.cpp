#include <stdio.h>

int main() {
	unsigned int muzeKodu, ziyaretciSayisi;
	printf("Muze kodunu giriniz(1-26): ");
	scanf("%u", &muzeKodu);
	printf("Ziyaretci sayisini giriniz: ");
	scanf("%u", &ziyaretciSayisi);
	
	unsigned int sikistirilmis = 0;
	sikistirilmis |= (muzeKodu & 0x1F);
	sikistirilmis |= (ziyaretciSayisi << 5);
	
	printf("\nSayisal degeri = %u", sikistirilmis);
	return 0;
}
