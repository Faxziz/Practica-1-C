#include <stdio.h>

int maximo(int, int);

int main()
{
	int a,b,c,d;
	
	printf("Ingrese 4 numeros: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf("El maximo de los 4 numeros es: %d", maximo(maximo(a,b), maximo(c,d)));
	return 0;
}

int maximo(int a,int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
	return 0;
	}
