#include <stdio.h>
#include <stdlib.h>
main() {
	int i, max, s, cal[i];
	float prom;
	char alum[100];
		printf("\nBienvenido\nIngrese el nombre del alumno: ");
		scanf("%s", &alum);
		printf("\nIngrese el numero de calificaciones que desea ingresar: \n");
		scanf("%i", &max);
		for(i=0;i<max;i++);{
		prtintf("\nIngrese la %i° calificacion: ", i+1);
		scanf("%i", cal[i]);
		s=s+cal[i];}
		prom=s/max;
		printf("El promedio de %s es: %.2f", alum, prom);
	return 0;
}
