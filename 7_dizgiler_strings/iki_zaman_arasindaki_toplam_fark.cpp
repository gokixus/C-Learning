#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char zaman[2][20];
	int i, x1, x2, x3, y1, y2, y3;
	char *ptr;
	
	for(i = 0 ; i < 2 ; i++) {
		printf("%d. zamani giriniz(SS:DD:SS biciminde): ", i+1);
		scanf("%s", zaman[i]);
	}
	ptr = strtok(zaman[0], ":");
	sscanf(ptr, "%d", &x1);
	ptr = strtok(NULL, ":");
	sscanf(ptr, "%d", &x2);
	ptr = strtok(NULL, ":");
	sscanf(ptr, "%d", &x3);
	
	ptr = strtok(zaman[1], ":");
	sscanf(ptr, "%d", &y1);
	ptr = strtok(NULL, ":");
	sscanf(ptr, "%d", &y2);
	ptr = strtok(NULL, ":");
	sscanf(ptr, "%d", &y3);
	
	int toplamSaniye1 = x1*3600 + x2*60 + x3;
	int toplamSaniye2 = y1*3600 + y2*60 + y3;
	int fark = abs(toplamSaniye1 - toplamSaniye2);
	printf("Aradaki fark: %d saniyedir.\n", fark);
	return 0;
}
