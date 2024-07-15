#include <stdio.h>

int main() {
	int tavsan = 10000;
	int kurt = 10000;
	int tavsan_yarin;
	int kurt_yarin;
	
	for(int i = 1 ; i<=100 ; i++) {
		tavsan_yarin = (1 + 0.01) * tavsan - 0.00001 * tavsan * kurt;
		kurt_yarin = (1 - 0.005) * kurt + 0.00001 * 0.001 * tavsan * kurt;
		
		tavsan = tavsan_yarin;
		kurt = kurt_yarin;
		
		printf("Gun %d:  \tTavsan sayisi = %d\tKurt sayisi = %d\n", i, tavsan, kurt);
	}
	
	return 0;
}
