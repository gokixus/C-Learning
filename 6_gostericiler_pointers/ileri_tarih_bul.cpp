#include <stdio.h>

int ilerideOlaniBul(int, int, int, int, int, int, int *, int *, int *);

int main() {
	int ilkGun, ilkAy, ilkYil;
	int ikiGun, ikiAy, ikiYil;
	printf("Birinci tarihi giriniz: ");
	scanf("%d%d%d", &ilkGun, &ilkAy, &ilkYil);
	printf("Ikinci tarihi giriniz: ");
	scanf("%d%d%d", &ikiGun, &ikiAy, &ikiYil);
	
	int ileriGun, ileriAy, ileriYil;
	ilerideOlaniBul(ilkGun, ilkAy, ilkYil, ikiGun, ikiAy, ikiYil, &ileriGun, &ileriAy, &ileriYil);
	printf("Ileride olan : %d / %d / %d", ileriGun, ileriAy, ileriYil);
}

int ilerideOlaniBul(int ilkGun, int ilkAy, int ilkYil, int ikiGun, int ikiAy, int ikiYil, int *ileriGunPtr, int *ileriAyPtr, int *ileriYilPtr) {
	if(ilkYil > ikiYil) {
		*ileriYilPtr = ilkYil;
		*ileriAyPtr = ilkAy;
		*ileriGunPtr = ilkGun;
	}
	else if(ilkYil == ikiYil) {
		*ileriYilPtr = ilkYil;
		if(ilkAy > ikiAy) {
			*ileriAyPtr = ilkAy;
			*ileriGunPtr = ilkGun;
		}
		if(ilkAy == ikiAy) {
			*ileriAyPtr = ilkAy;
			if(ilkGun > ikiGun) {
				*ileriGunPtr = ilkGun;
			}
			if(ilkGun == ikiGun) {
				printf("\nIkisi de ayni tarihtir. Ileride olan bir tarih yok\n");
				*ileriGunPtr = ilkGun;
			}
			else {
				*ileriGunPtr = ikiGun;
			}
		}
		else {
			*ileriAyPtr = ikiAy;
			*ileriGunPtr = ikiGun;
		}
	}
	else {
		*ileriYilPtr = ikiYil;
		*ileriAyPtr = ikiAy;
		*ileriGunPtr = ikiGun;
	}
}
