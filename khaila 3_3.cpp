#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi, miring;
	
	printf("Masukan sisi alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("Masukkan sisi tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	miring = sqrt((alas * alas ) + (tinggi * tinggi));
	
	printf("Sisi miring segitiga tersebut adalah: %.2f cm\n", miring);
	
	return 0;
}
