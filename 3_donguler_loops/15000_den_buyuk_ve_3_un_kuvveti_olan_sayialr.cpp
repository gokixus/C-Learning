#include <stdio.h>
#include <math.h>

int main() {
	int us;
	int enkucuksayi = -1;
	int sayi = 9999999;
	
	for(us = 0 ; us <=100 ; us++) {
		int kuvvet = pow(3, us);
		if(15000 <= kuvvet && kuvvet < sayi){
			enkucuksayi = kuvvet;
			sayi = kuvvet;
		}
	}
	int ussu = log(enkucuksayi) / log(3);
	printf("\n15000'den buyuk ve 3'un kuvvet olan en kucuk tamsayi %d", enkucuksayi);
	printf("\nBu sayi 3'un %d'inci kuvvetidir", ussu) ;
}
