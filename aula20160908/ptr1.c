#include <stdio.h>
#include <stdlib.h>


int main()
{
	unsigned int numero = 0xFACA8421;
	unsigned char *p = NULL; //Inicializar ponteiros 
	printf("\n%p : %u\n", &numero, numero);
	p = (unsigned char *) &numero;
	
	for(; p<(unsigned char *) &numero+sizeof(int); p++)
	printf("\n%p : %X\n", p, *p);
	
	
	
	
	
	
	
	
	
	return 0;
}
