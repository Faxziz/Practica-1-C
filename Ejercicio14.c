#include <stdio.h>

int main()
{
	float indice;
	float edad1, edad2, totE1, totE2;
	float prom1,prom2;
	int pacientes;
	int i=0;
	
	printf("Ingrese cuantos pacientes va a ingresar: ");
	scanf("%d", &pacientes);
	
	while(i < pacientes) {
		printf("Ingrese el indice del paciente: ");
		scanf("%f", &indice);
		if (indice < 0.6) {
			printf("Ingrese un indice valido");
			break;
		}
		if (indice > 0.6 && indice <= 0.9) {
			printf("Ingrese la edad del paciente: ");
			scanf("%f", &edad1);
			totE1 += edad1;
			}
		if (indice > 0.9) {
			printf("Ingrese la edad del paciente: ");
			scanf("%f", &edad2);
			totE2 += edad2;
			}
		
		
		if(indice > 0.6 && indice <= 0.9) {
			printf("Ingreso\n");
		} else {
			printf("Operacion\n");
		}
		
		i++;
		
		if (indice > 0.6 && indice < 0.9) {
			prom1 = totE1/i;
		}
		if (indice > 0.9) {
			prom2 = totE2/i;
		}
	}
	
	printf("\nLa edad promedio de los pacientes de ingreso es: %f", prom1);
	printf("\nLa edad promedio de los pacientes de operacion es: %f", prom2);
	
	return 0;
}

