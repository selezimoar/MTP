#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>



int main()
{
	int i; float f; char c;
	printf("Entre com um inteiro: "); recebe_dado('i', &i);
	printf("Entre com um float: "); recebe_dado('f', &f);
	printf("Entre com um caracter: "); recebe_dado('c', &c);
	
	printf("Para %d, o quadrado: %d\n", i, i*i);
	printf("Para %f, a raiz: %d\f", f, sqrt(f));
	printf("Para %c, o caracter: %c\n", c, (islower(c) ? toupper(c): tolower(c)));
    
    
    
    return 0;
}
void recebe_dado(char tipo, void *endereco)
{
	switch(tipo)
	{
		case 'i': scanf("%d", (int*) endereco); break;
		case 'f': scanf("%f", (float*) endereco); break;
		case 'c': scanf("%c", (char*) endereco); break;
	}
	while((c = getchar()) !=EOF && c!='\n');
}
