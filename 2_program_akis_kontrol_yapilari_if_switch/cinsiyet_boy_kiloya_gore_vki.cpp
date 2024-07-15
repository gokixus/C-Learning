#include <stdio.h>

int main() {
	char cinsiyet;
	float kilo;
	float boy;
	printf("Cinsiyetinizi giriniz(Erkek icin E veya e, Kadin icin K veya k): ");
	scanf("%c", &cinsiyet);
	printf("Kilonuzu(kg) giriniz: ");
	scanf("%f", &kilo);
	printf("Boyunuzu(m) giriniz: ");
	scanf("%f", &boy);
	
	float vki;
	vki = kilo / (boy*boy);
	printf("\n\nVucut kitle indeksiniz = %0.2f", vki);
	
	switch(cinsiyet) {
		case 'E':
		case 'e':
			if(31.2<=vki) {
			    printf("\nObezite. Ciddi derecede riskli");
			    break;
		    }
			if(26.5<=vki && vki<31.2) {
			    printf("\nSismanlik sinirinda ya da sismansiniz. Riskli");
			    break;
			}
			if(20.7<=vki && vki<26.5) {
			    printf("\nNormalsiniz. Risk yoktur");
			    break; 
			}
			if(vki<20.7) {
			    printf("\nZayifsiniz. Saglik riski!");
			    break;
			}
		case 'K':
		case 'k':
			if(32.3<=vki) {
			    printf("\nObezite. Ciddi derecede riskli");
			    break;
		    }
			if(25.9<=vki && vki<32.3) {
			    printf("\nSismanlik sinirinda ya da sismansiniz. Riskli");
			    break;
		    }
			if(19.1<=vki && vki<25.9) {
			    printf("\nNormalsiniz. Risk yoktur");
			    break;
			}
			if(vki<19.1) {
			    printf("\nZayifsiniz. Saglik riski!");
			    break;
			}
		default:
			printf("\nLutfen dogru harf(Erkekler icin E veya e, kadinlar icin K veya k) giriniz");
	}
	return 0;
}
