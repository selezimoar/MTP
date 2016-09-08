#include <stdio.h>
#include <stdlib.h>

int main()
{
	float vet[10], soma=0, mut;
	int i;
	for(i=0; i<10; i++)
	{
		printf("Digite o valor %d: ", i+1);
		scanf("%f", &vet[i]);
	}
	mut=vet[0];
	for(i=0; i<10; i++)
	{
		soma=soma+vet[i];
	}
	for(i=0; i<10; i++)
	{
		mut=mut*vet[i];
	}
	printf("Valor da somatoria: %f\nValor da produtoria: %f", soma, mut);
	
	return 0;
	
}
