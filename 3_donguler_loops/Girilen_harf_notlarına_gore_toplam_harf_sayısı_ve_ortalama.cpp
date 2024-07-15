#include <stdio.h>

int main() {
	char harf;
	int a_sayisi = 0;
	int b_sayisi = 0;
	int c_sayisi = 0;
	int f_sayisi = 0;
	int toplam_sayisi = 0;
	float toplam_not = 0;
	

	
	while(harf != 'H' && harf != 'h') {
		printf("Harf notunu giriniz(Cikis icin H yada h giriniz) : ");
	    scanf(" %c", &harf);
		switch(harf){
			case 'A':
			case 'a':
				a_sayisi++;
				toplam_sayisi++;
				toplam_not += 4.0;
				break;
			case 'B':
			case 'b':
				b_sayisi++;
				toplam_sayisi++;
				toplam_not += 3.0;
				break;
			case 'C':
			case 'c':
				c_sayisi++;
				toplam_sayisi++;
				toplam_not += 2.0;
				break;
			case 'F':
			case 'f':
				f_sayisi++;
				toplam_sayisi++;
				toplam_not += 0;
				break;
			default:
				printf("Gecersiz not!!!\n");
		}
	}
	printf("\n---------------------------------------------------\n");
	printf("Girilen A'larin sayisi : %d\n", a_sayisi);
	printf("Girilen B'larin sayisi : %d\n", b_sayisi);
	printf("Girilen C'larin sayisi : %d\n", c_sayisi);
	printf("Girilen F'larin sayisi : %d\n", f_sayisi);
	printf("Toplam harf sayisi : %d\n", toplam_sayisi);
	
	if(toplam_sayisi != 0) {
		printf("Ortalama: %0.2f\n", toplam_not/toplam_sayisi);
	}
	else {
		printf("Ortalama hesaplanmadi. En az bir harf notu girilmelidir.\n");
	}
	return 0;
}
