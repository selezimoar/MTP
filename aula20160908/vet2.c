#include <stdio.h>
#include <stdlib.h>

int main()
{
	float vet[10], *p;
	int i;
	for(i=0; i<10; i++)
	{
		printf("Digite o valor %d: ", i+1);
		scanf("%f", &vet[i]);
	}
	p=&vet[9];
	for(p;; p--)
	{
		printf("\n%f", *p);
		if(p==&vet[0])
		break;
	}
	
	
	return 0;
}
