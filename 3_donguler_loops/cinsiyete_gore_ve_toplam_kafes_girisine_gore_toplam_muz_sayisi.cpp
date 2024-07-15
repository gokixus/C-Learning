#include <stdio.h>

int main() {
	char cinsiyet;
	printf("Maymunun cinsiyetini giriniz(Erkek icin E, e ve disi icin K, k): ");
	scanf("%c", &cinsiyet);
	int kafes;
	printf("Maymun kafese kac kez girdi: ");
	scanf("%d", &kafes);
	int muz_sayisi;
	int toplam_muz = 0;
	
	switch(cinsiyet) {
		case 'D':
		case 'd':
			for(int i = 1 ; i<=kafes ; i++) {
                if(i<5) {
                	muz_sayisi = i;
				}
				else {
				    muz_sayisi = (toplam_muz - i)/2 + 1;
				}
				toplam_muz += muz_sayisi;
			    printf("%d. girisinde toplam %d muz yedi.\n", i, toplam_muz);
			}
			break;

		case 'E':
		case 'e':
			for(int i = 1 ; i<=kafes ; i++) {
                if(i<5) {
                	muz_sayisi = i;
				}
				else {
				    muz_sayisi = (toplam_muz - i)/2 + 1;
				}
			    toplam_muz = toplam_muz + muz_sayisi;
			    printf("%d. girisinde toplam %d muz yedi.\n", i, toplam_muz*2);
			}
			break;
		default:
			printf("Yanlis harf girdiniz!!! Lutfen dogru harf giriniz: ");
	}
	return 0;
}
