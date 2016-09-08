#include <stdio.h>
#include <stdlib.h>


int main()
{
	float vet[2], soma;
	int i;
	
	for(i=0; i<2; i++)
	{
		printf("\nDigite o valor %d:\n", i+1);
		scanf("%f", &vet[i]);
	}
	printf("Endereco 1: %X, Valor 1: %g\nEndereco 2:%X, Valor 2:%g",&vet[0], vet[0], &vet[1], vet[1]);
	soma=vet[0]+vet[1];
	printf("\nEndereco soma: %X, Valor soma:%g\n", &soma, soma);
	
	return 0;
}
