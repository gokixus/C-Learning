#include <stdio.h>
#include <math.h>

void orijineEnYakin(int x1, int y1, int x2, int y2, int x3, int y3) {
    double uzaklik1 = sqrt(pow(x1, 2) + pow(y1, 2));
    double uzaklik2 = sqrt(pow(x2, 2) + pow(y2, 2));
    double uzaklik3 = sqrt(pow(x3, 2) + pow(y3, 2));
    if(uzaklik1 < uzaklik2 && uzaklik2 < uzaklik3) {
        printf("Orijine en yakin nokta: (%d, %d)\n", x1, y1);
    } 
	else if(uzaklik1 < uzaklik3 && uzaklik3 < uzaklik2) {
        printf("Orijine en yakin nokta: (%d, %d)\n", x1, y1);
    } 
	else if(uzaklik2 < uzaklik1 && uzaklik1 < uzaklik3) {
        printf("Orijine en yakin nokta: (%d, %d)\n", x2, y2);
    }
    else if(uzaklik2 < uzaklik3 && uzaklik3 < uzaklik2) {
        printf("Orijine en yakin nokta: (%d, %d)\n", x2, y2);
    } 
    else if(uzaklik3 < uzaklik1 && uzaklik1 < uzaklik3) {
        printf("Orijine en yakin nokta: (%d, %d)\n", x3, y3);
    }
	else if(uzaklik3 < uzaklik2 && uzaklik2 < uzaklik1) {
        printf("Orijine en yakin nokta: (%d, %d)\n", x3, y3);
    } 
}

int main() {
	int a, aa, b, bb, c, cc;
	printf("Uc tane koordinat giriniz :\n");
	printf("(a, A) : ");
	scanf("%d%d", &a, &aa);
	printf("(b, B) : ");
	scanf("%d%d", &b, &bb);
	printf("(c, C) : ");
	scanf("%d%d", &c, &c);
	
	orijineEnYakin(a, aa, b, bb, c, cc);
	
	return 0;
}
