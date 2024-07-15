#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dugum {
	char cumle[250];
	struct dugum *ptr;
};

int ekle(struct dugum **p, char *cumle) {
	struct dugum *yeniptr;
	yeniptr = (dugum *)malloc(sizeof(struct dugum));
	if(yeniptr != NULL) {
		strcpy(yeniptr->cumle, cumle);
		yeniptr->ptr = *p;
		*p = yeniptr;
		return 1;
	} else {
		printf("Bellek doldu.");
		return 0;
	}
}

void terstenYazdir(struct dugum *p) {
	while(p != NULL) {
		int len = strlen(p->cumle);
		for (int i = len - 1; i >= 0; i--) {
			printf("%c", p->cumle[i]);
		}
		break;
	}
}

int main() {
	char cumle[250];
	printf("Cumle giriniz: ");
	fgets(cumle, sizeof(cumle), stdin);

	size_t len = strlen(cumle);
	if (len > 0 && cumle[len - 1] == '\n') {
		cumle[len - 1] = '\0';
	}
	
	struct dugum *bas = NULL;
	ekle(&bas, cumle);
	terstenYazdir(bas);
	return 0;
}
