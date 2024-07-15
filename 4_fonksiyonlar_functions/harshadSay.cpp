#include <stdio.h>

int harshadSay(int, int);

int main() {
	printf("%d\n", harshadSay(124, 141));
	printf("%d\n", harshadSay(21, 41));
	return 0;
}

int harshadSay(int sayi1, int sayi2) {
	int kalan;
	int bolen_t = 0;
	int toplam = 0;
	for(int i = sayi1 ; sayi1 <= sayi2 ; i++){
		while(i > 0)
			kalan = i % 10;
			bolen_t += kalan;
			i /= 10;
			if(i % kalan == 0) {
				toplam++;
		}
	}
	return toplam;
}
