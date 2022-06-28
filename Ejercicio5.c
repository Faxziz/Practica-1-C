#include <stdio.h>

int main()
{
	int nota;
	
	printf("Ingrese una nota de un alumno: ");
	scanf("%d", &nota);
	
	if (nota > 2 && nota < 5) {
		printf("Insuficiente");
	} else if (nota == 6) {
		printf("Aprobado");
	} else if (nota == 7) {
		printf("Bueno");
	} else if (nota == 8) {
		printf("Muy bueno");
	} else if (nota == 9) {
		printf("Distinguido");
	} else if (nota == 10) {
		printf("Sobresaliente");
	} else {
		printf("Nota incorrecta");
	}
	
	
	if (nota > 2 && nota < 5) {
		printf("Insuficiente");
	} else {
		if(nota == 6) {
			printf("Aprobado");
		} else {
			if(nota == 7) {
				printf("Bueno");
			} else {
				if(nota == 8) {
					printf("Muy bueno");
				} else {
					if(nota == 9) {
						printf("Sobresaliente");
					} else {
						printf("Nota incorrecta");
					}
				}
			}
		}
	}
	return 0;
}

