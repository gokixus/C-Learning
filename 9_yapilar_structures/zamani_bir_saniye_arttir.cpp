#include <stdio.h>

struct zaman {
	int saat;
	int dak;
	int san;
};

void birSnArttir(struct zaman *);

int main() {
	struct zaman a = {23, 59, 59};
	
	printf("Zamanin ilk hali = %02d:%02d:%02d\n", a.saat, a.dak, a.san);
	birSnArttir(&a);
	printf("Bir saniye arttirilmis hali = %02d:%02d:%02d\n", a.saat, a.dak, a.san);
	return 0;
}

void birSnArttir(struct zaman *ptr) {
	ptr->san = ptr->san + 1;
	if(ptr->san >= 60) {
		ptr->san = 0;
		ptr->dak = ptr->dak + 1;
		if(ptr->dak >= 60) {
			ptr->dak = 0;
			ptr->saat = (ptr->saat + 1) % 24;
		}
	}
}
