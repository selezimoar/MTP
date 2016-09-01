#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	char olheiro;
	char frase[256];
	int indice=0, contagem=0;
	printf("Digite uma frase\n");
	gets(frase);
	
	olheiro = frase[indice];
	while(olheiro != '\0')
	{
		if(isalpha(olheiro)) 
		{
		contagem=contagem+1;
		
	    }
	    indice ++;
	    olheiro = frase[indice];
	    
	}
	
	printf("Quantidade de letras: %d", contagem);
	return 0;
	
}
