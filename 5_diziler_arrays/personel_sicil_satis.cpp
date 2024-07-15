#include <stdio.h>

#define MAX 50

int main() {
	int personel, sicil[50], satis[50], ihtiyac[50], max_satis = 0, i;
	printf("Personel sayisini giriniz: ");
	scanf("%d", &personel);
	
	if(personel > MAX) {
		printf("Personel sayisi 50'den fazla olmamalidir.\n");
		printf("Personel sayisini giriniz: ");
		scanf("%d", &personel);
	}
	
	for(i = 0 ; i <= personel-1 ; i++) {
		printf("%d. personelin sicili ve satis miktari: ", i+1);
		scanf("%d%d", &sicil[i], &satis[i]);
		if(satis[i] > max_satis) {
			max_satis = satis[i];
		}
	}
	
	printf("\n\nPersonel ne kadar satis yapacak\n");
	printf("Sicil\t: ");
	for(i = 0 ; i <= personel-1 ; i++) {
		printf("%d\t", sicil[i]);
	}
	printf("\nIhtiyac\t: ");
	for(i = 0 ; i <= personel-1 ; i++) {
		ihtiyac[i] = max_satis - satis[i];
		printf("%d\t", ihtiyac[i]);
	}
	
	return 0;
}
