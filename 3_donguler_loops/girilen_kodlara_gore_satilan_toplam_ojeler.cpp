#include <stdio.h>

int main() {
	int kod;
	int kirmizi = 0;
	int yesil = 0;
	int sari = 0;
	int siyah = 0;


    while(1) {
	    printf("Kodu giriniz(1,2,3,4 yada cikmak icin 111): ");
	    scanf("%d", &kod);
	    
	    if(kod==111){
	    	break;
		}
		else if(kod==1) {
			kirmizi++;
		}
		else if(kod==2) {
			yesil++;
		}
		else if(kod==3) {
			sari++;
		}
		else if(kod==4) {
			siyah++;
		}
		else {
			printf("HATA!! Lutfen gecerli bir kod giriniz. \n");
		}
	}
	
	printf("\nGun Sonu Satis Raporu:\n");
	printf("%d kirmizi, %d yesil, %d sari, %d siyah oje satilmistir.", kirmizi, yesil, sari, siyah);
	return 0;
}
