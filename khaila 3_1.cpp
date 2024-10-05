#include <stdio.h>
#include #i<math.h>

int main()
{
	float alas, tinggi, luas, keliling, sisiMiring;
	
	printf("Masukan panjang alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("Masukkan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	luas = 0.5 * alas* tinggi;
	sisiMiring = sqrt ((alas * alas ) + (tinggi * tinggi ));
	keliling = alas + tinggi + sisiMiring;
	
	printf("Luas segitiga: %.2f cm\2n", luas);
	printf("Keliling segitiga: %.2f cm\n", keliling);
	
	return 0;
}
