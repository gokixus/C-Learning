#include <stdio.h>

int main() {
	char cinsiyet;
	float boy;
	float kilo;
	float idealKilo;
	
	printf("Cinsiyetinizi giriniz: ");
	scanf("%c", &cinsiyet);
	
    printf("Boyunuz(m): ");
	scanf("%f", &boy);
	
	printf("Kilonuz(kg): ");
	scanf("%f", &kilo);
	    
	switch(cinsiyet){
	    case 'e':
	    case 'E':
	        idealKilo = (48 + ((boy - 1.5)/0.025*2.7));
	        printf("\n\nIdeal kilonuz: %f", idealKilo);	
	        if(kilo == idealKilo)
	            printf("\nIdeal kilonuzdasiniz.");
	        else if(kilo > idealKilo)
	            printf("\nIdeal kilonuzdan daha agýisiniz.");
	        else 
	            printf("\nIdeal kilonuzdan daha hafifsiniz.");
	        break;
	            
	    case 'k':
	    case 'K':
	    	idealKilo = (45 + ((boy - 1.5)/0.025*2.2));
	    	printf("\n\nIdeal kilonuz: %f", idealKilo);	
	        if(kilo == idealKilo)
	            printf("\nIdeal kilonuzdasiniz.");
	        else if(kilo > idealKilo)
	            printf("\nIdeal kilonuzdan daha agirsiniz.");
	        else 
	            printf("\nIdeal kilonuzdan daha hafifsiniz.");
	        break;
	    default:
	    	printf("\n\nYanlýs harf yazdiniz!!!");
	}
	return 0;
}
