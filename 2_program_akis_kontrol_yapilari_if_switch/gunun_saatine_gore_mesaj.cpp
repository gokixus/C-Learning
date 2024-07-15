#include <stdio.h>

int main() {
	int saat;
	printf("Gunun saatini giriniz: ");
	scanf("%d", &saat);
	
	if(saat<6)
	    printf("Iyi uykular!");
	else if(6<=saat && saat<11)
	    printf("Gunaydin!");
	else if(11<=saat && saat<17)
	    printf("Iyi Gunler!");
	else if(17<=saat && saat<22)
	    printf("Iyi Aksamlar!");
	else if(22<=saat && saat<24)
	    printf("Iyi Geceler!");
	    
	return 0;
}
