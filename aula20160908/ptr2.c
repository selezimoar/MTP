#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetor[] = {0, 1, 2, 4, 8}, contagem;
	unsigned char *p = NULL, *q;
	p = q = (unsigned char *)vetor;
	contagem = 0;
		
	for(; p<q+sizeof(vetor); p++)
	{
		if(*p=! 0x0)
		{
			contagem = contagem+1;
			
		}
		printf("\n%p : %X\n", p, *p);
	}
	
	printf("\n%d\n", contagem);
	
	return 0;
}
