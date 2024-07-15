#include <stdio.h>

#define MAX_DESTEK 500
#define MAX_IL 50

int main() {
	int il, plaka[MAX_IL], destek[MAX_IL], fazlalik, i;
	printf("Il sayisini giriniz: ");
	scanf("%d", &il);
	if(il > MAX_IL) {
		printf("Il sayisini en fazla 50 girebilirsiniz!\n");
		printf("Il sayisini giriniz: ");
		scanf("%d", &il);
	}
	
	for(i = 0 ; i <= il-1 ; i++) {
		printf("%d. ilin plakasi ve destek miktari : ", i+1);
		scanf("%d%d", &plaka[i], &destek[i]);
	}
	
	printf("\nEn az destek alan ile gore, illerin fazlalari\n");
	printf("Il\t:  ");
	for(i = 0 ; i <= il-1 ; i++) {
		printf("%d\t", plaka[i]);
	}
	printf("\nFazla\t:  ");
	for(i = 0 ; i <= il-1 ; i++) {
		if(destek[i] >= MAX_DESTEK) {
			fazlalik = destek[i] - MAX_DESTEK;
		}
		else{
			fazlalik = 0;
		}
		printf("%d\t", fazlalik);
	}
	return 0;
}
