#include <stdio.h>
#include <stdlib.h>

struct dugum {
	int yas;
	struct dugum *ptr;
};

int listeyeEkle(struct dugum **, int);
int listedenSil(struct dugum **, int);
void listeyiYaz(struct dugum *);
int monu(void);

int main() {
	struct dugum *basptr = NULL;
	int secim, yas, s;
	
	while((secim = monu()) != 3) {
		switch(secim) {
			case 0:
				listeyiYaz(basptr);
				break;
			case 1:
				printf("Yas bilgisini girinz: ");
				scanf("%d", &yas);
				s = listeyeEkle(&basptr, yas);
				if(s != 0) {
					printf("Ekleme basarili.\n");
				} else {
					printf("Ekleme basarisiz.\n");
				}
				break;
			case 2:
				printf("Silinecek bilgiyi giriniz: ");
				scanf("%d", &yas);
				s = listedenSil(&basptr, yas);
				if(s != 0) {
					printf("Silme basarili.\n");
				} else {
					printf("Silme basarisiz.\n");
				}
				break;
		}
	}
	return 0;
}

int monu(void) {
	int secim;
	printf("\n------------MONU------------\n"
			"	0 Listenin elemanlarini yazdir\n"
			"	1 Listeye eleman ekle\n"
			"	2 Listeden elemn sil\n"
			"	3 Cikis\n");
	printf("Secimi giriniz = ");
	scanf("%d", &secim);
	return secim;
}

int listeyeEkle(struct dugum **p, int yas) {
    struct dugum *yeniptr, *onceptr, *sonraptr;
    
    yeniptr = (dugum *)malloc(sizeof(struct dugum ));
    if(yeniptr != NULL) {
        yeniptr->yas = yas;
        yeniptr->ptr = NULL;
        
        onceptr = NULL;
        sonraptr = *p;
        
        while(sonraptr != NULL && yas > sonraptr->yas) {
            onceptr = sonraptr;
            sonraptr = sonraptr->ptr;
        }
        
        if(onceptr == NULL) {
            yeniptr->ptr = *p;
            *p = yeniptr;  // Update the head pointer
            return yas;
        } else {
            onceptr->ptr = yeniptr;
            yeniptr->ptr = sonraptr;
            return yas;
        }
    } else {
        return 0;
    }
}


int listedenSil(struct dugum **p, int yas) {
    struct dugum *onceptr, *silptr, *geciciptr;
    
    if(*p == NULL) {
        return 0;  // List is empty
    }
    
    if((*p)->yas == yas) {
        geciciptr = *p;
        *p = (*p)->ptr;
        free(geciciptr);
        return yas;
    } else {
        onceptr = *p;
        silptr = (*p)->ptr;
        
        while(silptr != NULL && silptr->yas != yas) {
            onceptr = silptr;
            silptr = silptr->ptr;  // Update silptr to move through the list
        }
        
        if(silptr != NULL) {
            geciciptr = silptr;
            onceptr->ptr = silptr->ptr;
            free(geciciptr);
            return yas;
        }
    }
    
    return 0;  // Age not found in the list
}

void listeyiYaz(struct dugum *p) {
	if(p == NULL) {
		printf("Liste bos.\n");
	} else {
		printf("Liste:\n");
		while(p != NULL) {
			printf("%d --> ", p->yas);
			p = p->ptr;
		}
		printf("NULL\n\n");
	}
}
