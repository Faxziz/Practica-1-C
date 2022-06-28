#include <stdio.h>

int main()
{
	float agua;
	
	printf("Ingrese una temperatura del agua: ");
	scanf("%f", &agua);
	
	if(agua < 0) {
		printf("Agua en estado solido");
	} else if (agua > 0 && agua < 100) {
		printf("Agua en estado liquido");
	} else {
		printf("Agua en estado gaseoso");
	}
	
	return 0;
}

