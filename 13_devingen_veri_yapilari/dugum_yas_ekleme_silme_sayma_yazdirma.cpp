#include <stdio.h>
#include <stdlib.h>

struct dugum {
	int yas;
	struct dugum *ptr;
};

int menu(void);
void listeyiYaz(struct dugum *);
int ekle(struct dugum **, int);
void listeSay(struct dugum *);

int main() {
	struct dugum *basptr = NULL;
	int secim, yas;
	
	while((secim = menu()) != 3) {
		switch(secim) {
			case 0:
				listeyiYaz(basptr);
				break;
			case 1:
				printf("Yas giriniz: ");
				scanf("%d", &yas);
				ekle(&basptr, yas);
				break;
			case 2:
				listeSay(basptr);
				break;
		}
	}
	return 0;
}

int menu(void) {
	int secim;
	printf("\n------------MONU------------\n"
			"	0 Listedeki elemanlari yazdir\n"
			"	1 Listeye yeni eleman ekle\n"
			"	2 Listedeki Eleman Sayisi\n"
			"	3 Cikis\n");
	printf("Secimi giriniz(0-3) ? = ");
	scanf("%d", &secim);
	return secim;
}

void listeyiYaz(struct dugum *p) {
	if(!p) {
		printf("Liste bos.\n");
	} else {
		printf("Liste:\n");
		while(p) {
			printf("%d --> ", p->yas);
			p = p->ptr;
		}
		printf("NULL\n\n");
	}
}

int ekle(struct dugum **p, int yas) {
	struct dugum *yeniptr;
	struct dugum *oncekiptr;
	struct dugum *sonrakiptr;
	
	yeniptr = (dugum *)malloc(sizeof(struct dugum ));
	if(yeniptr) {
		yeniptr->yas = yas;
		yeniptr->ptr = NULL;
		
		oncekiptr = NULL;
		sonrakiptr = *p;
		
		while(sonrakiptr && yas > sonrakiptr->yas) {
			oncekiptr = sonrakiptr;
			sonrakiptr = sonrakiptr->ptr;
		}
		
		if(!oncekiptr) {
			yeniptr->ptr = *p;
			*p = yeniptr;
			return yas;
		} else {
			oncekiptr->ptr = yeniptr;
			yeniptr->ptr = sonrakiptr;
			return yas;
		}
	}
	else {
		return 0;
	}
}

void listeSay(struct dugum *p) {
	int dugumSayisi = 0;
	if(!p) {
		printf("Listedeki dugum sayisi 0'dir.\n");
	} else {
		while(p) {
			dugumSayisi++;
			p = p->ptr;
		}
		printf("Listedeki dugum sayisi %d'dir.\n", dugumSayisi);
	}
}




