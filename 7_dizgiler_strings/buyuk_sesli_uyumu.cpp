#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char kelime[20];
	int i;
	int kalin_sesli = 0, ince_sesli = 0;
	
	printf("Cumle giriniz: ");
	scanf("%s", kelime);
	
	int uzunluk = strlen(kelime);
	
	for(i = 0 ; i < uzunluk; i++) {
		if(tolower(kelime[i]) == 'a' || tolower(kelime[i]) == 'ý' || tolower(kelime[i]) == 'o' || tolower(kelime[i]) == 'u') {
			kalin_sesli++;	
		}
		else if(tolower(kelime[i]) == 'e' || tolower(kelime[i]) == 'i' || tolower(kelime[i]) == 'ö' || tolower(kelime[i]) == 'ü') {
			ince_sesli++;	
		}
	}
	
	if(kalin_sesli > 0 & ince_sesli == 0 || ince_sesli > 0 && kalin_sesli == 0) {
		printf("\nBuyuk sesli uyumuna uyar.");
	}
	else {
		printf("\nBuyuk sesli uyumuna uymaz.");
	}
}
