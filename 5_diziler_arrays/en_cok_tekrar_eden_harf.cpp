#include <stdio.h>

char enCokTekrarEden(char [], int);

int main() {
	char dizi[7] = {'p', 'r', 'o', 'g', 'r', 'g', 'g'};
	char c;
	
	c = enCokTekrarEden(dizi, 7);
	printf("En cok tekrar eden harf = %c", c);
	return 0;
}

char enCokTekrarEden(char a[], int n) {
	int i, j;
	int adet, en_cok_adet = 0;
	char en_cok_eden;
	for(i = 0 ; i < n ; i++) {
		adet = 0;
		for(j = 0 ; j < n ; j++) {
			if(a[i] == a[j]) {
				adet++;
			}
		}
		if(adet > en_cok_adet) {
			en_cok_adet = adet;
			en_cok_eden = a[i];
		}
	}
	return en_cok_eden;
}
