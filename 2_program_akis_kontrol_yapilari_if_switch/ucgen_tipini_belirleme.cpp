#include <stdio.h>

int main() {
    float a,b,c;
    printf("a, b, c uzunluklarini giriniz: ");
    scanf("%f %f %f",&a,&b,&c);
    
    if(a+b>c && a+c>b && b+c>a) //��genin olu�up olu�mad��� kontrol ediliyor
    {  
        if(a==b && b==c) //e�kenar ��gen
            printf("\nBu bir ucgen. Bu ucgenin tipi:\nEskanar ucgendir.");
        else if(a==b || a==c || b==c) //ikizkenar ��gen
            printf("\nBu bir ucgen. Bu ucgenin tipi:\nIkizkenar ucgendir.");
        else //�e�itkenar ��gen
            printf("\nBu bir ucgen. Bu ucgenin tipi:\nCesitkenar ucgendir.");
    } 
    else //��gen olu�muyorsa hata mesaj� verilecek
        printf("\nUcgen olusmaz!");
    
	return 0;
}
