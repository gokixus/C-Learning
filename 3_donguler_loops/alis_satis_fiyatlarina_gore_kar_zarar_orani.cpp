#include <stdio.h>

int main() {
	printf("XX Ithalat-Ihracat Sirketi Kar/Zarar Programi\n");
	printf("-------------------------------------------------\n");
	float alis;
	float satis;
    int kar_t = 0;
    int zarar_t = 0;

	while(1) {
		printf("Alis ve satis degerlerini giriniz: ");
		scanf("%f%f", &alis, &satis);
		
		float kar_zarar_orani = (satis-alis)/alis;
		
		if(alis == 0 && satis == 0 ) {
			break;
		}
		else if(alis<satis){
			printf("\tKar orani = %0.2f\n\n", kar_zarar_orani);
			kar_t++;
		}
		else if(satis<alis) {
			printf("\tZarar orani = %0.2f\n\n", -kar_zarar_orani);
			zarar_t++;
		}
		else {
			printf("Ne karda ne de zararda tam denktir.\n\n");
		}
	}
	printf("\n-------------------------------------------------\n");
	printf("Program sona erdi!\n");
	printf("Toplamda %d islemden kar, %d islemden zarar edilmistir", kar_t, zarar_t);
	
	return 0;
}
