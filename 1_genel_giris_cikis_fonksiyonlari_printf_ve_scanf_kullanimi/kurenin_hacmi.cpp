#include <stdio.h>
#include <math.h>

int main() {
	float pi = 3.1419;
	float hacim;
	int cap;
	
	printf("Yarýcap giriniz(cm): ");
	scanf("%d", &cap);
	
	printf("\n\nGirilen deger: %d", cap);
	hacim = (4*pi/3)*pow(cap,3);
	printf("\nKurenin hacmi %f dir.", hacim);
	
	return 0;
}
