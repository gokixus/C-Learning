#include <stdio.h>

int main() {
	char onay;
	printf("Son 3 ay kesintisiz calistiniz mi ? ");
	printf("\nEvet icin E veya e, Hayir icin H veya h yaziniz... ");
	scanf("%c", &onay);
	
	int sonMaasiniz;
	int primGun;
	float gunlukOdenek;
	float aylikOdenek;
	int toplamSure;
	
	switch(onay) {
		case 'E':
		case 'e':
			printf("\nPrim gun sayinizi giriniz: ");
	        scanf("%d", &primGun);
			if(primGun<600) {
				printf("\nMaalesef issizlik maasi odemesi alamazsiniz!");
			}
			if(600<=primGun && primGun<=899) {
			    printf("Calisirkenki son aylik maasiniz: ");
			    scanf("%d", &sonMaasiniz);
			    gunlukOdenek = (sonMaasiniz/30)*40/100;
			    aylikOdenek = gunlukOdenek*30;
			    toplamSure= 180;
			    printf("\n\nGunluk issizlik odenegi: %0.2f TL", gunlukOdenek);
			    printf("\nIssizlik aylik maasiniz: %0.2f TL", aylikOdenek);
			    printf("\nIssizlik odenegini alabileceginiz sure: %d gun", toplamSure);
			}
			if(900<=primGun && primGun<=1079) {
			    printf("\nCalisirkenki son aylik maasiniz: ");
			    scanf("%d", &sonMaasiniz);
			    gunlukOdenek = (sonMaasiniz/30)*40/100;
			    aylikOdenek = gunlukOdenek*30;
			    toplamSure= 240;
			    printf("\n\nGunluk issizlik odenegi: %0.2f TL", gunlukOdenek);
			    printf("\nIssizlik aylik maasiniz: 50.2f TL", aylikOdenek);
			    printf("\nIssizlik odenegini alabileceginiz sure: %d gun", toplamSure);
			}
			if(1080<=primGun){
			    printf("\nCalisirkenki son aylik maasiniz: ");
			    scanf("%d", &sonMaasiniz);
			    gunlukOdenek = (sonMaasiniz/30)*40/100;
			    aylikOdenek = gunlukOdenek*30;
			    toplamSure= 300;
			    printf("\n\nGunluk issizlik odenegi: %0.2f TL", gunlukOdenek);
			    printf("\nIssizlik aylik maasiniz: %0.2f TL", aylikOdenek);
			    printf("\nIssizlik odenegini alabileceginiz sure: %d gun", toplamSure);
			}
			break;
		case 'H':
		case 'h':
			printf("\nMaalesef issizlik maasi odemesi alamazsiniz!");
			break;
		default:
			printf("\nYanlis harf girdiniz!!! Evet icin E veya e, Hayir icin H veya h yaziniz");
	}
	return 0;
}
