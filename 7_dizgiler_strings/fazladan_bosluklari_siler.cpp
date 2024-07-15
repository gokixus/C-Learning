#include <stdio.h>

void fazladanBosluklariSil(char *);

int main() {
	char cumle[255];
	printf("Cumle giriniz: ");
	fgets(cumle, sizeof(cumle), stdin);
	fazladanBosluklariSil(cumle);
	printf("Son hali: %s", cumle);
	return 0;
}

void fazladanBosluklariSil(char *c) {
	int i = 0, j = 0;
	while(c[i]) {
		if(c[i] != ' ' || (i > 0 && c[i-1] != ' ')) {
			c[j++] = c[i];
		}
		i++;
	}
	c[j] = '\0';
}
