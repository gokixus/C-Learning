#include <stdio.h>
#include <math.h>

int main() {
	FILE *pOku = fopen("girisler2.txt", "r");
	FILE *pYazdir = fopen("gecersiz.txt", "w");
	if(!pOku || !pYazdir) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	int a1, b1, a2, b2, a3, b3, x;
	while(fscanf(pOku, "%1d%1d%1d%1d%1d%1d-%1d", &a1, &b1, &a2, &b2, &a3, &b3, &x) != EOF) {
		int c1 = a1+ b1;
		int c2 = abs(a2-b2);
		int c3 = a3*b3;
		int topla = c1 + c2 + c3;
		int kalan = topla %10;
		
		if(kalan != x) {
			fprintf(pYazdir, "%d%d%d%d%d%d-%d\n", a1, b1, a2, b2, a3, b3, x);
		}
	}
	fclose(pOku);
	fclose(pYazdir);
	printf("Dosya olusturuldu.\n");
	return 0;
}
