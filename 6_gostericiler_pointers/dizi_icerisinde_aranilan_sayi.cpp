#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ara(int [][3], int, int, int *, int *);

int main() {
	int dizi[3][3];
	int satir, sutun, sonuc;
	
	srand(time(0));
	printf("Dizi:\n");
	for(int i = 0 ; i < 3 ; i++) {
		for(int j = 0 ; j < 3 ; j++) {
			dizi[i][j] = rand() % 10;
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}
	
	int aranacak;
	printf("\nDizi icerisinde aranacak degeri giriniz: ");
	scanf("%d", &aranacak);
	
	sonuc = ara(dizi, 3, aranacak, &satir, &sutun);
	
	if(sonuc == 1) {
		printf("Girilen bu deger dizi icerisinde vardir.\nGirilen bu eleman bu dizinin %d. satir %d. sutununda bulunur", satir+1 , sutun+1);
	}
	else {
		printf("Girilen bu deger dizi icerisinde bulunamadi.");
	}
	
}

int ara(int a[][3], int boyut, int aranilan, int *satir, int *sutun) {
	for(int i = 0 ; i < boyut ; i++) {
		for(int j = 0 ; j < boyut ; j++) {
			if(a[i][j] == aranilan) {
				*satir = i;
				*sutun = j;
				return 1;
			} 
		}
	}
	return 0;
}
