#include <stdio.h>

int main() {
	char tur;
	int kisi;
    printf("Tur turunu giriniz(Sehir ici icin K veya k, Sehir disi icin D veya d): ");
    scanf("%c", &tur);
    printf("Tura kac kisi katilacak ? : ");
    scanf("%d", &kisi);
    
    float doluluk;
    float otobus;
    int bosKoltuk;
    otobus = kisi/47 + 1;
    doluluk = kisi/(otobus*46);
    bosKoltuk = otobus*46 - kisi;

    
	printf("\n\nBu tur icin %0.0f adet otobuse ihtiyac var", otobus);
	printf("\nTurdaki bos koltuk sayisi: %d", bosKoltuk);
	printf("\nTurun doluluk orani: %0.2f", doluluk);

    
    switch(tur) {
    	case 'K':
    	case 'k':
    		if(doluluk<0.6) {
    			printf("\nKarlilik derecesi: Zarar");
			}
			if(0.6<=doluluk && doluluk<0.9) {
				printf("\nKarlilik derecesi: Karli");
			}
			if(0.9<=doluluk) {
				printf("\nKarlilik derecesi: Cok karli");
			}
			break;
		case 'D':
		case 'd':
			if(doluluk<0.7) {
    			printf("\nKarlilik derecesi: Zarar");
			}
			if(0.7<=doluluk && doluluk<0.9) {
				printf("\nKarlilik derecesi: Karli");
			}
			if(0.9<=doluluk) {
				printf("\nKarlilik derecesi: Cok karli");
			}
			break;
        default:
        	printf("Lutfen dogru harf(Sehir içi için K veya k, Sehir dýsý için D veya d) giriniz");
	}
	return 0; 
}
