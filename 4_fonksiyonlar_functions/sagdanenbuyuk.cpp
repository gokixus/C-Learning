#include <stdio.h>

int sagdanenbuyuk(int sayi) {
	int enBuyuk = sayi % 10;
    int sira = 1;
    int i = 1;
    while (sayi > 0) {
        int rakam = sayi % 10;
        if (rakam > enBuyuk) {
            enBuyuk = rakam;
            sira = i;
        }
        sayi /= 10;
        i++;
    }
    return sira;
}

int main() {
	printf("\n%d", sagdanenbuyuk(58582));
	printf("\n%d", sagdanenbuyuk(666));
}
