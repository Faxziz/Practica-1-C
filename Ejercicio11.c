#include <stdio.h>

int main()
{
	int a,b;
	
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	
	printf("Ingrese un numero mayor: ");
	scanf("%d", &b);
	
	while (a <= b) {
		printf("%d\n", a);
		a++;
	}
	return 0;
}

