#include <stdio.h>

int cevir(int, int *, int *, int *);

int main() {
	int sayi;
	printf("Milimetre cinsinden bir uzunluk giriniz: ");
	scanf("%d", &sayi);
	
	int cm, dm, m;
	cevir(sayi, &cm, &dm, &m);
	printf("%d mm = %d cm = %d dm = %d m", sayi, cm, dm, m);
}

int cevir(int mmPtr, int *cmPtr, int *dmPtr, int *mPtr) {
	*cmPtr = mmPtr/10;
	*dmPtr = *cmPtr/10;
	*mPtr = *dmPtr/10;
}
