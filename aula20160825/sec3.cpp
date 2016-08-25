#include <stdio.h>
#include <stdlib.h>

int main(){
	
		float A, B, C, ME;
	printf("Digite a primeira nota: ");
	scanf("%f", &A);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &B);
	printf("\nDigite a terceira nota: ");
	scanf("%f", &C);
	
	ME=((2*A)+(3*B)+(5*C))/10;
	
	printf("A media do aluno e: %f\n", ME);
	
	
       return 0;     	
}
