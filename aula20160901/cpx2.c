#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<float.h>
#include<time.h>
#include <stdint.h>
#include <complex.h>

int main(){
	double complex Z1, Z2, conjug, preal, pimag;
	printf("Real de Z1: ");
	scanf("%lf", &preal);
	printf("Img de Z1");
	scanf("%lf", &pimag);
	Z1=preal + pimag * I;
	Z2=preal - pimag * I;
	conjug=Z1*Z2;
	
	printf("\nResultado: %lf/_ %lf rad", cabs(conjug), carg(conjug));
	
	return 0;
}
