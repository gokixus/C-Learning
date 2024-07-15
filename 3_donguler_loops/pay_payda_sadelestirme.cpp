#include <stdio.h>

int main() {
	int pay, payda;
	
	for(pay = 10 ; pay <= 99 ; pay++) {
		for(payda = pay + 1 ; payda <= 99 ; payda++) {
			if(pay % 10 == payda/10) {
				int sade_pay = pay/10;
				int sade_payda = payda%10;
				if((float)pay / payda == (float)sade_pay / sade_payda) {
					printf("%d/%d = %d/%d\n", pay, payda, sade_pay, sade_payda);
				}
			}
		}
	}
	return 0;
}
