#include <stdio.h>

int main() {
	char yas_grubu;
	int nabiz_degeri;
	int tasikardi_sayisi = 0;
	int bradikardi_sayisi = 0;
	int enkucuknabiz = 2147483647;
	
	printf("Nabiz degerlendirme programina hosgeldiniz!\n");
	printf("(Sonlandirmak icin yas grubuna b ve nabiz degerini 0 yaziniz).\n\n");
	
	while(yas_grubu != 'b' || nabiz_degeri != 0){
		printf("Yas grubu(y:yetiskin, c:cocuk) ve nabiz degeri : ");
		scanf(" %c %d", &yas_grubu, &nabiz_degeri);
		switch(yas_grubu) {
			case 'y':
			case 'Y':
				if(60<=nabiz_degeri && nabiz_degeri <=100) {
					printf("Nabiz normal\n");
				}
				else if(100<nabiz_degeri){
					printf("Nabiz yuksek(Tasikardi)\n");
					tasikardi_sayisi++;
				}
				else if(0<nabiz_degeri && nabiz_degeri <60) {
					printf("Nabiz dusuk(Bradikardi)\n");
					bradikardi_sayisi++;
				}
				else {
					printf("Yanlis nabiz degeri girdiniz!!!\n");
				}
				break;
			case 'c':
			case 'C':
				if(80<=nabiz_degeri && nabiz_degeri <=100) {
					printf("Nabiz normal\n");
				}
				else if(100<nabiz_degeri){
					printf("Nabiz yuksek(Tasikardi)\n");
				}
				else if(0<nabiz_degeri && nabiz_degeri <80){
					printf("Nabiz dusuk(Bradikardi)\n");
				}
				else {
					printf("Yanlis nabiz degeri girdiniz!!!\n");
				}
				if(nabiz_degeri < enkucuknabiz && nabiz_degeri > 0) {
					enkucuknabiz = nabiz_degeri;
				}
				break;
			case 'b':
				break;
			default:
				printf("Yanlis kategori girdiniz!!!\n");
		}
	}
	printf("\n------------------------------------------------------------------\n");
	printf("Program sona erdi\n");
	printf("Cocuklarda en dusuk nabiz degeri : %d\n", enkucuknabiz);
	printf("Yetiskinlerde tasikardi sayisi : %d\n", tasikardi_sayisi);
	printf("Yetiskinlerde bradikardi sayisi : %d\n", bradikardi_sayisi);
}
