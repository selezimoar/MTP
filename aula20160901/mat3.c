#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double num, base, log1, log2, log3;
	printf("Digite o numero: ");
	scanf("%lf", &num);
	printf("\nDigite a base: ");
	scanf("%lf", &base);
	log1=log(num);
	log2=log(base);
	log3=log1/log2;
	
	printf("\nO valor e: %lf", log3);
	return 0;
	
}
	
	
