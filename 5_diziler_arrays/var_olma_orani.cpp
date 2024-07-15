#include <stdio.h>

float varOlmaOrani(char [], int, char[], int);

int main() {
	char kelime[6] = {'i', 's', 't', 'i', 'f', 'a'};
	char inceUnlu[4] = {'i', 'e', 'o', 'u'};
	printf("Var olma orani = %0.2f", varOlmaOrani(kelime, 6, inceUnlu, 4));
}

float varOlmaOrani(char a[], int a1, char b[], int b1) {
	int i, j, k; 
	int adet = 0;
	for(i = 0 ; i < b1 ; i++) {
		for(j = 0 ; j < a1 ; j++) {
			if(b[i] == a[j]) {
				adet++;
				break;
			}
		}		
	}
	return (float)adet/b1;
}
