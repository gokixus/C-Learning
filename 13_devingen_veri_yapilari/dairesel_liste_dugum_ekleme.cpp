#include <stdio.h>
#include <stdlib.h>

struct dugum {
	int sayi;
	struct dugum *ptr;
};

struct dugum *yeniDugum(int sayi) {
	struct dugum *yeni = (dugum *)malloc(sizeof(struct dugum));
	yeni->sayi = sayi;
	yeni->ptr = NULL;
	return yeni;
}

void daireselListe(struct dugum *p) {
	if(p == NULL) {
		return;
	}
	
	struct dugum *temp = p;
	while(temp->ptr != NULL) {
		temp = temp->ptr;
	}
	temp->ptr = p;
}

void listeyiYazdir(struct dugum *p) {
	if(p == NULL) {
		return;
	}
	
	struct dugum *temp = p;
	do {
		printf("%d -> ", temp->sayi);
		temp = temp->ptr;
	}while(temp != p);
	printf("%d\n", temp->sayi);
}

int main() {
	struct dugum *bas = NULL;
	struct dugum *son = NULL;
	int sayilar;
	
	while (1) {
		printf("Sayilari giriniz(durdurmak icin -1): ");
        scanf("%d", &sayilar);
        if (sayilar == -1) break;
        struct dugum* yeni = yeniDugum(sayilar);
        if (bas == NULL) {
            bas = yeni;
            son = bas;
        } else {
            son->ptr = yeni;
            son = yeni;
        }
    }
    printf("\n");
	daireselListe(bas);
	listeyiYazdir(bas);
	return 0;
}
