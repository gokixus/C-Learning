#include <stdio.h>
 
int main() {
	int a[3][3];
	int i, j;
	int toplam = 0;
	
	printf("3x3'luk bir dizi giriniz :\n");
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 0 ; i < 3 ; i++){
		for(j = 0 ; j < 3 ; j++) {
			if(i == j || i+j == 2) {
				toplam += a[i][j];
			}
		}
	}
	printf("Kosegenler uzerindeki elemanlarin toplami %d", toplam);
	return  0;
}
