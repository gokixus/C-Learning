#include <stdio.h>
#include <stdlib.h>

struct fdugum {
    int sayi;
    struct fdugum* ptr;
};

void silN(fdugum** baslangic, int sira) {
    if (*baslangic == NULL || sira < 0) {
        return;
    }
    
    fdugum* temp = *baslangic;
    if (sira == 0) {
        *baslangic = temp->ptr;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < sira - 1; i++) {
        temp = temp->ptr;
    }
    if (temp == NULL || temp->ptr == NULL) {
        return;
    }
    
    fdugum* silinecekDugum = temp->ptr;
    temp->ptr = silinecekDugum->ptr;
    free(silinecekDugum);
}


int main() {
	fdugum *baslangic = NULL;
	fdugum *dugum1 = (fdugum *)malloc(sizeof(fdugum));
    fdugum *dugum2 = (fdugum *)malloc(sizeof(fdugum));
    fdugum *dugum3 = (fdugum *)malloc(sizeof(fdugum));
    dugum1->sayi = 1; dugum1->ptr = dugum2;
    dugum2->sayi = 2; dugum2->ptr = dugum3;
    dugum3->sayi = 3; dugum3->ptr = NULL;
    baslangic = dugum1;
    
    silN(&baslangic, 2); //dugum sirasi 0'dan baslar 
    
    fdugum* current = baslangic;
    while (current != NULL) {
        printf("%d ", current->sayi);
        current = current->ptr;
    }
    return 0;
}
