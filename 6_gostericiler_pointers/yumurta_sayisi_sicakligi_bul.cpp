#include <stdio.h>

int yumurtaSayisiSicakligiBul(char cinsiyetPtr, int yavruPtr, int *sicaklik1Ptr, int *sicaklik2Ptr, int *yumurtaPtr) {
	if(cinsiyetPtr == 'D') {
		*sicaklik1Ptr = 33;
		*sicaklik2Ptr = 34;
	}
	else {
		*sicaklik1Ptr = 28;
		*sicaklik2Ptr = 31;
	}
	
	*yumurtaPtr = yavruPtr*10/9;
}

int main() {
	char cinsiyet;
	int yavru;
	printf("Istenen yavrularin cinsiyetini giriniz(D: Disi, E: Erkek): ");
	scanf("%c", &cinsiyet);
	while(cinsiyet != 'D' && cinsiyet != 'E'){
		printf("HATA!!! Dogru cinsiyet giriniz lutfen: ");
		scanf("%c", &cinsiyet);
	}
	printf("Cikmasini istediginiz yavrularin sayisini giriniz: ");
	scanf("%d", &yavru);
	
	int sicaklik1, sicaklik2, yumurta;
	yumurtaSayisiSicakligiBul(cinsiyet, yavru, &sicaklik1, &sicaklik2, &yumurta);
	printf("\nKulucka sicakligi(alt ust C): %d oC - %d oC\nKuluckaya konacak yumurta sayisi: %d", sicaklik1, sicaklik2, yumurta);
	return 0;
}
