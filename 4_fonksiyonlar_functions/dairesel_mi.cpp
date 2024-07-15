#include <stdio.h>

int daireselMi(int sayi) {		
	int basamakSayisi = 0;
	while(sayi > 0) {
		sayi /= 10;
		basamakSayisi++;
	}
	
	int mod = 1;
    for (int i = 1; i <= basamakSayisi; i++) {
        mod *= 10;
    }
	
	int temp = sayi * (sayi%10);	
	int yeniSayi = (sayi%10)*mod + (sayi/10);
	
	if(temp == yeniSayi) {
		return 1;
	}
	else {
		return 0;
	}	
}

int main() {
	printf("1. satir = %d \n", daireselMi(102564));
	printf("2. satir = %d \n", daireselMi(123456));
}
