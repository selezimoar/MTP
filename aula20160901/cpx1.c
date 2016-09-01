#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<float.h>
#include<time.h>
#include <stdint.h>

int main(){
	int real1, real2, img1, img2, soma1, soma2;
	printf("Digite a parte real");
	scanf("%d", &real1);
	printf("Digite a parte img");
	scanf("%d", &img1);
	printf("Digite a parte real2");
	scanf("%d", &real2);
	printf("Digite a parte img2");
	scanf("%d", &img2);
	
	soma1=real1+real2;
	soma2=img1+img2;
	
	printf("A soma e: %d+%di", soma1, soma2);
	
	return 0;
}
