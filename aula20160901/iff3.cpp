#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<float.h>
#include<time.h>
#include <stdint.h>

int main(){
	
	int i, num;
	float num1=0, f;
	double num2=0, d;
	printf("Digite um numero: ");
	scanf("%d", &num);
	f=1.0f/num;
	d=1.0/num;
	for(i=0; i<729; i++)
	num1=num1+f;
	
	for(i=0; i<729; i++)
	num2=num2+d;
	
	printf("O valor float %.15f", num1);
	printf("\nO valor double %.15lf", num2);
	
	return 0;
	
}
