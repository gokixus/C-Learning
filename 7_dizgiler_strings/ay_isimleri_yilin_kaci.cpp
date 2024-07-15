#include <stdio.h>
#include <string.h>

int hangiAy(char *aylar) {
	char ay[12][20] = {"Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran", "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik"};
	
	int ay_index = -1;
	for(int i = 0 ; i < 12 ; i++) {
		if(strcmp(aylar, ay[i]) == 0) {
			ay_index = i + 1;
			break;
		}
	}
	return ay_index;
}

int main() {
	
	char ayin_adi[20];
	printf("Ayin adi : ");
	scanf("%s", ayin_adi);
	
	int ayAy = hangiAy(ayin_adi);
	if(ayAy != -1) {
		printf("%s ayi yilin %d. ayidir.\n", ayin_adi, ayAy);
	}
	else {
		printf("Gecersiz ay adi.\n");
	}
	return 0;
}
