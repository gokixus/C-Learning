#include <stdio.h>

int main() {
	int a[5];
	int b[5];
	int c[10];
	
	int i;
	printf("a dizisinin elemanlarini giriniz: ");
	for(i = 1 ; i <= 5 ; i++) {
		scanf("%d", &a[i]);
	}
	printf("b dizisinin elemanlarini giriniz: ");
	for(i = 1 ; i <= 5 ; i++) {
		scanf("%d", &b[i]);
	}

	for (i = 1; i <= 10; i++) {
        if (i <= 5) {
            c[i] = a[i];
        } else {
            c[i] = b[i - 5];
        }
    }

    printf("c dizisinin elemanlari: ");
    for (i = 1; i <= 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
	
}
