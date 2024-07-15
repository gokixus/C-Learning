#include <stdio.h>

int ucgenMi(int, int, int);
	
int main() {
	int a,b,c;
	printf("Kenar uzunluklarini giriniz(a, b, c): ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\n%d", ucgenMi(a, b, c));
}

int ucgenMi(int a, int b, int c) {
	if(a+b > c && a+c > b && b+c > a) {
		return 1;
	}
	else {
		return 0;
	}
}
