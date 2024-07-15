#include <stdio.h>

int bileklikCoz(int, char *, int *, int *);

int main() {
	int bileklikNo;
	printf("Bileklik numarasini giriniz(5 haneli): ");
	scanf("%d", &bileklikNo);
	if(bileklikNo/10000 != 1 && bileklikNo/10000 != 2) {
		printf("Bileklik numaralarinin ilk rakami 1 veya 2 olmalidir.\n");
		printf("Bileklik numarasini giriniz(5 haneli): ");
		scanf("%d", &bileklikNo);
	}
	
	char cinsiyet;
	int hafta, bebekSira;
	
	bileklikCoz(bileklikNo, &cinsiyet, &hafta, &bebekSira);
	printf("--------------------------\n");
	printf("Cinsiyet(E:Erkek, K:Kiz) : %c\nHafta\t\t\t : %d\nSira  Numarasi\t\t : %d", cinsiyet, hafta, bebekSira);
	
	return 0;
}

int bileklikCoz(int bileklikNoPtr, char *cinsiyetPtr, int *haftaPtr, int *bebekSiraPtr) {
	if(bileklikNoPtr/10000 == 1) {
		*cinsiyetPtr = 'E';
	}
	else {
		*cinsiyetPtr = 'K';
	}
	
	*haftaPtr = (bileklikNoPtr/100) % 100;
	*bebekSiraPtr = bileklikNoPtr % 100;
	
	return 0;
}
