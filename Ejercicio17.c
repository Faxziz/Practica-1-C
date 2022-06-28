#include <stdio.h>
#include <math.h>
#include <assert.h>

int esRectangulo(int,int,int);
void testing();

int main()
{
	int a,b,c;
	
	printf("Ingrese 3 enteros: ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("Es rectangulo (1), o no (0): %d", esRectangulo(a,b,c));
	
	testing();	
	return 0;
}

int esRectangulo(int a,int b,int c) {
	if (a > b && a > c) {
		if (pow(a,2) == pow(b,2) + pow(c,2)) {
			return 1;
		}
	}
	if (b > a && b > c) {
		if (pow(b,2) == pow(a,2) + pow(c,2)) {
			return 1;
		}
	}
	if (c > b && c > a) {
		if (pow(c,2) == pow(b,2) + pow(a,2)) {
			return 1;
		}
	}
	return 0;
}

void testing() {
	assert(esRectangulo(3,5,4)==1);
	assert(esRectangulo(5,13,12)==1);
	assert(esRectangulo(7,3,5)==0);
}
