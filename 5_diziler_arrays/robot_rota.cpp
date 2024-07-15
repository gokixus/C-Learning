#include <stdio.h>

int main() {
	int tahta[6][5] = {0};
	int b_satir, b_sutun;
	int i, j;
	int komut;
	
	printf("Robutun baslangic satir ve sutunu giriniz:(min 1-1, max 6-5) ");
	scanf("%d %d", &b_satir, &b_sutun);
	
	if (b_satir <= 0 || b_satir > 6 || b_sutun <= 0 || b_sutun > 5) {
        printf("Gecerli bir baslangic konumu giriniz!\n");
        return 0;
    }
    
    b_satir--;
    b_sutun--;
    tahta[b_satir][b_sutun] = 1;
    
    printf("\n(Programi sonlandirmak icin 0 giriniz)\n");
    printf("(1: sag, 2: sola, 3: asagi, 4: yukari)\n");
    printf("Komutlari giriniz: ");
    
    do {
    	scanf("%d", &komut);
    	
    	switch(komut) {
    		case 1:
    			if(b_sutun + 1 < 5) {
    				b_sutun++;
    				tahta[b_satir][b_sutun] = 1;
				}
				break;
			case 2:
				if(b_sutun - 1 >= 0) {
					b_sutun--;
					tahta[b_satir][b_sutun] = 1;
				}
				break;
			case 3:
    			if(b_satir + 1 < 6) {
    				b_satir++;
    				tahta[b_satir][b_sutun] = 1;
				}
				break;
			case 4:
				if(b_satir - 1 >= 0) {
					b_satir--;
					tahta[b_satir][b_sutun] = 1;
				}
				break;
			default:
				if(komut != 0) {
                    printf("Gecerli bir komut giriniz!\n");
                }
                break;
		}
	} while(komut != 0);
	
	printf("\nRobotun rotasi:\n");
	for(i = 0 ; i < 6 ; i++) {
        for(j = 0 ; j < 5 ; j++) {
            printf("%d ", tahta[i][j]);
        }
        printf("\n");
    }
}
