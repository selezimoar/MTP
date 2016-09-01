#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	char olheiro;
	char frase[256];
	int indice=0;
	printf("Digite a uma frase\n");
	gets(frase);
	
	olheiro = frase[indice];
	while(olheiro != '\0')
	{
		frase[indice] = toupper(olheiro);
		indice ++;
		olheiro = frase[indice];
	}
	
	printf("\n%s",frase);
	return 0;
	
}
