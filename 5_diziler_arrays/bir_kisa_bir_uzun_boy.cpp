#include <stdio.h>

void birKisaBirUzun(float boy[], int n) {
    int i, j;
    float temp;
    
    //sayilari kucukten buyuge siralar//
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (boy[i] > boy[j]) {
                temp = boy[i];
                boy[i] = boy[j];
                boy[j] = temp;
            }
        }
    }
    
    //sayilari bir kucuk bir buyuk yazdirir//
    float enBuyuk[n], enKucuk[n];
    int enBuyukSayisi = 0, enKucukSayisi = 0;
    for (i = n-1 ; i >= n/2 ; i--) {
        enBuyuk[enBuyukSayisi++] = boy[i];
    }
    for(i = 0 ; i < n/2 ; i++) {
    	enKucuk[enKucukSayisi++] = boy[i];
	}
	
	for(i = 0 ; i < n/2 ; i++) {
		printf("%.2f %.2f ", enKucuk[i], enBuyuk[i]);
	}
}

int main() {
    float boy[12];
    int i;
    
    printf("Oyuncularin boylarini giriniz:\n");
    for(i = 0; i < 12; i++) {
        scanf("%f", &boy[i]);
    }
    
    birKisaBirUzun(boy, 12);
    return 0;
}

