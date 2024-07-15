#include <stdio.h>

float gronsCevir(float miktar, char cins) {
	if(cins == 'o') {
		return miktar * 28.3495231;
	}
	else if(cins == 'g') {
		return miktar / 28.3495231;
	}
	else {
		printf("Gecersiz cins girdiniz ! \n");
		return 0;
	}
}

int main() {
	printf("%.7f\n", gronsCevir(3, 'o'));
	return 0;
}
