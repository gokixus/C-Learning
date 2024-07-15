#include <stdio.h>

int topla(int pay1, int pay2, int payda1, int payda2, int *toplamPayPtr, int *toplamPaydaPtr, int *a, int *b) {
	if(payda1 == payda2) {
		*toplamPayPtr = pay1 + pay2;
		*toplamPaydaPtr = payda1;
	}
	else {
		*toplamPayPtr = pay1*payda2 + pay2*payda1;
		*toplamPaydaPtr = payda1*payda2;
	}
	
	*a = *toplamPayPtr;
	*b = *toplamPaydaPtr;
	int n;
	if(*a > *b) {
		n = *b;
	}
	else {
		n = *a;
	}
	
	for(int i = n ; i >= 1 ; i--) {
		if(*a % i == 0 && *b % i == 0) {
			*a /= i;
			*b /= i;
			break;
		}
	}
}

int main() {
	int pay1, pay2, payda1, payda2;
	printf("Birinci ifadenin payini ve paydasini giriniz: ");
	scanf("%d%d", &pay1, &payda1);
	printf("Ikinci ifadenin payini ve paydasini giriniz: ");
	scanf("%d%d", &pay2, &payda2);
	
	int toplamPay, toplamPayda, paySadelestir, paydaSadelestir;
	topla(pay1, pay2, payda1, payda2, &toplamPay, &toplamPayda, &paySadelestir, &paydaSadelestir);
	printf("\n	%d		%d		%d		%d\n", pay1, pay2, toplamPay, paySadelestir);
	printf("	--	+	--	=	--	=	--\n");
	printf("	%d		%d		%d		%d\n", payda1, payda2, toplamPayda, paydaSadelestir);
	return 0;
}
