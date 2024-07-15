#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buyukTarih(int, int, int, int, int ,int);

int main() {
	srand(time(0));
	int g1 = rand() % 30 + 1;
	int g2 = rand() % 30 + 1;
	int a1 = rand() % 12 + 1;
	int a2 = rand() % 12 + 1;
	int y1 = rand() % 20 + 2000;
	int y2 = rand() % 20 + 2000;
		
	buyukTarih(12, 12, 2004, 22, 12, 2004);
	printf("\n");
	buyukTarih(20, 01, 2005, 22, 12, 2004);
	printf("\n\n");
	printf("Girilen rastgele tarihler %d/%02d/%d ve %d/d/%d arasinda en buyugu -> ", g1, a1, y1, g2, a2, y2);
	buyukTarih(g1, a1, y1, g2, a2, y2);
	
	return 0;
}

int buyukTarih(int gun1, int ay1, int yil1, int gun2, int ay2, int yil2) {
	if(yil1 > yil2)	{
		printf("%d/%02d/%d", gun1, ay1, yil1);
	}
	else if(yil2 > yil1){
		printf("%d/%02d/%d", gun2, ay2, yil2);
	}
	else {
		if(ay1 > ay2) {
			printf("%d/%02d/%d", gun1, ay1, yil1);
		}
		else if(ay2 > ay1){
			printf("%d/%02d/%d", gun2, ay2, yil2);
		}
		else {
			if(gun1 > gun2) {
				printf("%d/%02d/%d", gun1, ay1, yil1);
			}
			else {
				printf("%d/%02d/%d", gun2, ay2, yil2);
			}
		}
	}
}
