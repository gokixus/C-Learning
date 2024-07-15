#include <stdio.h>

int main() {
	int ogrenciNotlari[101] = {0};
	int ogrenciNo[100];
	int ogrenciNotu[100];
	int toplamOgrenci = 0;
	int enCokAdetNotu = 0;
	int enSikOlanNotu = 0;
	
	FILE *dosya = fopen("ogrenci_not.txt", "r");
	if(dosya == NULL) {
		printf("Dosya acilamadi.\n");
		return 1;
	}
	
	while (fscanf(dosya, "%d %d", &ogrenciNo[toplamOgrenci], &ogrenciNotu[toplamOgrenci]) != EOF) {
        ogrenciNotlari[ogrenciNotu[toplamOgrenci]]++;
        toplamOgrenci++;
    }
    fclose(dosya);
	
	for (int i = 0; i <= 100; i++) {
        if (ogrenciNotlari[i] > enCokAdetNotu) {
            enCokAdetNotu = ogrenciNotlari[i];
            enSikOlanNotu = i;
        }
    }
	
	printf("Bu sinifta, yigilmanin oldugu not %d dur. (%d tane)\n", enSikOlanNotu, enCokAdetNotu);
	printf("Bu notu alan ogrenciler:\n");
	for (int i = 0; i < toplamOgrenci; i++) {
		if (ogrenciNotu[i] == enSikOlanNotu) {
            printf("%d\n", ogrenciNo[i]);
        }
	}
	
	return 0;
}
