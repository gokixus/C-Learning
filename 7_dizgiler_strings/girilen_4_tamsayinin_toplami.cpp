#include <stdio.h>
#include <stdlib.h>

int main() {
	char sayilar[4][20];
	int i, toplam = 0;
	
	for(int i = 0 ; i < 4 ; i++) {
		printf("Lutfen %d. tamsayiyi giriniz: ", i+1);
		scanf("%s", sayilar[i]);
	}
	
	for(i = 0 ; i < 4 ; i++) {
		toplam += atoi(sayilar[i]);
	}
	
	printf("\nGirilen tamsayilarin toplami: %d\n", toplam);
	return 0;
}
