#include <stdio.h>

int main() {
	int trafik_yanlis;
	int motor_yanlis;
	int yardim_yanlis;
	
	printf("Trafik dersinin sinavindan yaptiginiz yanlis sayisini giriniz(en fazla 50): ");
	scanf("%d", &trafik_yanlis);
	printf("Motor dersinin sinavindan yaptiginiz yanlis sayisini giriniz(en fazla 40): ");
	scanf("%d", &motor_yanlis);
	printf("Ilk yardim dersinin sinavindan yaptiginiz yanlis sayisini giriniz(en fazla 30): ");
	scanf("%d", &yardim_yanlis);
	
	float trafik_puan = 100 - trafik_yanlis*2;
	printf("\n\nTrafik puaniniz: %f", trafik_puan);
	float motor_puan = 100 - motor_yanlis*2.5;
	printf("\nMotor puaniniz: %f", motor_puan);
	float yardim_puan = 100 - yardim_yanlis*3.334;
	printf("\nIlk yardim puaniniz: %f", yardim_puan);
	
	if(trafik_puan >= 70 && motor_puan >= 70 && yardim_puan >= 70)
        printf("\nDireksiyon sinavina katilabilirsiniz.");
    else
        printf("\n\nUzgunuz direksiyon sinavina katilamazsiniz.");

    return 0;
}
