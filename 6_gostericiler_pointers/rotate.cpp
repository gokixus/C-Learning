#include <stdio.h>

int cevir(int *, int *, int *, int *, char, int);

int main () {
	int a, b, c, d, yon_miktari;
	char yon;
	printf("4 adet sayi giriniz: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("Cevirme yonu(saat yonu icin D, tersi icin T): ");
	getchar();
	scanf("%c", &yon);
	printf("Girilen yonde kac kere cevrilecek ? : ");
	scanf("%d", &yon_miktari);
	
	printf("\n\nSayilarin cevrilmeden onceki halleri :\n\t%d	%d	%d	%d", a, b, c, d);
	cevir(&a, &b, &c, &d, yon, yon_miktari);
	printf("\nSayilarin cevrildikten sonraki halleri :\n\t%d	%d	%d	%d", a, b, c, d);
	
}

int cevir(int *sayi1, int *sayi2, int *sayi3, int *sayi4, char yn, int n) {
	int temp;
    switch(yn) {
        case 'D':
            if(n % 4 == 1) {
                temp = *sayi1;
                *sayi1 = *sayi4;
                *sayi4 = *sayi3;
                *sayi3 = *sayi2;
                *sayi2 = temp;
            }
            if(n % 4 == 2) {
                temp = *sayi1;
                *sayi1 = *sayi3;
                *sayi3 = temp;
                temp = *sayi2;
                *sayi2 = *sayi4;
                *sayi4 = temp;
            }
            if(n % 4 == 3) {
                temp = *sayi1;
                *sayi1 = *sayi2;
                *sayi2 = *sayi3;
                *sayi3 = *sayi4;
                *sayi4 = temp;
            }
            if(n % 4 == 0 && n != 0) {
                temp = *sayi1;
                *sayi1 = *sayi4;
                *sayi4 = temp;
                temp = *sayi2;
                *sayi2 = *sayi3;
                *sayi3 = temp;
            }
            if(n == 0) {
                break;
            }
            break;
        case 'T':
            if(n % 4 == 1) {
                temp = *sayi1;
                *sayi1 = *sayi4;
                *sayi4 = *sayi3;
                *sayi3 = *sayi2;
                *sayi2 = temp;
            }
            if(n % 4 == 2) {
                temp = *sayi1;
                *sayi1 = *sayi3;
                *sayi3 = temp;
                temp = *sayi2;
                *sayi2 = *sayi4;
                *sayi4 = temp;
            }
            if(n % 4 == 3) {
                temp = *sayi1;
                *sayi1 = *sayi2;
                *sayi2 = *sayi3;
                *sayi3 = *sayi4;
                *sayi4 = temp;
            }
            if(n % 4 == 0 && n != 0) {
                temp = *sayi1;
                *sayi1 = *sayi4;
                *sayi4 = temp;
                temp = *sayi2;
                *sayi2 = *sayi3;
                *sayi3 = temp;
            }
            if(n == 0) {
                break;
            }
            break;
        default:
            printf("YANLIS SECIM !!! \n");
            return 0;
    }
}

