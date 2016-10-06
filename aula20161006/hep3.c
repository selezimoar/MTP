#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



char *iniciaTexto();
void recebeTexto(char **texto);

int main()
{
	char * texto = iniciaTexto();
	printf(":::::::::::::: Inicio ::::::::::::::\n");
	recebeTexto(&texto);
	printf("%s", texto);
	printf("Tamanho da string", strlen(texto));
	free(texto);
	
	
	
	return 0;
}
char *iniciaTexto()
{
	char *texto = (char*) malloc(sizeof(char));
	texto[0] = '\n';
	return texto;
}
void recebeTexto(char **texto)
{
	char *aux;
	int c, tamanho=0;
	do{
		c=getchar();
		if(c != '#'){
			*texto[tamanho] = c;
			tamanho++;
			aux=(char *) realloc(texto, tamanho+2);
			if(aux!=NULL){
				*texto = aux;
				(*texto)[tamanho-1] = c;
				tamanho++;
				(*texto)[tamanho]='0';
			}
			else printf("*** Erro! Sem memoria ***\n");
				
		}
	}while(c!= '#');
}
