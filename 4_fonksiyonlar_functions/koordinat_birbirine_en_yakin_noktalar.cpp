#include <stdio.h>
#include <math.h>

void birbirineEnYakin(int x1, int y1, int x2, int y2, int x3, int y3) {
	double mesafe1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	double mesafe2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	double mesafe3 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	
	if (mesafe1 < mesafe2 && mesafe1 < mesafe3) {
        printf("A ve B noktalari birbirine en yakin noktalardir.\n");
    } else if (mesafe2 < mesafe1 && mesafe2 < mesafe3) {
        printf("A ve C noktalari birbirine en yakin noktalardir.\n");
    } else {
        printf("B ve C noktalari birbirine en yakin noktalardir.\n");
    }
}

int main() {
	int x1, y1, x2, y2, x3, y3;
	printf("A koordinatini yaziniz : ");
	scanf("%d%d", &x1, &y1);
	printf("B koordinatini yaziniz : ");
	scanf("%d%d", &x2, &y2);
	printf("C koordinatini yaziniz : ");
	scanf("%d%d", &x3, &y3);
	
	birbirineEnYakin(x1, y1, x2, y2, x3, y3);
	
	return 0; 
}

