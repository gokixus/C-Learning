#include <stdio.h>

int aracKoltukSayisiBul(int, int *, int *);

int main() {
	int kisi;
	printf("Tura kac kisi katilacak ? : ");
	scanf("%d", &kisi);
	
	int otobus, bosKoltuk;
	aracKoltukSayisiBul(kisi, &otobus, &bosKoltuk);
	printf("\nBu turun icin %d adet otobuse ihtiyac var.\nTurdaki bos koltuk sayisi: %d", otobus, bosKoltuk);
	return 0;
}

int aracKoltukSayisiBul(int kisiPtr, int *otobusPtr, int *bosKoltukPtr) {
	*otobusPtr = kisiPtr / 46 + 1;
	*bosKoltukPtr = 46*(*otobusPtr) % kisiPtr;
	return 0;
}
