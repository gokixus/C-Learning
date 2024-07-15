#include <stdio.h>
#include <stdlib.h>

struct dugum {
	int sayi;
	struct dugum *ptr;
};

struct dugum *yeniDugum(int sayi) {
	struct dugum *yeni = (struct dugum *)malloc(sizeof(struct dugum));
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
	struct dugum *bas = yeniDugum(1);
    bas->ptr = yeniDugum(2);
    bas->ptr->ptr = yeniDugum(3);
    bas->ptr->ptr->ptr = yeniDugum(4);
    
    daireselListe(bas);

    listeyiYazdir(bas);
}
