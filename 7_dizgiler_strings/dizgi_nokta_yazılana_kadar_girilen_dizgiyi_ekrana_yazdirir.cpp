#include <stdio.h>

int main() {
	int i = 0;
	char c;
	char cumle[80];
	puts("Bir cumle giriniz: ");
	while((c = getchar()) != '.') {
		cumle[i++] = c;
	}
	cumle[i] = '\0';
	puts("Girilen cumle : ");
	puts(cumle);
	return 0;
}
