#include <stdio.h>

int main() {
	float mac1, mac2, mac3, pas1, pas2, pas3, hatalipas1, hatalipas2, hatalipas3;
	printf("Birinci futbolcunun oynadigi mac, isabetli ve hatali pas sayisini giriniz: ");
	scanf("%f%f%f", &mac1, &pas1, &hatalipas1);
	printf("Ikinci futbolcunun oynadigi mac, isabetli ve hatali pas sayisini giriniz: ");
	scanf("%f%f%f", &mac2, &pas2, &hatalipas2);
	printf("Ucuncu futbolcunun oynadigi mac, isabetli ve hatali pas sayisini giriniz: ");
	scanf("%f%f%f", &mac3, &pas3, &hatalipas3);
	
	float netpas1, netpas2, netpas3;
	netpas1 = (pas1 - hatalipas1)/mac1;
	netpas2 = (pas2 - hatalipas2)/mac2;
	netpas3 = (pas3 - hatalipas3)/mac3;
	
	if(netpas1>netpas2 && netpas2>netpas3)
	    printf("\nEn kotusu 3. futbolcudur.\n(Net isabetli pas= %0.1f)\n(Mac basina dusen net isabetli pas= %0.1f)", (pas3 - hatalipas3), netpas3);
	if(netpas2>netpas1 && netpas1>netpas3)
	    printf("\nEn kotusu 3. futbolcudur.\n(Net isabetli pas= %0.1f)\n(Mac basina dusen net isabetli pas= %0.1f)", (pas3 - hatalipas3), netpas3);
	if(netpas1>netpas3 && netpas3>netpas2)
	    printf("\nEn kotusu 2. futbolcudur.\n(Net isabetli pas= %0.1f)\n(Mac basina dusen net isabetli pas= %0.1f)", (pas2 - hatalipas2), netpas2);
	if(netpas3>netpas1 && netpas1>netpas2)
	    printf("\nEn kotusu 2. futbolcudur.\n(Net isabetli pas= %0.1f)\n(Mac basina dusen net isabetli pas= %0.1f)", (pas2 - hatalipas2), netpas2);
	if(netpas3>netpas2 && netpas2>netpas1)
	    printf("\nEn kotusu 1. futbolcudur.\n(Net isabetli pas= %0.1f)\n(Mac basina dusen net isabetli pas= %0.1f)", (pas1 - hatalipas1), netpas1);
	if(netpas2>netpas3 && netpas3>netpas1)
	    printf("\nEn kotusu 1. futbolcudur.\n(Net isabetli pas= %0.1f)\n(Mac basina dusen net isabetli pas= %0.1f)", (pas1 - hatalipas1), netpas1);
	
	return 0;
}
