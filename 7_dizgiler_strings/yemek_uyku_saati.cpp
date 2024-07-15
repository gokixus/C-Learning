#include <stdio.h>
#include <string.h>
#include <ctype.h>

int yemekUykuSayisiniBul(char*,int*,int*);

int main() {
	char gozlem[24];
	printf("Gozlem saati girinz(24 saat): ");
	fgets(gozlem, sizeof(gozlem), stdin);
	gozlem[strcspn(gozlem, "\n")] = '\0';
	
	int yemekS = 0, uykuS = 0;
	yemekUykuSayisiniBul(gozlem, &yemekS, &uykuS);
	printf("Yemek Ogun\t= %d\nUyku Seans\t= %d", yemekS, uykuS);
	return 0;
}

int yemekUykuSayisiniBul(char *g, int *y, int *u) {
	for(int i = 0 ; i < strlen(g) ; i++) {
		g[i] = toupper(g[i]);
		if(g[i] == 'U' && g[i+1] == 'Y') {
			(*y)++;
		} else if(g[i] == 'Y' && g[i+1] == 'U') {
			(*u)++;
		} else if(g[i] == 'U' && i == 0) {
			(*u)++;
		} else if(g[i] == 'Y' && i == 0) {
			(*y)++;
		}
	}
}
