#include <stdio.h>

int main() {
	float osayi1, osayi2, osayi3;
	printf("3 tane ondalikli sayi giriniz: ");
	scanf("%f%f%f", &osayi1, &osayi2, &osayi3);

    if(osayi1>osayi2 && osayi2>osayi3)
	    printf(" \n%f > %f > %f ", osayi1, osayi2, osayi3);
    if(osayi2>osayi1 && osayi1>osayi3)
	    printf(" \n%f > %f > %f ", osayi2, osayi1, osayi3);
    if(osayi3>osayi2 && osayi2>osayi1)
	    printf(" \n%f > %f > %f ", osayi3, osayi2, osayi1);
    if(osayi1>osayi3 && osayi3>osayi2)
	    printf(" \n%f > %f > %f ", osayi1, osayi3, osayi2);
    if(osayi2>osayi3 && osayi3>osayi1)
	    printf(" \n%f > %f > %f ", osayi2, osayi3, osayi1);
    if(osayi3>osayi1 && osayi1>osayi2)
	    printf(" \n%f > %f > %f ", osayi3, osayi1, osayi2);
    

	return 0;
}
