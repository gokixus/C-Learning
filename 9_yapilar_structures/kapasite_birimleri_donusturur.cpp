#include <stdio.h>
#include <string.h>

struct kapasite {
	char cins[2];
	float miktar;
}a1, a2;

void donustur(struct kapasite *, struct kapasite *);

int main() {
	printf("Kapasite miktar ve cinsini giriniz: ");
	scanf("%f%s", &a1.miktar, a1.cins);
	donustur(&a1, &a2);
	printf("Bir uste donusmus hali: %0.2f %s", a2.miktar, a2.cins);
	return 0;
}

void donustur(struct kapasite *a1, struct kapasite *a2) {
	if(strcmp(a1->cins, "kb") == 0) {
		a2->miktar = a1->miktar / 1024;
		strcpy(a2->cins, "mb");
	}
	else if(strcmp(a1->cins, "mb") == 0) {
		a2->miktar = a1->miktar / 1024;
		strcpy(a2->cins, "gb");
	}
	else if(strcmp(a1->cins, "gb") == 0) {
		a2->miktar = a1->miktar / 1024;
		strcpy(a2->cins, "tb");
	}
}
