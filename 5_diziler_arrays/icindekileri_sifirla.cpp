#include <stdio.h>

void icindekileriSifirla(int [], int, int [], int);

int main() {
	int dizi1[7] = {3, 12, 1, 12, 7, 3, 12};
	int dizi2[3] = {3, 12};
	int i;
	
	icindekileriSifirla(dizi1, 7, dizi2, 2);
	for(i = 0 ; i < 7 ; i++) {
		printf("%d, ", dizi1[i]);
	}
	
	return 0;
}

void icindekileriSifirla(int a[], int a1, int b[], int b1) {
	int i, j, flag;
	for(i = 0; i < a1; i++) {
		flag = 0;
    	for(j = 0; j < b1; j++) {
      	  	if(a[i] == b[j]) {
           		flag = 1;
           	 	break;
        }
    }
    if(flag == 1) {
    	a[i] = 0;
	}
}

}
