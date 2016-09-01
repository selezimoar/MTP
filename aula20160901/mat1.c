#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double x1, x2, y1, y2, distancia, dx, dy, dxy;
	printf("Digite as coordenadas do primeiro ponto: \n");
	scanf("%lf %lf", &x1, &y1);
	printf("Digite as coordenadas do segundo ponto: \n");
	scanf("%lf %lf", &x2, &y2);
	dx=x2-x1;
	dy=y2-y1;
	dxy=(dx*dx)+(dy*dy);
	distancia=sqrt(dxy);
	
	printf("Distancia e: %lf", distancia);
	return 0;
}
	
