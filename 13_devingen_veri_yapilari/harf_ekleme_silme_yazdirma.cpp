#include <stdio.h>
#include <stdlib.h>

struct dugum {
	char eleman;
	struct dugum *ptr;
};

int menu(void) {
	int secim;
	printf("\n-----MONU-----\n");
	printf("0- Kuyruktaki Elemanlari Yazdirma\n1- Kuyruga Yeni Eleman Ekleme\n2- Kuyruktan Eleman Cikarma\n3- Cikis\n");
	printf("Seciminiz (0-3) = ? : ");
	scanf("%d", &secim);
	return secim;
}

void kuyrukYaz(struct dugum *p) {
	if(p == NULL) {
		return;
	}
	
	while(p != NULL) {
		printf("%c --> ", p->eleman);
		p = p->ptr;
	}
	printf("NULL\n\n");
}

int kuyrukEkle(struct dugum **p) {
	char eleman;
    printf("Eklenecek elemani girin: ");
    scanf(" %c", &eleman);

    struct dugum *oncekiptr = NULL, *sonrakiptr = *p, *yeniptr;

    yeniptr = (struct dugum *)malloc(sizeof(struct dugum));
    if(yeniptr == NULL) {
        return 0;
    }

    yeniptr->eleman = eleman;
    yeniptr->ptr = NULL;

    while(sonrakiptr != NULL && eleman > sonrakiptr->eleman) {
        oncekiptr = sonrakiptr;
        sonrakiptr = sonrakiptr->ptr;
    }

    if(oncekiptr == NULL) {
        *p = yeniptr;
    } else {
        oncekiptr->ptr = yeniptr;
    }
    yeniptr->ptr = sonrakiptr;

    return 1;
}

void kuyruktanSil(struct dugum **p) {
    if(*p == NULL) {
        printf("Kuyruk bos, silinecek eleman yok.\n");
        return;
    }

    struct dugum *silPtr = *p;
    *p = (*p)->ptr;
    free(silPtr);
    printf("Eleman kuyruktan silindi.\n");
}

int main() {
	struct dugum *bas = NULL;
    int secim;
    
    while((secim = menu()) != 3) {
        switch(secim) {
            case 0:
                kuyrukYaz(bas);
                break;
            case 1:
                if (kuyrukEkle(&bas)) {
                    printf("Eleman eklendi.\n");
                } else {
                    printf("Eleman eklenemedi.\n");
                }
                break;
            case 2:
                kuyruktanSil(&bas);
                break;
            default:
                printf("Gecersiz secim, tekrar deneyin.\n");
        }
    }

    return 0;
}
