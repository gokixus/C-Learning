#include <stdio.h>

int main() {
	char dersKodlari[5][20];
	int i;
	printf("Ders kodlarini giriniz(5 adet):\n");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%s", dersKodlari[i]);
	}
	printf("\n");
	printf("B harfiyle baslayanlar:\n");
	for(i = 0 ; i < 5 ; i++) {
		if(dersKodlari[i][0] == 'B') {
			printf("%s\n", dersKodlari[i]);
		}
	}
	return 0;
}
