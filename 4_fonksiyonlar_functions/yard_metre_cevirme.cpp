#include <stdio.h>

float yardMetreCevir(float miktar, char cins) {
	if(cins == 'y') {
		return miktar * 0.9144;
	}
	else {
		return miktar / 0.9144;
	}
}

int main() {
	printf("%.4f", yardMetreCevir(3, 'y'));
	return 0;
}
