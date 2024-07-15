#include <stdio.h> 

float lirayaCevir(int, int, int, int);

int main() {
	int para1, para2, kurus1, kurus2;
	printf("10 Para, 100 Para, 10 kurus ve 100 kurus miktarini giriniz: ");
	scanf("%d%d%d%d", &para1, &para2, &kurus1, &kurus2);
	printf("--------------------------------------------------------------\n");
	printf("Toplam = %0.2f", lirayaCevir(para1, para2, kurus1 ,kurus2));
}

float lirayaCevir(int para1, int para2, int kurus1, int kurus2) {
	return (para1*0.25 + para2*2.5 + kurus1*10 + kurus2*25)/100;
}
