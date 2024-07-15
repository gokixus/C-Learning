#include <stdio.h>

void yazdir(int baslangic, int bitis) {
	int sayac;
	printf("\n%d ve %d arasindaki 4'e veya 7'ye tam bolunebilen sayilar: \n", baslangic, bitis);
	for( sayac=baslangic ; sayac<=bitis ; sayac++){
		if(sayac % 4 == 0 || sayac % 7 == 0)
		    printf("\n%d", sayac);
	}
}
int main() {

    int baslangic;
    int bitis;
    
    printf("Baslangic degeri giriniz: ");
    scanf("%d", &baslangic);
    printf("Bitis degeri giriniz: ");
    scanf("%d", &bitis);
    yazdir(baslangic, bitis);
    return 0;
}
