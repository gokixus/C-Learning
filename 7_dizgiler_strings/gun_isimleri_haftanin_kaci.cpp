#include <stdio.h>
#include <string.h>

int hangiGun(char *gun) {
	char gunler[7][10] = {"Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi", "Pazar"};
	int gun_index = -1;
	for(int i = 0 ; i < 7 ; i++) {
		if(strcmp(gun, gunler[i]) == 0) {
			gun_index = i+1;
			break;
		}
	}
	return gun_index;
}

int main() {
	char gunAd[10];
	printf("Gunun adini giriniz: ");
	scanf("%s", gunAd);
	
	int gunGun = hangiGun(gunAd);
	if(gunGun != -1) {
		printf("%s gunu haftanin %d. gunudur.\n", gunAd, gunGun);
	} else {
		printf("Gecersi gun adi.\n");
	}
	return 0;
}
