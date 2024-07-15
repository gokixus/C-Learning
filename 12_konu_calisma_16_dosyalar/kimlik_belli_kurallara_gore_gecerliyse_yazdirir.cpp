#include <stdio.h>

int main() {
	FILE *pOku = fopen("basvuru.txt", "r");
	FILE *pYazdir = fopen("gecerli.txt", "w");
	if (!pOku || !pYazdir) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}

	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11;
	while (fscanf(pOku, "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11) != EOF) {
		int b1 = (a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10) % 10;
		int b2 = ((a1 + a3 + a5 + a7 + a9) * 7 + (a2 + a4 + a6 + a8) * 9) % 10;
		if (b1 == a11 && b2 == a10) {
			fprintf(pYazdir, "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d\n", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}
	}
	fclose(pOku);
	fclose(pYazdir);
	printf("Dosya olusturuldu.\n");
	return 0;
}

