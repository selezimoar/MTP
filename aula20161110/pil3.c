#include <stdio.h>
#include <stdlib.h>
typedef int DADO;
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
	int  i, num, op, cont=0;
	FILE *arquivo;
	Pilha * pilha=NULL;

	
	
	do{
		
		printf("\nDigite um numero:");
		scanf("%d", &num);
		if(num>0)
		push(&pilha, num);
		cont++;
	}while(num>0);
	printf("\n1 - Imprimir sequencia\n2 - Gravar sequencia\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1 :{
	 	while(!empty(pilha))	
		{
			printf("%d ", top(pilha));
			pop(&pilha);
		}
		printf("\n");	
		}
		case 2 : 
			arquivo = fopen("minha_sequencia.txt", "w");
			if(arquivo == NULL)
        		fprintf(stderr, "Erro na criacao do arquivo!\n");
    		else {
    			
        		while(!empty(pilha)){
	           	   	  fprintf(arquivo, "%d\n", top(pilha));
	           	   	  pop(&pilha);
	           	   }
        		  fclose(arquivo);
    			 }	
	
			break;
		
		
		
	};
	

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


