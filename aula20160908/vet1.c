#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int main()
{
	srand(time(0));
	float aleatorios[N], soma=0, media=0;
	unsigned int numero;
	int i;
	
	printf("Entre com um numero nao negativo: ");
	scanf("%u", &numero);
	for(i=0; i<N; i++)
	{
		aleatorios[i]=rand()%numero+1;
	}
	for(i=0; i<N; i++)
	soma=soma+aleatorios[i];
	
	media=soma/N;
	
	printf("\nMedia: %f", media);
	
	return 0;
}
