#include <stdio.h>

int main() {
	int notlar[5][3];
	int i, j;
	int kalinan_ders;
	for(i = 0 ; i < 5 ; i++) {
		printf("%d. ogrencinin aldigi notlari: ", i+1);
		for(j = 0 ; j < 3 ; j++) {
			scanf("%d", &notlar[i][j]);
		}
	}
	for(i = 0 ; i < 5 ; i++) {
		kalinan_ders = 0;
		for(j = 0 ; j < 3 ; j++) {
			int toplam_not = 0;
			if(notlar[i][j] <= 40 ) {
				kalinan_ders++;
			}
			else if(notlar[i][j] > 40  && notlar[i][j] < 60) {
				for(int k = 0 ; k < 3 ; k++) {
					toplam_not += notlar[i][k];
				}
				float ortalama = toplam_not / 3.0;
				if(ortalama >= 60) {
					break;
				}
				else {
					kalinan_ders++;
				}
			}
		}
	printf("%d. ogrencinin kaldigi ders sayisi : %d\n", i+1, kalinan_ders);
	}
	
}
