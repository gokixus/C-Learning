#include <stdio.h>

void deneyimliAcemiAyirarakYaz(int [], int);

int main() {
	int memurSayisi, i;
	int sicilNumaralari[30];
		
	printf("Lutfen memur sayisi giriniz: ");
	scanf("%d", &memurSayisi);
	
	printf("%d adet memurun sicil numaralarini giriniz: ", memurSayisi);
	for(i = 0 ; i < memurSayisi ; i++) {
		scanf("%d", &sicilNumaralari[i]);
	}
	printf("-----------------------------------------------\n");
	deneyimliAcemiAyirarakYaz(sicilNumaralari, memurSayisi);
	return 0;
}

void deneyimliAcemiAyirarakYaz(int a[], int n) {
	int i, j;
	int acemi[30], deneyimli[30];
	int acemiSayisi = 0, deneyimliSayisi = 0;
	
	for(i = 0 ; i < n ; i++) {
		if(a[i] % 2 == 0) {
			acemi[acemiSayisi++] = a[i];
		}
		else {
			deneyimli[deneyimliSayisi++] = a[i];
		}
	}
	
	printf("Acemi memurlarin sicil numaralari: ");
	for(i = 0 ; i < acemiSayisi ; i++) {
		printf("%d, ", acemi[i]);
	}
	printf("\nDeneyimli memurlarin sicil numaralari: ");
	for(i = 0 ; i < deneyimliSayisi ; i++) {
		printf("%d, ", deneyimli[i]);
	}
	
	printf("\nNobet Listeleri:\n");
	for(i = 0 ; i < deneyimliSayisi ; i++) {
		for(j = 0 ; j < acemiSayisi ; j++) {
			printf("%d-%d\n", deneyimli[i], acemi[j]);
		}
	}
}
