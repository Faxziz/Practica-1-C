#include <stdio.h>
#include <assert.h>

int ladosTriangulo(int,int,int);
void testing();

int main()
{
	int a,b,c;
	
	printf("Ingrese 3 numeros: ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("Es triangulo si(1) no(0): %d", ladosTriangulo(a,b,c));
	testing();
	return 0;
}

int ladosTriangulo(int a,int b,int c) {
	if (a > b && a > c) {
		if (a < b + c) {
			return 1;
		}
	} else if (b > a && b > c) {
		if (b < a + c) {
			return 1;
		}
	} else if (c > a && c > b) {
		if (c < b + a) {
			return 1;
		}
	}
	
	return 0;
}


void testing() {
	assert(ladosTriangulo(3,4,7)==0);
	assert(ladosTriangulo(5,7,8)==1);
	assert(ladosTriangulo(6,5,4)==1);
}
