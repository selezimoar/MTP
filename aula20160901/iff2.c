#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<float.h>
#include<time.h>
#include <stdint.h>

int main(){
	
	int i;
	double num, fat;
	printf("Digite um numero: ");
	scanf("%lf", &num);
	fat=num;
	for(i=1; i<num; i++)
	fat=fat*i;
	
	printf("\nFatorial e: %lf", fat);
	return 0;
}
