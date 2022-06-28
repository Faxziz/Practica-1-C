#include <stdio.h>

int main()
{
	double fact;
	int i = 1;
	double calc = 1;
	
	printf("Ingrese un numero a determinar su factorial: ");
	scanf("%lf", &fact);
	
	while (i <= fact) {
		calc *= i;
		i++;
	}
	
	printf("El factorial de %lf es: %lf", fact, calc);
	return 0;
}

