#include <stdio.h>

int main() {
	float s = 1;
	float toplam;
	
	for(int i = 1; i <= 9; i++){
		s = 1 + 1/s;
		toplam += s;
	}
	printf("10. terim: %0.4f\n", s);
	printf("\nToplamlari = %0.4f", 1 + toplam);
	return 0;
}

// Çýktý: 10. terim: 1.62
