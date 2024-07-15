#include <stdio.h>

int main() {
	int olcum;
	float olcum_deger;
	float toplam = 0;
			
	while(1) {
		printf("\nOlcum sayisi : ");
		scanf("%d", &olcum);
		
		if(olcum == 0) {
			break;
		}
		
		for(int i = 1; i <= olcum ; i++) {
			printf("%d. Olcum degeri : ", i);
			scanf("%f", &olcum_deger);
			toplam += olcum_deger;
			continue;
		}
	}
	printf("Genel toplam %0.2f", toplam);

	return 0;
}
