#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double lado1, lado2, ang, c1, c2, lado;
	printf("Digite dois lados de um triangulo");
	scanf("%lf %lf", &lado1, &lado2);
	printf("Digite o angulo em radianos");
	scanf("%lf", &ang);
	ang=cos(ang);
	c1=(lado1*lado1)+(lado2*lado2);
	c2=2*(lado1*lado2)*ang;
	lado=sqrt(c1-c2);
	printf("O lado e: %lf", lado);
	
	return 0;
	
}
	
	
