#include <stdio.h>

int main() {
    float a,b,c;
    printf("a, b, c uzunluklarini giriniz: ");
    scanf("%f %f %f",&a,&b,&c);
    
    if(a+b>c && a+c>b && b+c>a) //üçgenin oluþup oluþmadýðý kontrol ediliyor
    {  
        if(a==b && b==c) //eþkenar üçgen
            printf("\nBu bir ucgen. Bu ucgenin tipi:\nEskanar ucgendir.");
        else if(a==b || a==c || b==c) //ikizkenar üçgen
            printf("\nBu bir ucgen. Bu ucgenin tipi:\nIkizkenar ucgendir.");
        else //çeþitkenar üçgen
            printf("\nBu bir ucgen. Bu ucgenin tipi:\nCesitkenar ucgendir.");
    } 
    else //üçgen oluþmuyorsa hata mesajý verilecek
        printf("\nUcgen olusmaz!");
    
	return 0;
}
