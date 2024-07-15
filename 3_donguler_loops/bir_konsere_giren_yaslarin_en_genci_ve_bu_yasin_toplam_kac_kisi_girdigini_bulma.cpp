#include <stdio.h>

int main() {
	int yas;
	int toplam = 0;
	int en_genc = 1000;
	while(1) {
		printf("Yasi giriniz(Durdurmak icin 0) : ");
		scanf("%d", &yas);
		
		if(yas == 0){
			break;
		}
		else if(yas < 0) {
			printf("HATA!!! Lutfen pozitif bir deger giriniz. ");
			continue;
		}
		else if(1000 <= yas) {
			printf("HATA!!! Lutfen yas degerine dikkat ediniz. ");
			continue;
		}
		if(yas < en_genc) {
			en_genc = yas;
			toplam = 1;
		}
		else if(yas == en_genc) {
			toplam++;
		}
	}
	printf("\n----------------------------------------------------\n");
	printf("En genc katilimci yasi %d (Bu yasta toplam %d kisi giris yapti)", en_genc, toplam);
	return 0;
}
