#include <stdio.h>

int sadelestir(int *, int *);

int main() {
	int pay, payda;
	printf("Pay ve payda giriniz: ");
	scanf("%d%d", &pay, &payda);
	printf("\nOnceki degeri\t: %d / %d ", pay, payda);
	
	int sadelestirme = sadelestir(&pay, &payda);
	printf("\nSadelestirilmis : %d / %d ", pay, payda);
	printf("\nSadelestirme yapildi mi ? %s", sadelestirme ? "Evet" : "Hayir");
}

int sadelestir(int *a, int *b) {
	int n, ebob;
	if(*a > *b) {
		n = *b;
	}
	else {
		n = *a;
	}
	
	for(int i = n ; i >= 1 ; i--) {
		if(*a % i == 0 && *b % i == 0) {
			*a /= i;
			*b /= i;
			ebob = i;
			break;
		}
	}
	
	if(ebob != 1) {
		return 1;
	}
	else {
		return 0;
	}
}
