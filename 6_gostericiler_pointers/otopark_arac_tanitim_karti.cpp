#include <stdio.h>

int serinoCoz(int, char *, int *, int *);

int main() {
	int seriNo;
	printf("Arac tanitim karti seri numarasini giriniz(4 haneli): ");
	scanf("%d", &seriNo);
	
	char blok;
	int daireNo, arac;
	
	serinoCoz(seriNo, &blok, &daireNo, &arac);
	printf("Bu arac %c blokta %d nolu dairenin %d. aracidir.", blok, daireNo, arac);
	
}

int serinoCoz(int seriNo_ptr, char *blok_ptr, int *daireNo_ptr , int *arac_ptr) {
	char bloklar[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J'};
	int bloklar_index = seriNo_ptr/1000 - 1;
	*blok_ptr = bloklar[bloklar_index];
	*daireNo_ptr = (seriNo_ptr/10) % 100;
	*arac_ptr = seriNo_ptr % 10;
}
