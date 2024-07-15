#include <stdio.h>

void ucgenCizdir();
void dikdortgenCizdir();

void ucgenCizdir() {
	printf("         /\\ \n");
	printf("        /  \\ \n");
	printf("       /    \\ \n");
	printf("      /      \\ \n");
	printf("     /        \\ \n");
	printf("    /          \\ \n");
	printf("   /            \\ \n");
	printf("  /              \\ \n");
	printf(" /                \\ \n");
	printf("/__________________\\ \n");
}

void dikdortgenCizdir() {
	printf(" _____________________________\n");
	printf("|                             |\n");
	printf("|                             |\n");
	printf("|                             |\n");
	printf("|                             |\n");
	printf("|_____________________________|\n");
}

void bosluk() {
	printf("\n\n");
}

int main() {
	ucgenCizdir();
	dikdortgenCizdir();
	bosluk();
	ucgenCizdir();
	dikdortgenCizdir();
	return 0;
}
