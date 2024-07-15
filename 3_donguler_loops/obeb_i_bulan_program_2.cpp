#include <stdio.h>

int main() {
	int sayi1, sayi2;
	int cikarma_zinciri = 1;
	int kalan = 1;
	int obeb;
	
	printf("OBEB bulunacak sayilari giriniz(iki adet sayi) : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	if(sayi1 < 0 || sayi2 < 0) {
		printf("Yanlis!!! Lutfen sayilarin her ikisini de pozitif olarak giriniz\n");
		return 0;
    }
    else if(sayi1 == sayi2) {
    	obeb = sayi1;
    	cikarma_zinciri = 0;
	}
    
	while(kalan != 0) {
        if(sayi1 > sayi2) {
			kalan = sayi1 % sayi2;
			obeb = sayi2;
			sayi1 = sayi2;
			sayi2 = kalan;
			cikarma_zinciri++;
	    }
	    else {
	    	kalan = sayi2 % sayi1;
	    	obeb = sayi1;
	    	sayi2 = sayi1;
	    	sayi1 = kalan;
	    	cikarma_zinciri++;
		}
	}
	printf("\nOBEB(%d, %d) = %d", sayi1, sayi2, obeb);
	printf("\nOBEB cikarma zinciri = %d", cikarma_zinciri);
    return 0;
}
