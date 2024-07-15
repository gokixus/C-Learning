#include <stdio.h>

int main() {
	int a[5], b[5];
	int i, j, k;
	printf("a dizisinin elemanlarini giriniz(5 adet): ");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%d", &a[i]);
	}
	printf("b dizisinin elemanlarini giriniz(5 adet): ");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%d", &b[i]);
	}
	
	printf("Ortak olan elemanlar: ");
	for(i = 0 ; i < 5 ; i++) {
		for(j = 0 ; j < 5 ; j++) {
			if(a[i] == b[j]) {
                int adet = 1;
                for(k = 0; k < i; k++) {
                    if(a[k] == a[i]) {
                        adet = 0;
                        break;
                    }
                }
                if(adet) {
                    printf("%d ", a[i]);
                }
                break;
            }
		}
	}
}
