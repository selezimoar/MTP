#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<float.h>
#include<time.h>
#include <stdint.h>

int main(){
	
	int i;
	double num, num1, num2, num3, num4;
	num=DBL_EPSILON;
	printf("Epsilon e: %lf", num);
	num1=1-(DBL_EPSILON/4);
	if(num1<1)
	printf("\nE menor que 1");
	else
	printf("\nE maior ou igual a 1");
	
	srand(time(0));
	
	for(i=0; i < 10; i++) {
		num2=rand();
		num3=(float)num2/RAND_MAX;
		printf("\nValor: %lf", num3);
	}
	
	return 0;
	
}
	

