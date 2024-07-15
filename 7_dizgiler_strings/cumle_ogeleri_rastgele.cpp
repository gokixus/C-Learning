#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	char sifat[5][10] = {"Bu", "Su", "O", "Bir", "Birkac"};
    char ozne[5][10] = {"adam", "cocuk", "kus", "kedi", "araba"};
    char tumlec[5][10] = {"sinif", "kapan", "orman", "cayir", "agac"};
    char tumlecEk[5][15] = {"a", "dan", "in ustunden", "in altindan", "in icinden"};
    char yuklem[5][10] = {"atladi", "kacti", "zipladi", "kostu", "dustu"};

	
	srand(time(NULL));
	printf("Cumleler:\n");
	for(int i = 0 ; i < 20 ; i++) {
		int i_sifat = rand() % 5;
		int i_ozne = rand() % 5;
		int i_tumlec = rand() % 5;
		int i_tumlecEk = rand() % 5;
		int i_yuklem = rand() % 5;
		
		printf("%s %s %s%s %s.\n", sifat[i_sifat], ozne[i_ozne], tumlec[i_tumlec], tumlecEk[i_tumlecEk], yuklem[i_yuklem]);
	}
	return 0;
}
