#include <stdio.h>

int main() {
	int gun, ay, yil;
	printf("Tarih giriniz: ");
	scanf("%d%*c%d%*c%d", &gun, &ay, &yil);
	printf("gun = %d, ay = %d, yil = %d\n", gun, ay, yil);
	printf("\nTarih giriniz: ");
	scanf("%d%*c%d%*c%d", &gun, &ay, &yil);
	printf("gun = %d, ay = %d, yil = %d\n", gun, ay, yil);
	return 0;
}
