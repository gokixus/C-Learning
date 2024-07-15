#include <stdio.h>

void cerceve(int x1, int y1, int x2, int y2) {
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            if (i == x1 && j == y1) {
                printf("%c", 201);
            } else if (i == x1 && j == y2) {
                printf("%c", 187);
            } else if (i == x2 && j == y1) {
                printf("%c", 200);
            } else if (i == x2 && j == y2) {
                printf("%c", 188);
            } else if (i == x1 || i == x2) {
                printf("%c", 205);
            } else if (j == y1 || j == y2) {
                printf("%c", 186);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
	int x1, y1, x2, y2;
	printf("x1, y1, x2, y2 degerlerini giriniz: ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    cerceve(x1, y1, x2, y2);
    return 0;
}

