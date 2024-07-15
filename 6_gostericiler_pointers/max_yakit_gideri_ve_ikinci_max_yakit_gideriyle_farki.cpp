#include <stdio.h>

void enCokYakitVeKomsuBul(float *yakit, int n, int *enCok, float *komsu) {
	int i, maxYakit = 0, ikinciMaxYakit;
	for(i = 0 ; i < n ; i++) {
		if(yakit[i] > maxYakit) {
			maxYakit = yakit[i];
			*enCok = i+1;
			ikinciMaxYakit = yakit[i+1];
		}
	}
	*komsu = maxYakit - ikinciMaxYakit;
}

int main() {
	float yakit[10] = {350.04, 351, 450.50, 90.2, 180, 162, 382, 349, 761.50, 452.50};
	int enCok;
	float komsu;
	enCokYakitVeKomsuBul(yakit, 10, &enCok, &komsu);
	printf("\nEn cok yakit gideri %d numara", enCok);
	printf("\nKomsusu ile gider farki: %0.2f TL", komsu);
	return 0;
}
