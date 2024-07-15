#include <stdio.h>
#include <string.h>
#include <ctype.h>

void hesapla(char*,char*,int*,int*,int*);

int main() {
	char dogruCevap[100];
	printf("Dogru cevap anahtarini giriniz: ");
	fgets(dogruCevap, sizeof(dogruCevap), stdin);
	dogruCevap[strcspn(dogruCevap, "\n")] = '\0';
	char ogrenciCevap[100];
	printf("Ogrencinin cevaplarini giriniz: ");
	fgets(ogrenciCevap, sizeof(ogrenciCevap), stdin);
	ogrenciCevap[strcspn(dogruCevap, "\n")] = '\0';
	
	int dogru = 0, yanlis = 0, bos = 0;
	hesapla(dogruCevap, ogrenciCevap, &dogru, &yanlis, &bos);
	printf("Dogru Sayisi\t: %d\nYanlis Sayisi\t: %d\nBos Sayisi\t: %d\n", dogru, yanlis, bos);
}

void hesapla(char *dogruCevap, char *ogrenciCevap, int *dogru, int *yanlis, int *bos) {
	int i;
	int uzunluk1 = strlen(dogruCevap);
	int uzunluk2 = strlen(ogrenciCevap);
	
	for(i = 0 ; i < uzunluk1 ; i++) {
		ogrenciCevap[i] = toupper(ogrenciCevap[i]);
		
		if (ogrenciCevap[i] == ' ') {
            (*bos)++;
        } else if (dogruCevap[i] == ogrenciCevap[i]) {
            (*dogru)++;
        } else {
            (*yanlis)++;
        }
	}
}
