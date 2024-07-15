#include <stdio.h>

int main() {
	char harf;
	printf("Rakamin bas harfini giriniz: ");
	scanf("%c", &harf);
	
	switch(harf) {
		case 'o':
		case 'O':
			printf("One-Bir-1");
			break;
		case 't':
		case 'T':
			printf("Three-Uc-3");
			break;
		case 'F':
		case 'f':
			printf("Five-Bes-5");
			break;
		case 'S':
		case 's':
			printf("Seven-Yedi-7");
			break;
		case 'N':
		case 'n':
			printf("Nine-Dokuz-9");
			break;
		default:
			printf("Yanlis harf!");
	}
	return 0;
}
