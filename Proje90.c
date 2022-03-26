#include <stdio.h>
#include <stdlib.h>
#define puan 2.19
#define puan2 3.47

int main() {
	
	int Turkce,Matematik;
	
	printf("Turkce Netiniz: ");
	scanf("%d",&Turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%d",&Matematik);
	
	float sozelPuan,sayisalPuan;
	
	sozelPuan=Turkce*puan+Matematik*puan2+50.25;
	sayisalPuan=Matematik*puan2+Turkce*puan+51.45;
	
	printf("Toplam Puaniniz Sozel: %5.2f\n",sozelPuan);
	printf("Toplam Puaniniz Sayisal: %5.2f",sayisalPuan);
	
	return 0;
}
