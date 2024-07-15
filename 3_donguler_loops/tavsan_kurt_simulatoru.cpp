#include <stdio.h>

int main() {
	int tavsan = 10000;
	int kurt = 0;
	int tavsan_yarin;
	int kurt_yarin;
	int minK;
	
	for(int i = 1 ; i<=100 ; i++) {
		tavsan_yarin = (1 + 0.01) * tavsan - (0.00001 * tavsan * kurt);
		kurt_yarin = (1 + 0.005) * kurt + (0.00001 * 0.01 * tavsan * kurt);
		
		tavsan = tavsan_yarin;
		kurt = kurt_yarin;
		
		
	}
	minK = tavsan / (0.00001*0.001);
	printf("Minumum kurt sayisi: %d", minK);
	return 0;
}
