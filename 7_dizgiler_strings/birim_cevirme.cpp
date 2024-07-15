#include <stdio.h>
#include <string.h>

int main() {
	char soru[100];
	char birim1[3], birim2[3];
	float miktar;
	int i;
	
	printf("Sorunuzu giriniz(Ornegin \"2m kac cm eder?\" biciminde olmalidir.): ");
	fgets(soru, sizeof(soru), stdin);
	sscanf(soru, "%f%s kac %s eder?", &miktar, birim1, birim2);
	
	if(strcmp(birim1, "km") == 0 && strcmp(birim2, "m") == 0) {
		printf("%0.2f km, %0.2f m eder\n", miktar, miktar*1000);
	}
	else if(strcmp(birim1, "km") == 0 && strcmp(birim2, "cm") == 0) {
		printf("%0.2f km, %0.2f cm eder\n", miktar, miktar*100000);
	}
	else if(strcmp(birim1, "km") == 0 && strcmp(birim2, "mm") == 0) {
		printf("%0.2f km, %0.2f mm eder\n", miktar, miktar*1000000);
	}
	else if(strcmp(birim1, "m") == 0 && strcmp(birim2, "km") == 0) {
		printf("%0.2f m, %0.2f km eder\n", miktar, miktar*0.01);
	}
	else if(strcmp(birim1, "m") == 0 && strcmp(birim2, "cm") == 0) {
		printf("%0.2f m, %0.2f cm eder\n", miktar, miktar*100);
	}
	else if(strcmp(birim1, "m") == 0 && strcmp(birim2, "mm") == 0) {
		printf("%0.2f m, %0.2f mm eder\n", miktar, miktar*1000);
	}
	else if(strcmp(birim1, "cm") == 0 && strcmp(birim2, "km") == 0) {
		printf("%0.2f cm, %0.2f km eder\n", miktar, miktar*0.00001);
	}
	else if(strcmp(birim1, "cm") == 0 && strcmp(birim2, "m") == 0) {
		printf("%0.2f cm, %0.2f m eder\n", miktar, miktar*0.01);
	}
	else if(strcmp(birim1, "cm") == 0 && strcmp(birim2, "mm") == 0) {
		printf("%0.2f cm, %0.2f mm eder\n", miktar, miktar*10);
	}
	else if(strcmp(birim1, "mm") == 0 && strcmp(birim2, "km") == 0) {
		printf("%0.2f mm, %0.2f km eder\n", miktar, miktar*0.000001);
	}
	else if(strcmp(birim1, "mm") == 0 && strcmp(birim2, "m") == 0) {
		printf("%0.2f mm, %0.2f m eder\n", miktar, miktar*0.001);
	}
	else if(strcmp(birim1, "mm") == 0 && strcmp(birim2, "cm") == 0) {
		printf("%0.2f mm, %0.2f cm eder\n", miktar, miktar*0.1);
	}
	else {
		printf("Bilinmeyen birim veya donusum\n");	
	}
	
	return 0;
}
