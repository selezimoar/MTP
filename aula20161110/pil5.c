#include <stdio.h>
#include <stdlib.h>
typedef float DADO;
typedef struct Pilha_ {
	DADO topo;
	struct Pilha_ *proximo;
	}Pilha;
	
void push(Pilha ** ppilha, DADO elemento);
void pop(Pilha ** ppilha);
DADO top(Pilha * pilha);
int empty(Pilha * pilha);
int main ()
{
	int  i, op, cont=0;
	float num;
	FILE *arquivo;
	Pilha * pilha=NULL;



	arquivo = fopen("dados.txt", "r");
	while(!feof(arquivo))
	{
		
		fscanf(arquivo, "%f", &num);
		push(&pilha, num);
		
	}
	
	while(!empty(pilha))
	{
		{
	        printf("%.4f\n", top(pilha));
	        pop(&pilha);
	    }
        	
    }	
	fclose(arquivo);
		
		
		

	

	return 0;
}
void push(Pilha ** ppilha, DADO elemento)
{
	Pilha * novo = (Pilha*) malloc(sizeof(Pilha));
	novo->topo=elemento;
	novo->proximo = *ppilha;
	*ppilha = novo;
}
void pop(Pilha ** ppilha)
{
	Pilha * aux = NULL;
	if(!empty(*ppilha))
	{
		aux = (*ppilha)->proximo;
		free(*ppilha);
		*ppilha = aux;
	}
	else
	fprintf(stdout, "\nWARNING :::: Pilha Vazia!\n");
}
DADO top(Pilha *pilha)
{
	return pilha->topo;
	
}
int empty(Pilha *pilha)
{
	return (pilha == NULL);
}


