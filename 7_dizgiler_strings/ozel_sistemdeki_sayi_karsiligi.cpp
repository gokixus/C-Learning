#include <stdio.h>
#include <string.h>

int main() {
	char sayi[100];
	int i, sonuc, i_adet = 0, u_adet = 0, z_adet = 0;
	
	printf("Ozel sistemdeki sayiyi giriniz(I, U, Z): ");
	fgets(sayi, sizeof(sayi), stdin);
	for(i = 0 ; i < strlen(sayi) ; i++) {
		if(sayi[i] == 'I') {
			i_adet++;
		}
		if(sayi[i] == 'U') {
			u_adet++;
		}
		if(sayi[i] == 'Z') {
			z_adet++;
		}
	}
	sonuc = i_adet + u_adet*10 + z_adet*100;
	printf("Girilen sayinin onluk sistemdeki karsiligi : %d", sonuc);
}
