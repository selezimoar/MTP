#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int num, i, menor, maior;
	
	printf("Digite o valor entre 1 e 1000: ");
	scanf("%d", &num);
	srand(time(0));
	int vet[num];
	for(i=0; i<num; i++)
	{
		vet[i]=rand()%10;
	}
	menor=vet[0];
	maior=vet[0];
	for(i=0; i<num; i++)
	{
		if(vet[i]<menor)
		menor=vet[i];
	}
	for(i=0; i<num; i++)
	{
		if(vet[i]>menor)
		maior=vet[i];
	}
	printf("O maior valor: %d\nMenor valor: %d", maior, menor);
	return 0;
}
